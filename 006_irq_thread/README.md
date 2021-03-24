## ftrace.log파일 분석
### 1. function_graph ftrace

 - function_graph를 사용하여 irq_thread의 실행시간 측정
 - 아래 사진을 보면 sched_switch가 발생하여 idle -> irq/86--81 프로세스로 실행권이 넘어감
 - irq_thread가 실행된 것을 확인 가능하며 bcm2835인터럽트의 경우 소요시간이 약 5.104 us 이다

<img width="1107" alt="Screen Shot 2021-03-22 at 9 39 44 PM" src="https://user-images.githubusercontent.com/50316116/111990972-225f0400-8b57-11eb-9a9a-8f064609f6b2.png">
