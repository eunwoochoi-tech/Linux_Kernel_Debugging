## 1. core.c
### 목표 : __schedule 함수가 호출되어 스케쥴링될 때 스케쥴링 대상ps와 다음에 실행될 ps의 state값을 확인
---

### line 3514 : prev와 next의 state값을 각각 출력
``` c
3514 +   trace_printk("[+] prev->state:%d, next->state: %d \n", prev->state, next->state);
```
