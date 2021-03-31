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

### line 782 ~ 832 : 현재정보 출력 -> global_func_exe_times변수의 값 1 증가 -> trace_function_dummy_call호출 -> 현재 정보 다시 출력
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
