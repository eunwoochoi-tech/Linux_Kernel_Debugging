## ftrace.log 파일 분석

### 1. insert_work 호출
 - 4905, 4906 라인을 보면 sched_wakeup 및 sched_switch가 발생하여 워커 스레드를 실행
 - 4907 ~ 4918 worker_thread 내부에서 호출하는 process_one_work의 ftrace출력 및 워크 처리루틴 실행
 ```c
   static void process_one_work(struct worker *worker, struct work_struct *work)
   __releases(&pool->lock)
   __acquires(&pool->lock)
   {
      -----
      
      trace_workqueue_execute_start(work);
      worker->current_func(work);
      trace_workqueue_execute_end(work, worker->current_func);
      
      -----
   }
 ```
 - workqueue_execute_start와 workqueue_execute_end의 실행시간을 계산하여 work의 실행시간 측정 가능
   -> 252.974783(end) - 252.964518(start) = 0.010265초 = 10.265ms

![img](https://user-images.githubusercontent.com/50316116/111895466-0aec2200-8a56-11eb-9617-b6b54230dccd.png)
