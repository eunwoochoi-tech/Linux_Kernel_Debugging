## 1. Softirq.c
### line 458
### softirq를 등록하는 함수의 콜스택을 확인하여 어떤종류의 softirq service가 등록되며 언제 실행되는지 확인
``` c
454	void open_softirq(int nr, void (*action)(struct softirq_action *))
455	{
456  		softirq_vec[nr].action = action;
457
458   +		dump_stack();
459	}
```
