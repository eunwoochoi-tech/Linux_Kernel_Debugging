## 1. Softirq.c
### line 458
### softirq를 등록하는 함수의 콜스택을 확인하여 어떤종류의 softirq service가 등록되며 언제 실행되는지 확인
``` c
void open_softirq(int nr, void (*action)(struct softirq_action *))
{
	softirq_vec[nr].action = action;

+	dump_stack();
}
```
