# tracer: function
#
# entries-in-buffer/entries-written: 2736/2736   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [003] d...   461.122534: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [003] ....   461.122550: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79585 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [003] ....   461.122555: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [003] d...   461.122592: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=R+ ==> next_comm=sshd next_pid=1778 next_prio=120
 race_kmalloc.sh-2118  [002] ....   461.122711: do_exit: [+] comm: race_kmalloc.sh, pid: 2118, global_func_exe_times: 1787
 race_kmalloc.sh-2118  [002] ....   461.122717: trace_function_dummy_call: [++] comm:race_kmalloc.sh, pid:2118, from(do_exit+0x80/0xc44) 
 race_kmalloc.sh-2118  [002] ....   461.122725: do_exit: [-] comm: race_kmalloc.sh, pid: 2118, global_func_exe_times: 1788
            sshd-1778  [003] d...   461.122735: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   461.122744: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   461.122753: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79586 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [003] d...   461.122754: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=R+ ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:1-44    [001] ....   461.122757: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   461.122790: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.122884: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   461.122890: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79587 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   461.122894: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [003] d...   461.122914: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [003] d...   461.122922: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79588 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   461.122934: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [003] d...   461.122940: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.122962: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.122975: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
 race_kmalloc.sh-2118  [002] d...   461.123542: sched_switch: prev_comm=race_kmalloc.sh prev_pid=2118 prev_prio=120 prev_state=Z ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [003] d...   461.124115: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [003] ....   461.124121: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79588 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [003] ....   461.124125: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [003] d...   461.124147: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=R+ ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   461.124156: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1778  [003] d...   461.124247: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [002] d...   461.124252: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:3 next_pid=142 next_prio=120
    kworker/u8:3-142   [002] ....   461.124262: worker_thread: [+] comm: kworker/u8:3, pid: 142, global_func_exe_times: 79589 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [003] d...   461.124263: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=R+ ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:3-142   [002] ....   461.124265: trace_function_dummy_call: [++] comm:kworker/u8:3, pid:142, from(worker_thread+0x18c/0x60c) 
    kworker/u8:3-142   [002] d...   461.124284: sched_switch: prev_comm=kworker/u8:3 prev_pid=142 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1778  [003] d...   461.124323: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [003] d...   461.124330: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79590 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [003] d...   461.124347: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.125991: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.126011: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.126036: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.126087: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.126126: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   461.126230: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [003] ....   461.126236: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79590 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [003] ....   461.126239: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [003] d...   461.126255: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   461.126264: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   461.126284: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.126312: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.126331: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79591 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   461.126338: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.127065: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   461.127093: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.127120: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [000] d...   461.127125: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
     irq/86-mmc1-80    [003] d...   461.127147: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
            rngd-555   [000] d...   461.127148: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.127175: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   461.127198: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.127218: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   461.127238: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.127241: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   461.127247: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79591 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   461.127250: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   461.127286: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.127312: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.127342: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.127368: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.127463: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.127490: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.127517: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.127542: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.127602: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.127628: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.127641: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79592 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   461.127648: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.132283: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   461.132311: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.136907: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.136915: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79592 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.136918: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.136936: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79593 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.136947: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.137004: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.142271: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   461.142283: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.148285: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   461.148421: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.150811: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   461.150933: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.152277: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   461.152297: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.162267: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   461.162338: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.162359: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   461.162370: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.172275: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   461.172308: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.192275: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   461.192292: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.212274: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   461.212307: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.237112: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.237120: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79593 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.237124: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.237139: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79594 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.237151: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.237207: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.337306: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.337313: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79594 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.337316: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.337328: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79595 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.337337: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.337383: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.340486: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   461.340508: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.342252: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   461.342275: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.342299: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   461.342325: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.342349: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   461.342372: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.342395: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   461.342415: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.342420: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   461.342427: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79595 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   461.342431: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   461.342452: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.342479: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.342491: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.345504: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.345519: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.345544: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.345577: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.345603: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.345630: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.345656: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [000] d...   461.345723: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
    kworker/u8:1-44    [001] d...   461.345731: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.345758: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   461.345771: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79596 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   461.345778: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
    avahi-daemon-342   [000] d...   461.345982: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.362269: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   461.362280: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.382266: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   461.382357: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.393704: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   461.393770: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   461.393844: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   461.393892: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.394603: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   461.394623: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.437488: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.437518: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.437527: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79596 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.437531: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.437545: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79597 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.437572: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.449968: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   461.450006: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   461.450032: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   461.450071: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.532610: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   461.532638: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.535917: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   461.535944: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.537639: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.537665: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.537671: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79597 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.537674: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.537686: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79598 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.537704: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.620090: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   461.620119: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   461.620144: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          <idle>-0     [000] d...   461.620175: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-773   [003] d...   461.620188: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          mysqld-772   [000] d...   461.620209: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   461.620237: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   461.620272: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.637788: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.637815: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.637821: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79598 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.637825: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.637837: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79599 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.637858: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.737938: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.737964: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.737970: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79599 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.737973: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.737985: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79600 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.738006: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.751538: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   461.751644: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.780613: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   461.780629: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.838086: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.838113: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.838119: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79600 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.838122: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.838134: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79601 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.838152: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   461.842274: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   461.842282: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79601 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   461.842286: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   461.842337: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   461.842344: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79602 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   461.842347: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   461.842357: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 79603 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...   461.842365: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   461.842395: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   461.842400: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79603 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   461.842403: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   461.842410: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   461.842430: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79604 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   461.842449: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.846480: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
    avahi-daemon-342   [000] d...   461.846574: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   461.938236: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   461.938263: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   461.938269: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79604 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   461.938273: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   461.938285: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79605 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   461.938305: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   461.950074: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   461.950102: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   461.950140: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   461.950177: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.028610: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   462.028629: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.036013: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   462.036040: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.038384: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.038482: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.038489: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79605 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.038492: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.038504: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79606 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.038526: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.053362: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   462.053428: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.082275: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   462.082282: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79606 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   462.082285: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] ....   462.082297: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 433 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   462.082304: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 434 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   462.082311: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 434 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082315: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 435 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082331: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 435 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   462.082335: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 436 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082342: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 436 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082346: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 437 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082384: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   462.082401: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 437 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   462.082404: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   462.082474: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   462.082480: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   462.082485: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 438 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   462.082523: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   462.082539: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 438 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082543: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 439 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082550: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 439 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   462.082554: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 440 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082559: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 440 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082563: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 441 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082579: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   462.082611: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 441 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   462.082613: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   462.082654: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   462.082659: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   462.082663: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 442 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   462.082691: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   462.082702: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 442 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   462.082707: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 443 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   462.082711: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 443 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082714: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 444 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082721: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 444 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   462.082725: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 445 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082729: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 445 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082733: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 446 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082748: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   462.082781: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 446 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   462.082783: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   462.082822: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   462.082827: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   462.082831: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 447 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   462.082859: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   462.082870: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 447 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   462.082874: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 448 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   462.082878: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 448 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082882: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 449 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   462.082888: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 449 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   462.082892: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 450 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082897: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 450 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082901: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 451 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   462.082915: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   462.082948: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 451 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   462.082950: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   462.082989: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   462.082993: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   462.082997: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 452 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   462.083025: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   462.083037: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79607 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   462.083044: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.120197: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   462.120224: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   462.120248: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          <idle>-0     [000] d...   462.120285: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-770   [003] d...   462.120288: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          mysqld-768   [000] d...   462.120330: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   462.120356: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   462.120391: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.120797: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-802   [000] d...   462.120843: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.138603: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.138610: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79607 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.138614: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.138626: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79608 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.138635: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.138679: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.148487: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   462.148616: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.228612: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   462.228641: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.238785: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.238792: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79608 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.238795: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.238807: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79609 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.238816: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.238854: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.338965: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.338972: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79609 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.338975: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.338986: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79610 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.338995: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.339029: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.352252: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   462.352359: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.366309: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.366345: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.366358: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.366389: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.366413: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.366437: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.366461: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.366483: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.366488: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   462.366496: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79610 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   462.366499: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   462.366523: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.366549: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   462.366560: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.366645: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.366654: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.369575: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   462.369591: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.369617: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   462.369640: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.369648: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   462.369658: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.369684: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   462.369718: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.369744: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   462.369763: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.369781: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.369804: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
    kworker/u8:1-44    [001] d...   462.369821: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
     irq/86-mmc1-80    [003] d...   462.369828: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.369845: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
          <idle>-0     [003] d...   462.369851: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.369875: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.369898: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   462.369926: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   462.369931: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:2-2067  [003] ....   462.369934: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79611 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [003] ....   462.369938: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [003] d...   462.369966: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   462.369968: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.369994: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   462.370022: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.370048: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   462.370103: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.370130: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   462.370169: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.370195: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   462.370212: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79612 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   462.370219: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
    avahi-daemon-342   [000] d...   462.370277: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.382274: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   462.382287: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.393926: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   462.393999: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   462.394063: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.394688: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   462.394708: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.402267: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   462.402338: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   462.402356: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   462.402405: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.439144: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.439152: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79612 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.439156: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.439170: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79613 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.439180: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.439228: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.450172: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   462.450202: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   462.450241: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   462.450282: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.470379: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
    avahi-daemon-342   [000] d...   462.470478: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.536106: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   462.536147: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.539334: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.539341: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79613 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.539344: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.539357: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79614 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.539366: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.539407: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   462.540484: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sendmail-mta next_pid=1305 next_prio=120
    sendmail-mta-1305  [002] ....   462.540619: __kmalloc: [+] comm: sendmail-mta, pid: 1305, kmalloc_times: 452 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] ....   462.540626: __kmalloc: [-] comm: sendmail-mta, pid: 1305, kmalloc_times: 453 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] ....   462.540744: __kmalloc: [+] comm: sendmail-mta, pid: 1305, kmalloc_times: 453 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] ....   462.540749: __kmalloc: [-] comm: sendmail-mta, pid: 1305, kmalloc_times: 454 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] d...   462.540839: sched_switch: prev_comm=sendmail-mta prev_pid=1305 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.542295: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   462.542317: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.562279: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   462.562299: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.582275: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   462.582305: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.620303: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   462.620332: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   462.620357: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   462.620398: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.620414: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   462.620448: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   462.620488: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   462.620512: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.639517: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.639524: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79614 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.639527: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.639540: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79615 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.639550: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.639595: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.651860: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   462.651876: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.739700: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.739726: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.739732: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79615 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.739736: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.739748: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79616 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.739774: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.839849: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.839874: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.839880: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79616 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.839884: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.839896: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79617 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.839913: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   462.882278: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   462.882286: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79617 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   462.882290: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   462.882340: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   462.882347: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79618 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   462.882351: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   462.882359: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 79619 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...   462.882369: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   462.882398: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   462.882403: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79619 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   462.882406: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   462.882413: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   462.882435: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79620 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   462.882457: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.900483: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   462.900505: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.939997: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   462.940024: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   462.940030: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79620 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   462.940033: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   462.940045: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79621 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   462.940066: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   462.950273: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   462.950299: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   462.950337: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   462.950377: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   462.952964: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   462.953076: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.036201: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   463.036239: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.040145: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.040172: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.040178: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79621 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.040181: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.040193: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79622 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.040214: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.042278: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   463.042285: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79622 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   463.042288: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] ....   463.042295: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 454 from (rpi_firmware_property+0x38/0x120) 
     kworker/1:0-2013  [001] ....   463.042300: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 455 from (rpi_firmware_property+0x38/0x120) 
     kworker/1:0-2013  [001] d...   463.042340: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.042355: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   463.042373: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79623 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   463.042380: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.054450: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=341 next_prio=120
             thd-341   [003] d...   463.054487: sched_switch: prev_comm=thd prev_pid=341 prev_prio=120 prev_state=S ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   463.054562: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.120412: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   463.120439: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   463.120462: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   463.120502: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.120521: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   463.120551: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   463.120589: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   463.120621: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.120896: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-802   [000] d...   463.120942: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.140297: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.140327: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.140334: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79623 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.140337: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.140349: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79624 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.140371: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.140608: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   463.140623: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.148673: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   463.148786: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.240448: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.240475: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.240482: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79624 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.240485: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.240497: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79625 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.240520: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.340611: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.340636: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.340643: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79625 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.340646: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.340658: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79626 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.340675: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.388609: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   463.388628: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.390259: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.390294: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.390319: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.390353: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.390377: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.390401: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.390424: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.390446: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.390452: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   463.390460: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79626 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   463.390463: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   463.390486: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.390513: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.390524: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.393543: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.393559: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.393586: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.393623: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.393650: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.393680: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.393707: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [000] d...   463.393790: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
    kworker/u8:1-44    [001] d...   463.393801: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.393830: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.393844: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79627 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   463.393851: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
    avahi-daemon-342   [000] d...   463.394050: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.394072: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   463.394127: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   463.394201: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   463.394248: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.394774: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   463.394795: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.412274: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   463.412287: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.432267: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   463.432362: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.440761: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.440789: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.440797: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79627 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.440801: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.440813: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79628 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.440832: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.450370: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   463.450400: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   463.450438: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   463.450481: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.494149: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
    avahi-daemon-342   [000] d...   463.494265: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.536292: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   463.536330: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.540914: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.540942: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.540948: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79628 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.540952: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.540964: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79629 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.540985: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.553686: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   463.553789: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.588486: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   463.588513: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.620517: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   463.620544: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   463.620570: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   463.620615: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.620628: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   463.620659: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   463.620698: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   463.620732: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.641064: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.641092: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.641098: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79629 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.641102: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.641114: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79630 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.641136: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.741215: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.741240: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.741246: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79630 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.741250: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.741261: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79631 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.741283: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.836485: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   463.836505: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.841361: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.841386: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.841393: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79631 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.841396: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.841408: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79632 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.841428: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.902340: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.902378: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.902390: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.902420: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.902445: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.902469: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.902492: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   463.902513: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.902519: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   463.902526: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79632 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   463.902529: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   463.902551: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.902578: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.902590: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.905603: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.905618: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.905643: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.905676: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.905702: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.905731: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.905759: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [000] d...   463.905826: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
    kworker/u8:1-44    [001] d...   463.905840: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   463.905867: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   463.905881: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79633 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   463.905888: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
    avahi-daemon-342   [000] d...   463.906178: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.922281: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
          <idle>-0     [001] d...   463.922286: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   463.922294: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79633 from (kthread+0x140/0x170) 
 brcmf_wdog/mmc1-251   [000] d...   463.922295: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:0-2013  [001] ....   463.922298: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   463.922343: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   463.922368: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   463.922375: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79634 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   463.922378: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   463.922386: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   463.922407: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79635 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   463.922430: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.941511: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   463.941540: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   463.941547: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79635 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   463.941550: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   463.941563: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79636 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   463.941587: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.942270: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   463.942337: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.942358: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   463.942369: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   463.950472: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   463.950501: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   463.950540: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   463.950576: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   463.957436: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=952 next_prio=120
           gmain-952   [000] d...   463.957535: sched_switch: prev_comm=gmain prev_pid=952 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.028611: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   464.028639: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.036387: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   464.036414: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.041662: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.041689: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.041696: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79636 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.041700: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.041712: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79637 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.041733: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.055562: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   464.055624: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.081381: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=805 next_prio=120
          mysqld-805   [000] d...   464.081437: sched_switch: prev_comm=mysqld prev_pid=805 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.088093: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=806 next_prio=120
          mysqld-806   [000] d...   464.088136: sched_switch: prev_comm=mysqld prev_pid=806 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=804 next_prio=120
          mysqld-804   [000] d...   464.088183: sched_switch: prev_comm=mysqld prev_pid=804 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.120622: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   464.120650: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   464.120674: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   464.120713: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.120735: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   464.120765: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   464.120805: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   464.120841: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.120995: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-802   [000] d...   464.121028: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.141812: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.141840: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.141848: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79637 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.141851: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.141863: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79638 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.141885: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.148842: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   464.148953: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.154400: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   464.154509: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   464.162278: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   464.162286: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79638 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   464.162290: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] ....   464.162301: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 455 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   464.162307: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 456 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   464.162313: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 456 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162317: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 457 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162333: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 457 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   464.162338: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 458 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162346: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 458 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162350: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 459 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162373: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   464.162408: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 459 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   464.162411: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   464.162483: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => ledtrig_cpu
 => ledtrig_cpu
 => arch_cpu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   464.162488: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   464.162493: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 460 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   464.162531: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   464.162547: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 460 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162551: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 461 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162558: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 461 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   464.162562: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 462 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162567: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 462 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162573: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 463 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162589: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   464.162623: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 463 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   464.162625: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   464.162666: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   464.162670: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   464.162675: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 464 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   464.162705: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   464.162715: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 464 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   464.162719: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 465 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   464.162723: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 465 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162727: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 466 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162733: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 466 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   464.162737: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 467 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162742: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 467 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162746: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 468 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162760: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   464.162793: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 468 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   464.162795: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   464.162834: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   464.162838: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   464.162842: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 469 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   464.162871: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   464.162881: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 469 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   464.162885: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 470 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   464.162890: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 470 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162893: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 471 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   464.162900: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 471 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   464.162904: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 472 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162908: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 472 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162912: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 473 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   464.162926: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   464.162964: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 473 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   464.162966: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   464.163006: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   464.163011: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   464.163015: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 474 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   464.163042: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   464.163056: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79639 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   464.163063: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.228613: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   464.228644: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.241964: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.241995: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.242002: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79639 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.242006: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.242019: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79640 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.242042: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.342116: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.342141: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.342148: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79640 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.342151: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.342163: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79641 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.342183: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.394279: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   464.394331: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   464.394404: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   464.394447: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.394861: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   464.394885: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.406679: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=avahi-daemon next_pid=342 next_prio=120
    avahi-daemon-342   [000] d...   464.406829: sched_switch: prev_comm=avahi-daemon prev_pid=342 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.442269: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.442296: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.442303: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79641 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.442306: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.442318: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79642 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.442341: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.450573: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   464.450601: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   464.450641: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   464.450672: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.476610: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   464.476625: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.536479: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   464.536517: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.542421: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.542446: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.542453: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79642 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.542456: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.542468: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79643 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.542489: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.620727: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   464.620752: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   464.620776: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   464.620814: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.620836: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   464.620867: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   464.620909: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   464.620944: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.642572: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.642599: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.642605: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79643 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.642609: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.642620: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79644 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.642641: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.724609: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   464.724634: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.742724: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.742749: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.742755: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79644 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.742759: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.742771: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79645 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.742789: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.755118: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   464.755201: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.842876: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.842902: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.842909: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79645 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.842913: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.842924: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79646 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.842943: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.943028: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   464.943053: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   464.943059: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79646 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   464.943062: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   464.943074: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79647 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   464.943091: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   464.950672: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   464.950697: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   464.950733: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   464.950762: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   464.962279: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   464.962285: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79647 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   464.962289: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   464.962335: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   464.962342: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79648 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   464.962346: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   464.962354: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 79649 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...   464.962362: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   464.962389: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   464.962395: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79649 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   464.962398: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   464.962404: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   464.962423: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79650 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   464.962445: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   464.972609: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   464.972623: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.036572: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   465.036608: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.043177: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.043203: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.043209: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79650 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.043213: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.043224: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79651 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.043246: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.056638: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   465.056696: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.120830: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   465.120855: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   465.120877: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   465.120914: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.120936: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   465.120965: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   465.121002: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   465.121033: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.121085: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-802   [000] d...   465.121124: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.122278: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   465.122285: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79651 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   465.122288: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] ....   465.122294: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 474 from (rpi_firmware_property+0x38/0x120) 
     kworker/1:0-2013  [001] ....   465.122299: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 475 from (rpi_firmware_property+0x38/0x120) 
     kworker/1:0-2013  [001] d...   465.122340: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.122367: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   465.122384: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79652 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   465.122390: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.143328: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.143355: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.143361: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79652 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.143365: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.143377: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79653 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.143400: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.149009: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   465.149117: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.220483: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   465.220511: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.243480: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.243506: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.243513: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79653 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.243516: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.243528: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79654 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.243546: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.343632: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.343657: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.343663: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79654 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.343666: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.343677: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79655 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.343694: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.355811: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   465.355901: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.394479: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   465.394527: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   465.394592: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   465.394633: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.394947: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   465.394966: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.443784: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.443810: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.443817: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79655 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.443820: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.443832: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79656 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.443854: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.450768: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   465.450794: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   465.450832: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   465.450862: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   465.462691: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ssh-agent next_pid=937 next_prio=120
       ssh-agent-937   [002] d...   465.462740: sched_switch: prev_comm=ssh-agent prev_pid=937 prev_prio=120 prev_state=S ==> next_comm=rtkit-daemon next_pid=1037 next_prio=120
          <idle>-0     [000] d...   465.462804: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rtkit-daemon next_pid=1038 next_prio=0
    rtkit-daemon-1037  [002] d...   465.462804: sched_switch: prev_comm=rtkit-daemon prev_pid=1037 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    rtkit-daemon-1038  [000] d...   465.462840: sched_switch: prev_comm=rtkit-daemon prev_pid=1038 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.468481: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   465.468496: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.536661: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   465.536703: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.543935: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.543961: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.543968: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79656 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.543971: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.543983: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79657 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.544004: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.620933: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   465.620959: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   465.620981: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   465.621018: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.621038: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   465.621067: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   465.621105: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   465.621137: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.644086: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.644112: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.644119: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79657 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.644122: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.644134: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79658 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.644154: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.723860: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   465.723884: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.744238: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.744263: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.744269: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79658 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.744273: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.744284: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79659 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.744301: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.844388: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.844413: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.844419: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79659 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.844423: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.844434: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79660 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.844451: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.944539: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   465.944563: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   465.944570: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79660 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   465.944573: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   465.944585: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79661 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   465.944601: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.950865: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   465.950890: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   465.950925: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   465.950953: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.951036: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.951069: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.951095: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.951127: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.951152: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.951176: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.951209: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
          <idle>-0     [003] d...   465.951211: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
            rngd-555   [000] d...   465.951225: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     irq/86-mmc1-80    [003] d...   465.951235: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.951241: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   465.951249: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79661 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   465.951252: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   465.951276: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.951293: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [001] d...   465.951302: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
     irq/86-mmc1-80    [003] d...   465.951302: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   465.951313: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954333: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.954349: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954374: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   465.954399: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.954407: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   465.954415: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954442: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.954475: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954500: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   465.954520: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.954538: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.954562: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.954599: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:1-44    [001] d...   465.954615: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
            sshd-1778  [003] d...   465.954626: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=R+ ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.954652: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=sshd next_pid=1778 next_prio=120
            sshd-1778  [003] d...   465.954672: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=R+ ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.954701: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=sshd next_pid=1778 next_prio=120
          <idle>-0     [001] d...   465.954706: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.954741: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954768: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.954802: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954830: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.954887: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954915: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.954943: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.954971: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
            sshd-1778  [003] d...   465.955035: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [003] ....   465.955044: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79662 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   465.955048: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [003] ....   465.955048: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [003] d...   465.955070: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79663 from (kthread+0x140/0x170) 
          <idle>-0     [001] d...   465.955078: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [002] d...   465.955088: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1802 next_prio=120
    kworker/u8:2-2067  [003] d...   465.955090: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   465.955107: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.955133: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   465.955197: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:1-44    [001] d...   465.955210: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.955238: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
            bash-1802  [002] d...   465.955251: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   465.955259: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79663 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.955262: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   465.955266: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
            sshd-1778  [003] d...   465.955282: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955291: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79664 from (kthread+0x140/0x170) 
          <idle>-0     [001] d...   465.955292: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955299: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.955313: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:1-44    [001] d...   465.955362: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   465.955363: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   465.955369: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79664 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.955372: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   465.955389: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79665 from (kthread+0x140/0x170) 
          <idle>-0     [001] d...   465.955389: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955398: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
    kworker/u8:1-44    [001] d...   465.955417: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.955444: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
            bash-1802  [002] d...   465.955462: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   465.955469: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79665 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.955472: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   465.955481: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79666 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   465.955493: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955500: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.955520: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [002] d...   465.955545: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   465.955551: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79666 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.955554: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   465.955561: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955570: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79667 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   465.955579: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   465.955640: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
            bash-1802  [002] d...   465.955643: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   465.955649: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79667 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.955653: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [003] d...   465.955662: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955667: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:3 next_pid=142 next_prio=120
    kworker/u8:3-142   [002] ....   465.955674: worker_thread: [+] comm: kworker/u8:3, pid: 142, global_func_exe_times: 79668 from (kthread+0x140/0x170) 
    kworker/u8:3-142   [002] ....   465.955677: trace_function_dummy_call: [++] comm:kworker/u8:3, pid:142, from(worker_thread+0x18c/0x60c) 
    kworker/u8:3-142   [002] d...   465.955691: worker_thread: [-] comm: kworker/u8:3, pid: 142, global_func_exe_times: 79669 from (kthread+0x140/0x170) 
    kworker/u8:3-142   [002] d...   465.955699: sched_switch: prev_comm=kworker/u8:3 prev_pid=142 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [003] d...   465.955706: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955717: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79669 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   465.955727: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   465.955788: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:1-44    [001] d...   465.955789: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] ....   465.955795: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79669 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.955798: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [003] d...   465.955803: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955812: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79670 from (kthread+0x140/0x170) 
          <idle>-0     [001] d...   465.955818: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:2-2067  [002] d...   465.955829: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.955836: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:1-44    [001] d...   465.955874: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
            sshd-1778  [003] d...   465.955926: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.955958: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.956030: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=R+ ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   465.956046: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.956081: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.956108: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.956142: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.956179: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.956197: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79670 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   465.956205: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.956506: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   465.956644: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.957843: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.957869: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.957895: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.957922: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.957947: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.957971: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.957995: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.958015: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958019: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   465.958025: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79670 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   465.958028: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   465.958062: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958089: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   465.958114: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
    kworker/u8:1-44    [001] d...   465.958116: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
     irq/86-mmc1-80    [003] d...   465.958128: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958142: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   465.958162: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.958179: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   465.958190: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.958198: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.958225: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=sshd next_pid=1778 next_prio=120
            sshd-1778  [003] d...   465.958241: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=R+ ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.958266: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=sshd next_pid=1778 next_prio=120
            sshd-1778  [003] d...   465.958285: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.958308: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=sshd next_pid=1778 next_prio=120
          <idle>-0     [002] d...   465.958309: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   465.958311: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:2-2067  [002] ....   465.958315: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79671 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.958318: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   465.958336: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   465.958339: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958365: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.958392: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   465.958404: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   465.958409: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79672 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   465.958413: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
          <idle>-0     [001] d...   465.958417: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
            sshd-1778  [003] d...   465.958419: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   465.958430: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79673 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   465.958438: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
    kworker/u8:1-44    [001] d...   465.958479: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958508: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.958535: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958562: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.958621: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958649: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
            bash-1802  [002] ....   465.958670: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 475 from (ext4_htree_store_dirent+0x3c/0x12c) 
    kworker/u8:1-44    [001] d...   465.958676: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-1802  [002] ....   465.958677: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 476 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958682: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 476 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958686: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 477 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958690: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 477 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958694: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 478 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958700: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 478 from (ext4_htree_store_dirent+0x3c/0x12c) 
          <idle>-0     [001] d...   465.958703: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
            bash-1802  [002] ....   465.958704: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 479 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958708: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 479 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958712: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 480 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958717: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 480 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958720: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 481 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958725: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 481 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958729: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 482 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958734: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 482 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958740: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 483 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958745: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 483 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958750: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 484 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958755: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 484 from (ext4_htree_store_dirent+0x3c/0x12c) 
    kworker/u8:1-44    [001] d...   465.958758: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-1802  [002] ....   465.958760: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 485 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958765: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 485 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958769: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 486 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958774: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 486 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   465.958778: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 487 from (ext4_htree_store_dirent+0x3c/0x12c) 
          <idle>-0     [001] d...   465.958785: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.958822: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.958850: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.958865: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79673 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   465.958873: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.959147: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   465.959152: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79673 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   465.959156: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   465.959169: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79674 from (kthread+0x140/0x170) 
            bash-1802  [002] d...   465.959169: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   465.959176: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.959184: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
          <idle>-0     [001] d...   465.959315: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   465.959321: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79674 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   465.959324: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [003] d...   465.959334: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   465.959361: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.959396: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.959410: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79675 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   465.959417: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.960153: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.960174: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.960200: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.960225: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.960249: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.960273: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.960299: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   465.960318: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.960322: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   465.960330: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79675 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   465.960333: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   465.960365: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.960391: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.960419: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.960444: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.960505: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   465.960531: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   465.960544: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79676 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   465.960550: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.962312: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   465.962332: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.972279: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   465.972293: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.979861: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   465.979878: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   465.982288: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [003] d...   465.982309: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   465.992271: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   465.992370: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.002279: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [001] d...   466.002288: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
       rcu_sched-10    [003] d...   466.002293: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/1:0-2013  [001] ....   466.002296: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79676 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   466.002299: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   466.002347: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   466.002354: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79677 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   466.002357: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   466.002367: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 79678 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...   466.002375: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   466.002402: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   466.002408: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79678 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   466.002411: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   466.002418: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   466.002435: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79679 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   466.002462: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.036755: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   466.036799: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.044693: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.044737: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.044745: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79679 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.044748: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.044765: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79680 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.044796: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.057712: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   466.057775: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.078304: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.078326: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.078351: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.078377: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.078400: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.078424: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.078447: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.078467: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.078474: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   466.078481: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79680 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.078484: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   466.078504: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.078530: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.078542: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.081556: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.081572: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.081598: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.081631: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.081657: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.081684: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.081711: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
          <idle>-0     [003] d...   466.081764: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:1-44    [001] d...   466.081775: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.081802: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.081816: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79681 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   466.081823: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.081890: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   466.081895: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79681 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.081898: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [003] d...   466.081902: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   466.081914: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79682 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   466.081920: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.081930: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   466.081980: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   466.081986: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79682 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.081989: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   466.082000: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79683 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   466.082007: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.082013: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
          <idle>-0     [001] d...   466.082153: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   466.082158: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79683 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.082161: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [003] d...   466.082176: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   466.082199: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.082240: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.082287: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79684 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   466.082295: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-1802  [002] ....   466.082314: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 487 from (alloc_pipe_info+0xd4/0x1c8) 
            bash-1802  [002] ....   466.082321: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 488 from (alloc_pipe_info+0xd4/0x1c8) 
            bash-1802  [002] ....   466.082404: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 488 from (kvmalloc_node+0x74/0x80) 
            bash-1802  [002] ....   466.082409: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 489 from (kvmalloc_node+0x74/0x80) 
            bash-1802  [002] ....   466.082413: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 489 from (kvmalloc_node+0x74/0x80) 
            bash-1802  [002] ....   466.082417: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 490 from (kvmalloc_node+0x74/0x80) 
          <idle>-0     [000] d...   466.082878: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=2125 next_prio=120
          <idle>-0     [003] d...   466.083051: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.083092: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.083110: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.083145: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.083177: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.083210: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.083236: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [001] d...   466.083266: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
     irq/86-mmc1-80    [003] d...   466.083266: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] ....   466.083278: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79684 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.083282: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
            bash-1802  [002] d...   466.083293: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   466.083338: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.083375: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.083407: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.083443: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.083558: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.083590: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.083612: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79685 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   466.083622: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
    multi_thread-2125  [000] ....   466.084301: __kmalloc: [+] comm: bash, pid: 2125, kmalloc_times: 490 from (load_elf_phdrs+0x78/0xdc) 
    multi_thread-2125  [000] ....   466.084307: __kmalloc: [-] comm: bash, pid: 2125, kmalloc_times: 491 from (load_elf_phdrs+0x78/0xdc) 
    multi_thread-2125  [000] ....   466.084315: __kmalloc: [+] comm: bash, pid: 2125, kmalloc_times: 491 from (load_elf_binary+0x174/0x1344) 
    multi_thread-2125  [000] ....   466.084320: __kmalloc: [-] comm: bash, pid: 2125, kmalloc_times: 492 from (load_elf_binary+0x174/0x1344) 
    multi_thread-2125  [000] ....   466.084354: __kmalloc: [+] comm: bash, pid: 2125, kmalloc_times: 492 from (load_elf_phdrs+0x78/0xdc) 
    multi_thread-2125  [000] ....   466.084359: __kmalloc: [-] comm: bash, pid: 2125, kmalloc_times: 493 from (load_elf_phdrs+0x78/0xdc) 
          <idle>-0     [002] d...   466.087909: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2126 next_prio=120
          <idle>-0     [003] d...   466.088003: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2127 next_prio=120
    multi_thread-2127  [003] d...   466.088036: sched_switch: prev_comm=multi_thread prev_pid=2127 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    multi_thread-2125  [000] d...   466.088040: sched_switch: prev_comm=multi_thread prev_pid=2125 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.088324: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2128 next_prio=120
          <idle>-0     [000] d...   466.088371: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2125 next_prio=120
    multi_thread-2126  [002] d...   466.088398: sched_switch: prev_comm=multi_thread prev_pid=2126 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.088408: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2127 next_prio=120
    multi_thread-2127  [003] d...   466.088421: sched_switch: prev_comm=multi_thread prev_pid=2127 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.088439: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2126 next_prio=120
    multi_thread-2125  [000] d...   466.088597: sched_switch: prev_comm=multi_thread prev_pid=2125 prev_prio=120 prev_state=D ==> next_comm=multi_thread next_pid=2129 next_prio=120
    multi_thread-2129  [000] d...   466.088667: sched_switch: prev_comm=multi_thread prev_pid=2129 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.088880: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2125 next_prio=120
          <idle>-0     [003] d...   466.088917: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2130 next_prio=120
    multi_thread-2130  [003] d...   466.089014: sched_switch: prev_comm=multi_thread prev_pid=2130 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2127 next_prio=120
    multi_thread-2127  [003] d...   466.089034: sched_switch: prev_comm=multi_thread prev_pid=2127 prev_prio=120 prev_state=S ==> next_comm=multi_thread next_pid=2130 next_prio=120
    multi_thread-2125  [000] d...   466.089098: sched_switch: prev_comm=multi_thread prev_pid=2125 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    multi_thread-2128  [001] ....   466.089110: do_exit: [+] comm: multi_thread, pid: 2128, global_func_exe_times: 1788
    multi_thread-2128  [001] ....   466.089117: trace_function_dummy_call: [++] comm:multi_thread, pid:2128, from(do_exit+0x80/0xc44) 
    multi_thread-2128  [001] ....   466.089129: do_exit: [-] comm: multi_thread, pid: 2128, global_func_exe_times: 1789
          <idle>-0     [000] d...   466.089566: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2129 next_prio=120
    multi_thread-2129  [000] d...   466.089643: sched_switch: prev_comm=multi_thread prev_pid=2129 prev_prio=120 prev_state=S ==> next_comm=multi_thread next_pid=2131 next_prio=120
    multi_thread-2130  [003] ....   466.089719: do_exit: [+] comm: multi_thread, pid: 2130, global_func_exe_times: 1789
    multi_thread-2130  [003] ....   466.089726: trace_function_dummy_call: [++] comm:multi_thread, pid:2130, from(do_exit+0x80/0xc44) 
    multi_thread-2130  [003] ....   466.089731: do_exit: [-] comm: multi_thread, pid: 2130, global_func_exe_times: 1790
    multi_thread-2128  [001] d...   466.089767: sched_switch: prev_comm=multi_thread prev_pid=2128 prev_prio=120 prev_state=Z ==> next_comm=swapper/1 next_pid=0 next_prio=120
    multi_thread-2130  [003] d...   466.090072: sched_switch: prev_comm=multi_thread prev_pid=2130 prev_prio=120 prev_state=R+ ==> next_comm=multi_thread next_pid=2127 next_prio=120
    multi_thread-2127  [003] d...   466.090093: sched_switch: prev_comm=multi_thread prev_pid=2127 prev_prio=120 prev_state=S ==> next_comm=multi_thread next_pid=2130 next_prio=120
    multi_thread-2131  [000] d...   466.090390: sched_switch: prev_comm=multi_thread prev_pid=2131 prev_prio=120 prev_state=S ==> next_comm=multi_thread next_pid=2132 next_prio=120
    multi_thread-2130  [003] d...   466.090412: sched_switch: prev_comm=multi_thread prev_pid=2130 prev_prio=120 prev_state=Z ==> next_comm=swapper/3 next_pid=0 next_prio=120
    multi_thread-2132  [000] d...   466.090526: sched_switch: prev_comm=multi_thread prev_pid=2132 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2125 next_prio=120
    multi_thread-2126  [002] ....   466.090652: do_exit: [+] comm: multi_thread, pid: 2126, global_func_exe_times: 1790
    multi_thread-2126  [002] ....   466.090660: trace_function_dummy_call: [++] comm:multi_thread, pid:2126, from(do_exit+0x80/0xc44) 
    multi_thread-2125  [000] ....   466.090664: do_exit: [+] comm: multi_thread, pid: 2125, global_func_exe_times: 1791
    multi_thread-2126  [002] ....   466.090666: do_exit: [-] comm: multi_thread, pid: 2126, global_func_exe_times: 1791
    multi_thread-2125  [000] ....   466.090669: trace_function_dummy_call: [++] comm:multi_thread, pid:2125, from(do_exit+0x80/0xc44) 
    multi_thread-2125  [000] ....   466.090674: do_exit: [-] comm: multi_thread, pid: 2125, global_func_exe_times: 1792
          <idle>-0     [003] d...   466.090689: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=multi_thread next_pid=2127 next_prio=120
    multi_thread-2127  [003] ....   466.090702: do_exit: [+] comm: multi_thread, pid: 2127, global_func_exe_times: 1792
    multi_thread-2127  [003] ....   466.090705: trace_function_dummy_call: [++] comm:multi_thread, pid:2127, from(do_exit+0x80/0xc44) 
    multi_thread-2127  [003] ....   466.090710: do_exit: [-] comm: multi_thread, pid: 2127, global_func_exe_times: 1793
    multi_thread-2125  [000] d...   466.090817: sched_switch: prev_comm=multi_thread prev_pid=2125 prev_prio=120 prev_state=Z ==> next_comm=multi_thread next_pid=2129 next_prio=120
    multi_thread-2126  [002] d...   466.090824: sched_switch: prev_comm=multi_thread prev_pid=2126 prev_prio=120 prev_state=X ==> next_comm=multi_thread next_pid=2133 next_prio=120
    multi_thread-2127  [003] d...   466.090828: sched_switch: prev_comm=multi_thread prev_pid=2127 prev_prio=120 prev_state=X ==> next_comm=swapper/3 next_pid=0 next_prio=120
    multi_thread-2129  [000] ....   466.090829: do_exit: [+] comm: multi_thread, pid: 2129, global_func_exe_times: 1793
    multi_thread-2129  [000] ....   466.090833: trace_function_dummy_call: [++] comm:multi_thread, pid:2129, from(do_exit+0x80/0xc44) 
    multi_thread-2129  [000] ....   466.090837: do_exit: [-] comm: multi_thread, pid: 2129, global_func_exe_times: 1794
          <idle>-0     [003] d...   466.091441: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
    multi_thread-2129  [000] d...   466.091469: sched_switch: prev_comm=multi_thread prev_pid=2129 prev_prio=120 prev_state=X ==> next_comm=multi_thread next_pid=2132 next_prio=120
    multi_thread-2133  [002] d...   466.091494: sched_switch: prev_comm=multi_thread prev_pid=2133 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1802 next_prio=120
         systemd-1     [003] ....   466.091755: __kmalloc: [+] comm: systemd, pid: 1, kmalloc_times: 493 from (kvmalloc_node+0x74/0x80) 
         systemd-1     [003] ....   466.091766: __kmalloc: [-] comm: systemd, pid: 1, kmalloc_times: 494 from (kvmalloc_node+0x74/0x80) 
         systemd-1     [003] ....   466.092034: __kmalloc: [+] comm: systemd, pid: 1, kmalloc_times: 494 from (kvmalloc_node+0x74/0x80) 
         systemd-1     [003] ....   466.092040: __kmalloc: [-] comm: systemd, pid: 1, kmalloc_times: 495 from (kvmalloc_node+0x74/0x80) 
    multi_thread-2132  [000] d...   466.092112: sched_switch: prev_comm=multi_thread prev_pid=2132 prev_prio=120 prev_state=S ==> next_comm=multi_thread next_pid=2133 next_prio=120
         systemd-1     [003] ....   466.092131: __kmalloc: [+] comm: systemd, pid: 1, kmalloc_times: 495 from (kvmalloc_node+0x74/0x80) 
         systemd-1     [003] ....   466.092136: __kmalloc: [-] comm: systemd, pid: 1, kmalloc_times: 496 from (kvmalloc_node+0x74/0x80) 
    multi_thread-2133  [000] d...   466.092155: sched_switch: prev_comm=multi_thread prev_pid=2133 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.092274: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   466.092284: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79685 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.092288: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   466.092312: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79686 from (kthread+0x140/0x170) 
            bash-1802  [002] d...   466.092317: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [000] d...   466.092319: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.092328: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79686 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.092332: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
       rcu_sched-10    [002] d...   466.092346: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
    kworker/u8:1-44    [001] d...   466.092354: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   466.092361: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/2:3 next_pid=164 next_prio=120
     kworker/2:3-164   [002] ....   466.092370: worker_thread: [+] comm: kworker/2:3, pid: 164, global_func_exe_times: 79687 from (kthread+0x140/0x170) 
     kworker/2:3-164   [002] ....   466.092373: trace_function_dummy_call: [++] comm:kworker/2:3, pid:164, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.092379: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79688 from (kthread+0x140/0x170) 
     kworker/2:3-164   [002] d...   466.092387: worker_thread: [-] comm: kworker/2:3, pid: 164, global_func_exe_times: 79688 from (kthread+0x140/0x170) 
     kworker/2:3-164   [002] d...   466.092397: sched_switch: prev_comm=kworker/2:3 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
     kworker/0:2-336   [000] d...   466.092399: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-1802  [002] d...   466.092442: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
         systemd-1     [003] ....   466.092674: __kmalloc: [+] comm: systemd, pid: 1, kmalloc_times: 496 from (kvmalloc_node+0x74/0x80) 
         systemd-1     [003] ....   466.092680: __kmalloc: [-] comm: systemd, pid: 1, kmalloc_times: 497 from (kvmalloc_node+0x74/0x80) 
            sshd-1778  [001] d...   466.092702: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   466.092711: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79688 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   466.092715: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   466.092728: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79689 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   466.092737: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   466.092743: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79689 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.092747: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
         systemd-1     [003] ....   466.092762: __kmalloc: [+] comm: systemd, pid: 1, kmalloc_times: 497 from (kvmalloc_node+0x74/0x80) 
         systemd-1     [003] ....   466.092767: __kmalloc: [-] comm: systemd, pid: 1, kmalloc_times: 498 from (kvmalloc_node+0x74/0x80) 
    kworker/u8:1-44    [001] d...   466.092822: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.092864: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.092884: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79690 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   466.092901: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
         systemd-1     [003] d...   466.093063: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=kworker/3:3 next_pid=477 next_prio=120
     kworker/3:3-477   [003] ....   466.093072: worker_thread: [+] comm: kworker/3:3, pid: 477, global_func_exe_times: 79690 from (kthread+0x140/0x170) 
     kworker/3:3-477   [003] ....   466.093075: trace_function_dummy_call: [++] comm:kworker/3:3, pid:477, from(worker_thread+0x18c/0x60c) 
     kworker/3:3-477   [003] d...   466.093088: worker_thread: [-] comm: kworker/3:3, pid: 477, global_func_exe_times: 79691 from (kthread+0x140/0x170) 
     kworker/3:3-477   [003] d...   466.093115: sched_switch: prev_comm=kworker/3:3 prev_pid=477 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.093664: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.093695: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.093707: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.093734: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.093752: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.093775: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.093794: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   466.093814: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.093818: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   466.093825: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79691 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   466.093828: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   466.093866: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.093893: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.093923: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.093950: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.094048: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.094081: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
          <idle>-0     [001] d...   466.094090: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   466.094103: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79692 from (kthread+0x140/0x170) 
            rngd-555   [000] d...   466.094106: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] d...   466.094109: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.112273: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [000] d...   466.112277: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
       rcu_sched-10    [002] d...   466.112292: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   466.112293: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.121037: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   466.121089: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   466.121118: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          <idle>-0     [000] d...   466.121144: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-773   [003] d...   466.121156: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          mysqld-802   [000] d...   466.121213: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   466.121243: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   466.121271: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   466.121307: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.122282: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   466.122302: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.132295: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   466.132384: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.142270: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   466.142289: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.144858: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.144908: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.144917: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79692 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.144921: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.144938: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79693 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.144962: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.149174: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   466.149293: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.162282: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   466.162301: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.182279: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   466.182315: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   466.202279: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   466.202294: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   466.242284: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   466.242293: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79693 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   466.242297: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] ....   466.242307: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 498 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   466.242313: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 499 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   466.242318: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 499 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242323: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 500 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242338: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 500 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   466.242343: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 501 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242350: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 501 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242354: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 502 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242401: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   466.242411: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 502 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   466.242415: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   466.242484: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   466.242490: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   466.242494: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 503 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   466.242533: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   466.242549: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 503 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242554: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 504 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242560: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 504 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   466.242564: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 505 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242569: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 505 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242573: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 506 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242589: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   466.242625: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 506 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   466.242627: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   466.242666: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   466.242671: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   466.242675: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 507 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   466.242705: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   466.242715: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 507 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   466.242719: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 508 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   466.242723: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 508 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242727: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 509 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242734: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 509 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   466.242738: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 510 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242742: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 510 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242746: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 511 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242761: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   466.242794: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 511 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   466.242796: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   466.242834: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   466.242838: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   466.242843: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 512 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   466.242871: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   466.242881: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 512 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   466.242885: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 513 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   466.242889: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 513 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242893: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 514 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   466.242900: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 514 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   466.242904: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 515 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242908: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 515 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242912: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 516 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   466.242927: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   466.242964: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 516 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   466.242966: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   466.243006: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   466.243011: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   466.243015: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 517 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   466.243044: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   466.243057: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79694 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   466.243064: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.245029: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.245063: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.245070: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79694 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.245073: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.245087: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79695 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.245106: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.284490: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   466.284529: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.345187: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.345213: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.345220: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79695 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.345223: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.345235: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79696 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.345260: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.394672: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   466.394750: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   466.394820: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.395032: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   466.395053: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.445336: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.445361: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.445367: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79696 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.445371: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.445383: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79697 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.445406: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.450962: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   466.450994: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   466.451034: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   466.451070: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.532485: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   466.532511: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.536861: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   466.536888: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.545487: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.545514: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.545520: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79697 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.545523: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.545535: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79698 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.545557: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.557241: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   466.557369: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.621157: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   466.621184: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   466.621221: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   466.621261: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.621314: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   466.621345: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   466.621386: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   466.621420: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.645636: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.645665: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.645671: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79698 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.645675: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.645687: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79699 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.645709: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.745790: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.745815: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.745821: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79699 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.745825: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.745836: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79700 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.745858: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.780483: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   466.780502: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.845938: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.845963: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.845969: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79700 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.845972: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.845984: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79701 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.846003: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   466.946089: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   466.946113: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   466.946120: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79701 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   466.946123: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   466.946138: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79702 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   466.946155: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   466.951064: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   466.951090: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   466.951126: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   466.951156: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.012291: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:3 next_pid=477 next_prio=120
     kworker/3:3-477   [003] ....   467.012299: worker_thread: [+] comm: kworker/3:3, pid: 477, global_func_exe_times: 79702 from (kthread+0x140/0x170) 
     kworker/3:3-477   [003] ....   467.012302: trace_function_dummy_call: [++] comm:kworker/3:3, pid:477, from(worker_thread+0x18c/0x60c) 
     kworker/3:3-477   [003] d...   467.012313: worker_thread: [-] comm: kworker/3:3, pid: 477, global_func_exe_times: 79703 from (kthread+0x140/0x170) 
     kworker/3:3-477   [003] d...   467.012332: sched_switch: prev_comm=kworker/3:3 prev_pid=477 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.028485: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   467.028500: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.036954: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   467.036978: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.042281: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   467.042289: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79703 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   467.042292: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   467.042344: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   467.042368: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   467.042375: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79704 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   467.042378: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   467.042388: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   467.042415: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79705 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   467.042437: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.046236: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.046264: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.046270: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79705 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.046274: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.046285: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79706 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.046302: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.058788: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   467.058863: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.121254: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120
          <idle>-0     [000] d...   467.121267: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-777   [003] d...   467.121280: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   467.121316: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-802   [000] d...   467.121328: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          mysqld-773   [003] d...   467.121338: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.121411: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   467.121438: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   467.121475: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   467.121505: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.146387: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.146414: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.146420: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79706 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.146424: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.146436: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79707 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.146456: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.149348: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   467.149459: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.157975: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   467.158070: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.202283: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   467.202290: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79707 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   467.202294: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] ....   467.202300: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 517 from (rpi_firmware_property+0x38/0x120) 
     kworker/1:0-2013  [001] ....   467.202305: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 518 from (rpi_firmware_property+0x38/0x120) 
     kworker/1:0-2013  [001] d...   467.202362: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.202378: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   467.202395: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79708 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   467.202402: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.246540: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.246567: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.246574: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79708 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.246577: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.246590: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79709 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.246611: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.268611: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   467.268626: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.346692: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.346718: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.346724: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79709 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.346727: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.346739: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79710 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.346759: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.394825: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   467.394875: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   467.394942: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   467.394983: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.395117: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   467.395141: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.424829: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.424863: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.424887: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.424919: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.424943: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.424967: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.424990: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.425012: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.425018: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   467.425026: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79710 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   467.425029: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   467.425053: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.425080: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.425092: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.428105: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.428121: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.428146: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.428184: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.428211: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.428242: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.428268: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.428384: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1778 next_prio=120
          <idle>-0     [002] d...   467.428572: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.428581: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79711 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.428585: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   467.428598: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:2-2067  [002] d...   467.428612: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79712 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   467.428618: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79712 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.428621: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
    kworker/u8:1-44    [001] d...   467.428639: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.428735: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   467.428742: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79712 from (kthread+0x140/0x170) 
            bash-1802  [002] d...   467.428744: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:1-44    [001] ....   467.428745: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   467.428762: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79713 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   467.428771: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1778 next_prio=120
            sshd-1778  [001] d...   467.428969: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   467.428976: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79713 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   467.428979: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   467.429034: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.429063: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.429081: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79714 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   467.429088: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.437494: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.437513: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.437536: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.437561: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.437584: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.437607: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.437630: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.437650: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.437655: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   467.437661: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79714 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   467.437664: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   467.437698: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.437726: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.437754: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.437780: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.437856: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.437884: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.437896: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79715 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] d...   467.437903: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.444612: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   467.444628: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.446840: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.446869: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.446875: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79715 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.446879: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.446895: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79716 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.446922: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.451163: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   467.451197: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   467.451237: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   467.451271: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.452281: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.452294: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.469729: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.469751: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.469776: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.469801: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.469826: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.469849: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.469874: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.469893: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.469900: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] ....   467.469906: worker_thread: [+] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79716 from (kthread+0x140/0x170) 
    kworker/u8:1-44    [001] ....   467.469910: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:44, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-44    [001] d...   467.469944: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.469966: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.469992: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...   467.470013: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.470082: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1778 next_prio=120
          <idle>-0     [002] d...   467.470201: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.470208: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79717 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.470211: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   467.470216: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:1 next_pid=44 next_prio=120
    kworker/u8:1-44    [001] d...   467.470231: worker_thread: [-] comm: kworker/u8:1, pid: 44, global_func_exe_times: 79718 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.470236: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79718 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.470244: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
    kworker/u8:1-44    [001] d...   467.470265: sched_switch: prev_comm=kworker/u8:1 prev_pid=44 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-1802  [002] d...   467.470306: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.470313: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79718 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.470316: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.470328: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79719 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.470336: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   467.470342: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   467.470367: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.470469: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.470475: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79719 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.470479: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   467.470488: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   467.470517: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.470552: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.470567: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79720 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.470574: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.482278: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.482288: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.502272: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.502371: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.525368: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.525388: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.525412: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.525436: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.525459: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.525483: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.525506: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.525525: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.525530: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.525536: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79720 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.525539: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.525558: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.525583: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.525598: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.528607: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.528622: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.528647: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.528680: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.528707: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.528735: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.528761: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.528829: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.528857: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.528870: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79721 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.528877: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.537045: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   467.537073: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.542286: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
          <idle>-0     [002] d...   467.542307: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sendmail-mta next_pid=1305 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.542315: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    sendmail-mta-1305  [002] ....   467.542442: __kmalloc: [+] comm: sendmail-mta, pid: 1305, kmalloc_times: 518 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] ....   467.542449: __kmalloc: [-] comm: sendmail-mta, pid: 1305, kmalloc_times: 519 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] ....   467.542569: __kmalloc: [+] comm: sendmail-mta, pid: 1305, kmalloc_times: 519 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] ....   467.542574: __kmalloc: [-] comm: sendmail-mta, pid: 1305, kmalloc_times: 520 from (kvmalloc_node+0x74/0x80) 
    sendmail-mta-1305  [002] d...   467.542662: sched_switch: prev_comm=sendmail-mta prev_pid=1305 prev_prio=120 prev_state=S ==> next_comm=kworker/2:3 next_pid=164 next_prio=120
     kworker/2:3-164   [002] ....   467.542670: worker_thread: [+] comm: kworker/2:3, pid: 164, global_func_exe_times: 79721 from (kthread+0x140/0x170) 
     kworker/2:3-164   [002] ....   467.542674: trace_function_dummy_call: [++] comm:kworker/2:3, pid:164, from(worker_thread+0x18c/0x60c) 
     kworker/2:3-164   [002] d...   467.542686: worker_thread: [-] comm: kworker/2:3, pid: 164, global_func_exe_times: 79722 from (kthread+0x140/0x170) 
     kworker/2:3-164   [002] d...   467.542702: sched_switch: prev_comm=kworker/2:3 prev_pid=164 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.546994: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.547027: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.547035: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79722 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.547038: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.547054: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79723 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.547070: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.552286: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   467.552305: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.562275: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.562342: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.562362: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.562373: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.572273: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   467.572295: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.582046: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.582067: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.582099: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
          <idle>-0     [003] d...   467.582100: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
            rngd-555   [000] d...   467.582117: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     irq/86-mmc1-80    [003] d...   467.582125: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.582148: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.582171: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.582193: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.582213: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.582213: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.582219: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79723 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.582222: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.582262: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.582299: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.582311: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.585319: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.585334: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.585352: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.585385: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.585407: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.585435: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.585455: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   467.585516: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   467.585525: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.585547: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.585560: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79724 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.585567: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.585641: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.585646: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79724 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.585649: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   467.585664: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   467.585671: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79725 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.585680: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   467.585760: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.585766: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79725 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.585769: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.585781: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79726 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.585789: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   467.585794: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   467.585824: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.585930: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.585935: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79726 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.585938: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   467.585956: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   467.585977: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.586008: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.586024: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79727 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.586030: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.589080: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.589099: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.589122: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.589146: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.589169: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.589192: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.589217: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [002] d...   467.589235: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
     irq/86-mmc1-80    [003] d...   467.589235: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] ....   467.589240: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79727 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.589244: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.589276: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.589297: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.589324: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.589343: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.589412: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.589432: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.589444: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79728 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.589451: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.592280: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   467.592298: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.602275: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.602285: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.621353: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   467.621387: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   467.621426: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   467.621474: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.621512: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   467.621544: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   467.621585: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   467.621621: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.622272: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.622355: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.647151: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.647188: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.647196: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79728 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.647200: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.647215: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79729 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.647244: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.747312: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.747337: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.747343: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79729 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.747347: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.747359: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79730 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.747386: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.756489: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   467.756510: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.758675: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   467.758787: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.790907: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.790930: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.790953: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.790978: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.791001: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.791024: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.791047: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.791066: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.791072: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.791080: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79730 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.791083: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.791103: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.791129: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.791140: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794158: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794187: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794212: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794245: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794271: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794299: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794325: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   467.794385: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794391: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794419: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794432: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79731 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.794439: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794509: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.794515: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79731 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.794518: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   467.794527: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794541: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79732 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.794549: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   467.794625: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.794631: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79732 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.794634: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.794646: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79733 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.794655: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   467.794659: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   467.794691: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794798: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.794804: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79733 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.794808: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   467.794819: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794845: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.794880: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.794896: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79734 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.794902: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.795707: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.795727: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.795750: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.795774: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.795797: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.795820: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.795842: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   467.795861: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.795865: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   467.795871: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79734 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   467.795874: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   467.795907: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.795933: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.795959: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.795986: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.796053: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   467.796080: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   467.796092: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79735 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   467.796099: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.812279: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.812290: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.832273: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   467.832368: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.847462: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.847495: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.847502: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79735 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.847506: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.847519: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79736 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.847543: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.908611: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   467.908643: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.947618: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   467.947645: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   467.947651: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79736 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   467.947654: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   467.947666: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79737 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   467.947687: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   467.951269: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   467.951301: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   467.951340: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   467.951372: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   467.957544: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=952 next_prio=120
           gmain-952   [000] d...   467.957645: sched_switch: prev_comm=gmain prev_pid=952 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.037139: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   468.037178: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.047768: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.047795: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.047801: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79737 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.047805: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.047817: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79738 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.047839: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.059510: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=341 next_prio=120
             thd-341   [003] d...   468.059549: sched_switch: prev_comm=thd prev_pid=341 prev_prio=120 prev_state=S ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   468.059624: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...   468.082284: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   468.082293: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79738 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   468.082297: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   468.082348: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   468.082355: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79739 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   468.082359: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   468.082368: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 79740 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...   468.082377: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   468.082407: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   468.082412: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79740 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   468.082415: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   468.082422: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   468.082440: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79741 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   468.082465: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.121366: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-802   [000] d...   468.121417: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.121457: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   468.121487: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   468.121526: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   468.121568: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.121614: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   468.121643: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   468.121684: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   468.121717: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.147920: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.147947: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.147954: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79741 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.147957: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.147970: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79742 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.147994: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.149515: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   468.149633: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.156614: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   468.156632: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.248070: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.248097: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.248104: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79742 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.248107: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.248119: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79743 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.248144: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.310678: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.310718: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.310732: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.310762: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.310787: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.310811: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.310835: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.310856: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.310861: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.310870: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79743 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.310873: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.310896: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.310921: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.310932: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.313950: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.313965: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.313991: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314026: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.314052: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314081: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.314107: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   468.314183: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314194: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.314222: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314236: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79744 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.314243: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.314336: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.314342: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79744 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.314345: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.314356: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314369: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79745 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.314378: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   468.314455: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.314462: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79745 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.314465: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.314477: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79746 from (kthread+0x140/0x170) 
          <idle>-0     [001] d...   468.314486: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314486: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   468.314527: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.314641: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.314647: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79746 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.314650: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.314662: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314689: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.314725: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.314741: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79747 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.314748: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.316072: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.316091: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.316115: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.316140: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.316163: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.316186: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.316209: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.316228: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.316232: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.316237: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79747 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.316240: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.316273: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.316299: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.316327: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.316352: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.316421: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.316448: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.316460: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79748 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.316467: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...   468.322285: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   468.322293: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79748 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   468.322296: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] ....   468.322308: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 520 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   468.322314: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 521 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   468.322320: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 521 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   468.322325: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 522 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   468.322339: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 522 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   468.322343: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 523 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322350: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 523 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322354: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 524 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322376: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] dnh.   468.322422: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 524 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] dnh.   468.322426: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] dnh.   468.322501: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => __sw_hweight32
 => __sw_hweight32
 => ledtrig_cpu
 => arch_cpu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] dnh.   468.322507: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] dnh.   468.322512: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 525 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d...   468.322548: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
          <idle>-0     [001] d...   468.322549: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   468.322565: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 525 from (usb_alloc_urb+0x20/0x5c) 
            rngd-555   [000] d...   468.322566: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:0-2013  [001] ....   468.322569: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 526 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   468.322577: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 526 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   468.322581: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 527 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322586: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 527 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322590: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 528 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322605: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   468.322642: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 528 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   468.322644: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   468.322685: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   468.322690: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   468.322695: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 529 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   468.322724: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   468.322734: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 529 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   468.322738: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 530 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   468.322742: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 530 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   468.322746: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 531 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   468.322753: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 531 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   468.322757: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 532 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322761: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 532 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322765: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 533 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322780: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   468.322813: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 533 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   468.322815: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   468.322854: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   468.322858: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   468.322863: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 534 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   468.322891: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   468.322901: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 534 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   468.322905: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 535 from (__usbnet_read_cmd+0x48/0xe8) 
     kworker/1:0-2013  [001] ....   468.322910: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 535 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   468.322914: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 536 from (usb_alloc_urb+0x20/0x5c) 
     kworker/1:0-2013  [001] ....   468.322920: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 536 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] ....   468.322924: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 537 from (__DWC_ALLOC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322928: __kmalloc: [+] comm: kworker/1:0, pid: 2013, kmalloc_times: 537 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322932: __kmalloc: [-] comm: kworker/1:0, pid: 2013, kmalloc_times: 538 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
     kworker/1:0-2013  [001] d...   468.322947: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d.h.   468.322980: __kmalloc: [+] comm: swapper/0, pid: 0, kmalloc_times: 538 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [000] d.h.   468.322982: trace_irq_race_dummy_call <-__kmalloc
          <idle>-0     [000] d.h.   468.323020: <stack trace>
 => trace_irq_race_dummy_call
 => __kmalloc
 => __DWC_ALLOC_ATOMIC
 => _complete
 => handle_hc_xfercomp_intr
 => dwc_otg_hcd_handle_hc_n_intr
 => dwc_otg_hcd_handle_hc_intr
 => dwc_otg_hcd_handle_intr
 => dwc_otg_hcd_irq
 => usb_hcd_irq
 => __handle_irq_event_percpu
 => handle_irq_event_percpu
 => handle_irq_event
 => handle_level_irq
 => generic_handle_irq
 => bcm2836_chained_handle_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => rcu_idle_exit
 => rcu_idle_exit
 => do_idle
 => cpu_startup_entry
 => rest_init
 => start_kernel
          <idle>-0     [000] d.h.   468.323025: trace_irq_race_dummy_call: [++] comm:swapper/0, pid:0, in_interrupt(): 0x00010000, preempt_count = 0x00010000 
          <idle>-0     [000] d.h.   468.323029: __kmalloc: [-] comm: swapper/0, pid: 0, kmalloc_times: 539 from (__DWC_ALLOC_ATOMIC+0x24/0x28) 
          <idle>-0     [001] d...   468.323057: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   468.323070: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79749 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   468.323078: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.332280: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.332294: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.348225: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.348257: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.348264: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79749 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.348267: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.348282: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79750 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.348310: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.352273: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.352357: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.359393: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   468.359508: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.395021: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   468.395085: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [003] d...   468.395159: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=778 next_prio=120
          mysqld-778   [003] d...   468.395201: sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=817 next_prio=120
          mysqld-817   [003] d...   468.395242: sched_switch: prev_comm=mysqld prev_pid=817 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.448381: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.448410: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.448417: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79750 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.448421: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.448434: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79751 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.448462: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.451373: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   468.451405: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   468.451445: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   468.451481: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.454035: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.454058: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.454082: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.454110: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.454133: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.454156: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.454179: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.454199: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.454205: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.454212: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79751 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.454215: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.454235: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.454260: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.454272: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.457284: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.457299: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.457322: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.457355: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.457381: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.457409: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.457435: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   468.457494: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   468.457502: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.457530: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.457543: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79752 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.457550: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.457629: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.457634: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79752 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.457637: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.457652: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.457660: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79753 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.457669: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   468.457756: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.457762: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79753 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.457765: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.457777: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79754 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.457786: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   468.457790: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   468.457833: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.457938: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.457944: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79754 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.457947: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.457959: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.457986: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.458021: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.458037: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79755 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.458043: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.459530: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.459549: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.459572: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.459595: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.459618: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.459641: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.459680: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [000] d...   468.459680: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   468.459697: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     irq/86-mmc1-80    [003] d...   468.459699: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.459702: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.459708: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79755 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.459711: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.459745: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.459771: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.459798: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.459826: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.459896: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.459923: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.459935: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79756 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.459942: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.472280: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.472292: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.492273: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.492371: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.517870: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.517890: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.517914: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.517938: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.517961: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.517985: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.518008: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.518026: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.518033: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.518039: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79756 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.518042: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.518062: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.518087: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.518098: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521111: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521126: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521150: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521182: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521207: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521235: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521260: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   468.521309: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521316: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521344: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521356: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79757 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.521363: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521412: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.521417: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79757 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.521421: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.521429: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521440: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79758 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.521448: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   468.521519: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.521526: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79758 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.521529: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.521540: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79759 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.521549: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   468.521553: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   468.521590: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521674: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.521680: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79759 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.521684: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.521692: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521720: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.521755: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.521769: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79760 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.521776: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.522922: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.522941: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.522964: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.522988: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.523011: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.523034: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.523056: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.523075: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.523080: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.523085: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79760 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.523089: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.523123: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.523149: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.523176: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.523201: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.523261: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.523288: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.523300: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79761 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.523307: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.537232: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   468.537266: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.542278: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.542289: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.548531: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.548567: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.548574: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79761 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.548590: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.548605: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79762 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.548633: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.562274: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.562340: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.562361: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.562372: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.588484: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   468.588516: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.621559: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   468.621587: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   468.621626: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   468.621672: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.621715: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   468.621747: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   468.621788: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   468.621823: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.648688: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.648718: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.648725: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79762 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.648728: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.648741: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79763 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.648767: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.679836: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   468.680050: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.682305: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.682311: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79763 from (kthread+0x140/0x170) 
          <idle>-0     [002] d...   468.682313: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
     kworker/0:2-336   [000] ....   468.682315: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.682336: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79764 from (kthread+0x140/0x170) 
       rcu_sched-10    [002] d...   468.682342: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:2-336   [000] d...   468.682344: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.702284: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   468.702304: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.710683: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.710708: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.710733: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.710759: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.710783: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.710807: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.710831: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.710850: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.710855: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.710861: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79764 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.710864: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.710885: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.710911: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.710921: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.713936: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.713951: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.713969: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.714001: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.714023: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.714050: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.714071: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   468.714132: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   468.714142: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.714163: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.714176: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79765 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.714182: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.714263: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.714269: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79765 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.714272: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.714287: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.714294: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79766 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.714303: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] ....   468.714525: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 539 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714531: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 540 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714536: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 540 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714540: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 541 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714544: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 541 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714550: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 542 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714556: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 542 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714560: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 543 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714564: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 543 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714568: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 544 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714573: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 544 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714577: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 545 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714582: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 545 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714586: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 546 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714590: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 546 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714594: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 547 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714599: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 547 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714602: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 548 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714607: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 548 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714611: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 549 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714616: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 549 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714620: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 550 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714625: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 550 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] ....   468.714628: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 551 from (ext4_htree_store_dirent+0x3c/0x12c) 
            bash-1802  [002] d...   468.714920: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.714928: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79766 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.714931: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.714944: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79767 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.714953: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   468.714961: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   468.714997: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.715119: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.715125: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79767 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.715129: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   468.715146: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   468.715171: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.715203: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.715220: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79768 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.715226: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.716210: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.716230: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.716255: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.716279: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.716303: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   468.716326: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.716350: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [002] d...   468.716368: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
     irq/86-mmc1-80    [003] d...   468.716368: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] ....   468.716373: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79768 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.716377: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.716410: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.716430: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.716457: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.716486: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.716562: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.716582: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   468.716594: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79769 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.716601: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.722294: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   468.722317: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.732279: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.732292: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.742275: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   468.742294: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.748843: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.748882: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.748889: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79769 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.748893: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.748909: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79770 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.748935: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.752275: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.752370: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   468.752389: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=brcmf_wdog/mmc1 next_pid=251 next_prio=120
 brcmf_wdog/mmc1-251   [000] d...   468.752416: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=251 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.762276: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   468.762289: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.782279: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   468.782294: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.812328: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=353 next_prio=120
  wpa_supplicant-353   [003] d...   468.812404: sched_switch: prev_comm=wpa_supplicant prev_pid=353 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.849003: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.849031: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.849037: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79770 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.849041: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.849053: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79771 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.849082: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.949154: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   468.949179: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   468.949185: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79771 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   468.949188: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   468.949200: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79772 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   468.949220: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   468.951478: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120
          mysqld-775   [003] d...   468.951518: sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120
          mysqld-774   [003] d...   468.951558: sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120
          mysqld-776   [003] d...   468.951593: sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.960332: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=995 next_prio=120
         lxpanel-995   [000] d...   468.960435: sched_switch: prev_comm=lxpanel prev_pid=995 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...   468.962277: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   468.962284: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79772 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   468.962287: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   468.962300: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79773 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   468.962307: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...   468.996610: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   468.996639: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   469.037341: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=523 next_prio=120
  wpa_supplicant-523   [003] d...   469.037444: sched_switch: prev_comm=wpa_supplicant prev_pid=523 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [003] d...   469.037486: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   469.049303: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   469.049330: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   469.049337: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79773 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   469.049340: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   469.049352: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79774 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   469.049373: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   469.060627: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=678 next_prio=120
         apache2-678   [003] d...   469.060687: sched_switch: prev_comm=apache2 prev_pid=678 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   469.088207: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=806 next_prio=120
          mysqld-806   [000] d...   469.088264: sched_switch: prev_comm=mysqld prev_pid=806 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=804 next_prio=120
          mysqld-804   [000] d...   469.088313: sched_switch: prev_comm=mysqld prev_pid=804 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   469.121472: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=802 next_prio=120
          mysqld-802   [000] d...   469.121504: sched_switch: prev_comm=mysqld prev_pid=802 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   469.121659: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120
          mysqld-777   [003] d...   469.121691: sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=770 next_prio=120
          mysqld-770   [003] d...   469.121730: sched_switch: prev_comm=mysqld prev_pid=770 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120
          mysqld-773   [003] d...   469.121771: sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...   469.121815: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=772 next_prio=120
          mysqld-772   [000] d...   469.121845: sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] d...   469.121886: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=771 next_prio=120
          mysqld-771   [000] d...   469.121920: sched_switch: prev_comm=mysqld prev_pid=771 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...   469.122285: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] ....   469.122294: worker_thread: [+] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79774 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] ....   469.122297: trace_function_dummy_call: [++] comm:kworker/1:0, pid:2013, from(worker_thread+0x18c/0x60c) 
     kworker/1:0-2013  [001] d...   469.122350: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...   469.122375: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....   469.122382: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 79775 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....   469.122385: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...   469.122393: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=2013 next_prio=120
     kworker/1:0-2013  [001] d...   469.122415: worker_thread: [-] comm: kworker/1:0, pid: 2013, global_func_exe_times: 79776 from (kthread+0x140/0x170) 
     kworker/1:0-2013  [001] d...   469.122442: sched_switch: prev_comm=kworker/1:0 prev_pid=2013 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...   469.149452: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [000] d...   469.149480: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/0:2 next_pid=336 next_prio=120
     kworker/0:2-336   [000] ....   469.149487: worker_thread: [+] comm: kworker/0:2, pid: 336, global_func_exe_times: 79776 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] ....   469.149491: trace_function_dummy_call: [++] comm:kworker/0:2, pid:336, from(worker_thread+0x18c/0x60c) 
     kworker/0:2-336   [000] d...   469.149503: worker_thread: [-] comm: kworker/0:2, pid: 336, global_func_exe_times: 79777 from (kthread+0x140/0x170) 
     kworker/0:2-336   [000] d...   469.149529: sched_switch: prev_comm=kworker/0:2 prev_pid=336 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...   469.149688: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120
          mysqld-803   [000] d...   469.149804: sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...   469.166890: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.166920: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   469.166946: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.166976: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   469.167001: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.167025: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...   469.167049: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.167069: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.167074: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   469.167080: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79777 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   469.167083: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   469.167106: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.167131: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   469.167143: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.170155: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   469.170172: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.170196: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   469.170232: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.170258: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   469.170288: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.170314: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [001] d...   469.170393: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
    kworker/u8:2-2067  [002] d...   469.170406: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.170434: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   469.170448: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79778 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   469.170455: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.170547: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   469.170552: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79778 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   469.170555: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
            sshd-1778  [001] d...   469.170560: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   469.170580: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79779 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   469.170589: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] d...   469.170645: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   469.170651: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79779 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   469.170654: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   469.170666: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79780 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   469.170676: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
          <idle>-0     [001] d...   469.170680: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1778 next_prio=120
            bash-1802  [002] d...   469.170848: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   469.170855: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79780 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   469.170858: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   469.170901: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=bash next_pid=1802 next_prio=120
            sshd-1778  [001] d...   469.170903: sched_switch: prev_comm=sshd prev_pid=1778 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
            bash-1802  [002] d...   469.170932: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   469.170949: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79781 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] d...   469.170957: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=1802 next_prio=120
            bash-1802  [002] ....   469.171108: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 551 from (alloc_pipe_info+0xd4/0x1c8) 
            bash-1802  [002] ....   469.171115: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 552 from (alloc_pipe_info+0xd4/0x1c8) 
            bash-1802  [002] ....   469.171197: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 552 from (kvmalloc_node+0x74/0x80) 
            bash-1802  [002] ....   469.171202: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 553 from (kvmalloc_node+0x74/0x80) 
            bash-1802  [002] ....   469.171206: __kmalloc: [+] comm: bash, pid: 1802, kmalloc_times: 553 from (kvmalloc_node+0x74/0x80) 
            bash-1802  [002] ....   469.171210: __kmalloc: [-] comm: bash, pid: 1802, kmalloc_times: 554 from (kvmalloc_node+0x74/0x80) 
          <idle>-0     [003] d...   469.171669: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=2134 next_prio=120
            bash-1802  [002] d...   469.172158: sched_switch: prev_comm=bash prev_pid=1802 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.172344: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...   469.172368: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-2134  [003] d...   469.172756: sched_switch: prev_comm=bash prev_pid=2134 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.172793: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=bash next_pid=2134 next_prio=120
            bash-2134  [003] d...   469.172807: sched_switch: prev_comm=bash prev_pid=2134 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.172839: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=bash next_pid=2134 next_prio=120
            bash-2134  [003] d...   469.172858: sched_switch: prev_comm=bash prev_pid=2134 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.172883: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=D ==> next_comm=bash next_pid=2134 next_prio=120
            bash-2134  [003] d...   469.172936: sched_switch: prev_comm=bash prev_pid=2134 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [003] d...   469.172961: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=bash next_pid=2134 next_prio=120
          <idle>-0     [002] d...   469.172962: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] ....   469.172972: worker_thread: [+] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79781 from (kthread+0x140/0x170) 
    kworker/u8:2-2067  [002] ....   469.172976: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:2067, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-2067  [002] d...   469.173065: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.173080: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
          <idle>-0     [000] d...   469.173085: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=555 next_prio=120
            rngd-555   [000] d...   469.173111: sched_switch: prev_comm=rngd prev_pid=555 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-2067  [002] d...   469.173116: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.173148: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
    kworker/u8:2-2067  [002] d...   469.173268: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...   469.173296: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=2067 next_prio=120
            bash-2134  [003] ....   469.173303: __kmalloc: [+] comm: bash, pid: 2134, kmalloc_times: 554 from (load_elf_phdrs+0x78/0xdc) 
            bash-2134  [003] ....   469.173310: __kmalloc: [-] comm: bash, pid: 2134, kmalloc_times: 555 from (load_elf_phdrs+0x78/0xdc) 
    kworker/u8:2-2067  [002] d...   469.173312: worker_thread: [-] comm: kworker/u8:2, pid: 2067, global_func_exe_times: 79782 from (kthread+0x140/0x170) 
            bash-2134  [003] ....   469.173319: __kmalloc: [+] comm: bash, pid: 2134, kmalloc_times: 555 from (load_elf_binary+0x174/0x1344) 
    kworker/u8:2-2067  [002] d...   469.173321: sched_switch: prev_comm=kworker/u8:2 prev_pid=2067 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-2134  [003] ....   469.173326: __kmalloc: [-] comm: bash, pid: 2134, kmalloc_times: 556 from (load_elf_binary+0x174/0x1344) 
            bash-2134  [003] ....   469.173355: __kmalloc: [+] comm: bash, pid: 2134, kmalloc_times: 556 from (load_elf_phdrs+0x78/0xdc) 
            bash-2134  [003] ....   469.173359: __kmalloc: [-] comm: bash, pid: 2134, kmalloc_times: 557 from (load_elf_phdrs+0x78/0xdc) 
