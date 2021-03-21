## ftrace.log 파일 분석

### 1. insert_work 호출
 - 4905, 4906 라인을 보면 sched_wakeup 및 sched_switch가 발생하여 워커 스레드를 실행
 - 4907 ~ 4918 라인에서 워커 스레드의 핸들러 함수인 worker_thread의 ftrace출력 및 워크 처리루틴 실행
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
<img width="1271" alt="Screen Shot 2021-03-21 at 2 41 04 PM" src="https://user-images.githubusercontent.com/50316116/111895102-931cf800-8a53-11eb-8fbf-d9cf6e50c9ea.png">
