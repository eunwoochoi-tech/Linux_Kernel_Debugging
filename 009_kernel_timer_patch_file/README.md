## 1. timekeeping.c
### 목표 : 라즈베리파이3+의 jiffies값이 100이므로 10ms간격으로 jiffies가 업데이트 되는 것을 ftrace로 확인
---

### line 2200 : 실제 jiffies값을 출력하며 do_timer를 호출한 함수의 이름도 같이 출력하고 있다.
### line 2201 : 2권 21p.g에 MAX_JIFFY_OFFSET의 값이 0x1FFFFFFE로 나와있는데 실제 값은 0x3FFFFFFE여서 해당 값을 출력하고 있다
``` c
2200 +   trace_printk("[+] jiffies_64: %llu, caller: $pS\n", jiffies_64, (void*)__built_in_return_address(0));
2201 +   trace_printk("[+] MAX_JIFFY_OFFSET : %lu \n", MAX_JIFFY_OFFSET);
```
