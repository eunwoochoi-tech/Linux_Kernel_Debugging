## 1. timekeeping.c
### 목표 : 라즈베리파이3+의 jiffies값이 100이므로 10ms간격으로 jiffies가 업데이트 되는 것을 ftrace로 확인
---

### line 2200 : 실제 jiffies값을 출력하며 do_timer를 호출한 함수의 이름도 같이 출력하고 있다.
### line 2201 : 2권 21p.g에 MAX_JIFFY_OFFSET의 값이 0x1FFFFFFE로 나와있는데 실제 값은 0x3FFFFFFE여서 해당 값을 출력하고 있다
``` c
2200 +   trace_printk("[+] jiffies_64: %llu, caller: $pS\n", jiffies_64, (void*)__built_in_return_address(0));
2201 +   trace_printk("[+] MAX_JIFFY_OFFSET : %lu \n", MAX_JIFFY_OFFSET);
```

## 2. hcd.c
### 목표 : 타이머 콜스택에서 raspbian_debug_state의 값이 701일 때 raspbian_trace_debug_info()함수 호출(해당 함수는 콜스택을 출력함)
``` c
792 +   extern void raspbian_trace_debug_info(void);
793 +   extern uint32_t raspbian_debug_state;
-----------
800 +   if (raspbian_debug_state == 701)
801 +   {
802 +      raspbian_trace_debug_info();
803 +   }
```

## 3. softirq.c
### 목표 : 
``` c
419 +   extern void raspbian_trace_debug_info(void);
420 +   extern uint32_t raspbian_debug_state;
----------
425     inline void raise_softirq_irqoff(unsigned int nr)
426     {
427        __raise_softirq_irqoff(nr);
428
429 +      if ( (nr == TIMER_SOFTIRQ) && (raspbian_debug_state == 701) )
430 +      {
431 +         raspbian_trace_debug_info();
431 +      }
432        -------
445     }
```

## 4. timer.c
### 목표 : 
``` c
947 +   extern uint32_t raspbian_debug_state;
948
949 +   void raspbian_trace_debug_info(void)
950 +   {
951 +      void* stack = NULL;
952 +      struct thread_info* current_thread;
953
954 +      stack = current->stack;
955 +      current_thread = (struct thread_info*)stack;
956
957 +      trace_printk("[-][%s]jiffies_64: %llu, caller:%pS \n", current->comm, jiffies_64, (void*)__builtin_return_address(0));
958
959 +      trace_printk("[-] in_softirq(): 0x%08x, preempt_count = 0x%08x \n", (unsigned int)in_softirq(), (unsigned int)current_thread->preempt_count);
960        
961     }
------------
966     static inline int
967     __mod_timer(struct timer_list* timer, unsigned long expires, unsigned int options)
968     {
969        --------------
1003 +     if(raspbian_edbug_state == 701)
1034 +     {
1035 +        raspbian_trace_debug_info();
1036 +     }
1037       ----------------------
1048    }
```
