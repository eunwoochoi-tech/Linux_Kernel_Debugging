## 1. bcm2835_mailbox.c
### bcm2835_mbox_irq 딜레이 워크를 직접 생성해보고 실행하는 흐름을 파악하기 위함

#### line 2521 : 292.411882 시각에 timer_start가 호출되었으며 이는 직접 생성한 딜레이 워크의 타이머이다 (타이머의 주소값은 0022bf52)
<img width="1153" alt="Screen Shot 2021-03-25 at 8 54 57 PM" src="https://user-images.githubusercontent.com/50316116/112469085-63038b00-8dac-11eb-80b9-35733ad6c675.png">

---

#### line 2961 ~ 2963 : 2961번, 2963번 라인을 보면 0022bf52 타이머가 종료되었으며 delayed_work_timer_fn함수를 호출하게 된다
#### line 2965 ~ 2967 : 타이머가 종료되었으므로 워크를 큐잉하는 함수가 호출된다(__queue_work -> insert_work) 큐잉되었다면 스케줄러에 의해 실행되기를 기다리는 중이다
<img width="1228" alt="Screen Shot 2021-03-25 at 8 56 56 PM" src="https://user-images.githubusercontent.com/50316116/112469290-a6f69000-8dac-11eb-8066-5a3bca0cace1.png">

---

#### line 2989 : 워커 스레드가 워커를 처리하기 위해 sched_wakeup 되었다
#### line 2990 : 0022bf52 타이머, 즉 딜레이 워크의 타이머가 완전히 종료되었다
#### line 2992 : 스케줄러에 의해 brcmf_wdog/mmc1-259 프로세스에서 워커스레드로 sched_switch 되었다
#### line 2994 ~ 3004 : 딜레이 워크의 콜백함수인 bcm2835_mbox_delayed_work_callback 함수가 호출되어 그 내용을 실행하였다
<img width="1425" alt="Screen Shot 2021-03-25 at 9 10 06 PM" src="https://user-images.githubusercontent.com/50316116/112470852-8596a380-8dae-11eb-99ae-76c665cd2083.png">
