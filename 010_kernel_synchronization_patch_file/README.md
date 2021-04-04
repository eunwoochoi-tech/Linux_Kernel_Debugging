## 1. timekeeping.c
### 목표 : 프로세스가 종료되면서 호출되는 do_exit함수내부에 패치코드를 추가하여 레이스 컨디션 상황을 연출해 보기
---

### line 770 ~ 775 : 정적 글로벌 변수 선언 및 현재 정보출력 함수 선언
``` c
770 +   static int global_func_exe_times = 0;
771 +   
772 +   void trace_function_dummy_call(void)
773 +   {
774 +       trace_printk("[++] comm:%s, pid:%d, from(%pS) \n", current->comm, current->pid, (void*)__builtin_return_address(0));
775 +   }
```

### line 782 ~ 832 : 현재정보 출력 -> global_func_exe_times변수의 값 1 증가 -> trace_function_dummy_call호출 -> 현재 정보 다시 출력
``` c
777     void __noreturn do_exit(long code)
778     {
779         ------
782 +       trace_printk("[+] comm: %s, pid: %d, global_func_exe_times: %d\n", current->comm, current->pid, global_func_exe_times);
783 +
784 +       global_func_exe_times++;
785 +       trace_function_dummy_call();
786         ------
832 +       trace_printk("[-] comm: %s, pid: %d, global_func_exe_times: %d\n", current->comm, current->pid, global_func_exe_times);
833         ------
952     }
```

## 2. spinlock.c
### 목표 : spinlock을 획득하기 전, 획득한 후, 릴리즈하기 전, 릴리즈 후 의 next와 owner의 값을 확인해보기 위함
### line 162, 169 : spinlock획득 전의 spinlock값과 __raw_spin_lock_irqsave함수 호출 후 spinlock을 획득한 상태의 spinlock값을 출력
### line 208, 216 : spinlock릴리즈 전의 spinlock값과 __raw_spin_unlock_irqsave함수 호출 후 spinlock를 릴리즈한 상태의 spinlock값을 출력
```c
153   unsigned long __lockfunc _raw_spin_lock_irqsave(raw_spinlock_t *lock)
154   {
155 +     // return __raw_spin_lock_irqsave(lock);
156 +     unsigned long ret_flags;
157 +     arch_spinlock_t lockval;
158 
159 +     if (901 == raspbian_debug_state)
160 +     {
161 +         lockval = lock->raw_lock;
162 +         trace_printk("[+] start spin_lock[%p] owner: 0x%x, next: 0x%x, process: %p \n", lock, lockval.tickets.owne    r, lockval.tickets.next, current);
163 +     }
164 
165 +     ret_flags = __raw_spin_lock_irqsave(lock);
166 +     if (901 == raspbian_debug_state)
167 +     {
168 +         lockval = lock->raw_lock;
169 +         trace_printk("[+] end spin_lock[%p] owner: 0x%x, next: 0x%x, process: %p \n", lock, lockval.tickets.owner,     lockval.tickets.next, current);
170 +     }
171 
172 +     return ret_flags;
173 }
------
202   void __lockfunc _raw_spin_unlock_irqrestore(raw_spinlock_t *lock, unsigned long flags)
203   {
204 +     arch_spinlock_t lockval;
205 +     if (901 == raspbian_debug_state)
206 +     {
207 +         lockval = lock->raw_lock;
208 +         trace_printk("[-] start spin_unlock[%p] owner: 0x%x, next: 0x%x, process: %p \n", lock, lockval.tickets.ow    ner, lockval.tickets.next, current);
209 +     }
210 
211       __raw_spin_unlock_irqrestore(lock, flags);
212 
213 +     if (901 == raspbian_debug_state)
214 +     {
215 +         lcokval = lock->raw_lock;
216 +         trace_printk("[-] end spin_unlock[%p] owner: 0x%x, next: 0x%x, process: %p \n", lock, lockval.tickets.owne    r, lockval.tickets.next, current);
217 +     }
219   }

```

## 3. mutex.c
### 목표 : fastpath방식으로 mutex를 획득할 때 mutex의 owner의 값의 변화를 보기 위함
### line 255 ~ 274 : mutex의 획득전 owner와 획득후 owner의 값을 출력
### line 724 ~ 749 : mutex를 릴리즈하기 전 owner와 릴리즈 후의 owner의 값을 출력
``` c
 255   void __sched mutex_lock(struct mutex *lock)
 256   {
 257 +     void* mutex_addr = NULL;
 258
 259 +     if (902 == raspbian_debug_state)
 260 +     {
 261 +         mutex_addr = (void*)lock;
 262 +         trace_printk("[+][fastpath] mutex_lock[%p] start.. owner:%lx, current_process:%lx\n", mu     tex_addr, atomic_long_read(&lock->owner), (long)current);
 263 +     }
 264
 265       might_sleep();
 266
 267       if (!__mutex_trylock_fast(lock))
 268           __mutex_lock_slowpath(lock);
 269
 270 +     if (902 == raspbian_debug_state)
 271 +     {
 272 +         trace_printk("[+][fastpath] mutex_lock[%p] start.. owner:%lx, current_process:%lx\n", mu     tex_addr, atomic_long_read(&lock->owner), (long)current);
 273 +     }
 274   }
```

```c
 724   void __sched mutex_unlock(struct mutex *lock)
 725   {
 726 +     void* mutex_addr = NULL;
 727
 728 +     if (902 == raspbian_debug_state)
 729 +     {
 730 +         mutex_addr = lock;
 731 +         trace_printk("[-] mutex_unlock[%p] start.. owner:0x%lx, current_process:%lx\n", mutex_ad     dr, atomic_long_read(&lock->owner), (long)current);
 732 +     }
 733   #ifndef CONFIG_DEBUG_LOCK_ALLOC
 734
 735 +     // if (__mutex_unlock_fast(lock))
 736 +     //  return;
 737 +     if (__mutex_unlock_fast(lock))
 738 +     {
 739 +         if (902 == raspbian_debug_state)
 740 +         {
 741 +             trace_printk("[-] mutex_unlock[%p] end.. owner:0x%lx, current_process:%lx\n", mutex_     addr, atomic_long_read(&lock->owner), (long)current);
 742 +         }
 743 + 
 744 +         return;
 745 +     }
 746
 747 #endif
 748     __mutex_unlock_slowpath(lock, _RET_IP_);
 749 }
```
