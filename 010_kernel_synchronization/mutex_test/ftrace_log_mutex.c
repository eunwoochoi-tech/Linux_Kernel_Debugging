# tracer: function
#
# entries-in-buffer/entries-written: 4933/4933   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 rpi_mutex_debug-1271  [002] ....    58.958033: mutex_unlock <-rb_simple_write
 rpi_mutex_debug-1271  [002] ....    58.958058: <stack trace>
 => mutex_unlock
 => rb_simple_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e8a7828
 rpi_mutex_debug-1271  [002] ....    58.958063: mutex_unlock: [-] mutex_unlock[27083695] start.. owner:0x9ed73c00, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958067: mutex_unlock: [-] mutex_unlock[27083695] end.. owner:0x0, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958094: mutex_lock: [+][fastpath] mutex_lock[27083695] start.. owner:0, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958097: mutex_lock: [+][fastpath] mutex_lock[27083695] start.. owner:9ed73c00, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958099: mutex_unlock <-trace_array_put
 rpi_mutex_debug-1271  [002] ....    58.958121: <stack trace>
 => mutex_unlock
 => trace_array_put
 => tracing_release_generic_tr
 => __fput
 => ____fput
 => task_work_run
 => do_work_pending
 => slow_work_pending
 => 0x76ec077c
 rpi_mutex_debug-1271  [002] ....    58.958125: mutex_unlock: [-] mutex_unlock[27083695] start.. owner:0x9ed73c00, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958128: mutex_unlock: [-] mutex_unlock[27083695] end.. owner:0x0, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958325: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958329: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed73c00, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958340: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    58.958359: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
 rpi_mutex_debug-1271  [002] ....    58.958361: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e8a7828
 rpi_mutex_debug-1271  [002] ....    58.958365: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed73c00, current_process:9ed73c00
    kworker/u8:0-7     [003] ....    58.958368: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24288 from (kthread+0x140/0x170) 
 rpi_mutex_debug-1271  [002] ....    58.958369: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958372: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed73c00
    kworker/u8:0-7     [003] ....    58.958373: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
 rpi_mutex_debug-1271  [002] ....    58.958375: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed73c00, current_process:9ed73c00
    kworker/u8:0-7     [003] ....    58.958378: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    58.958382: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9e85a00, current_process:b9e85a00
 rpi_mutex_debug-1271  [002] ....    58.958383: mutex_unlock <-n_tty_write
 rpi_mutex_debug-1271  [002] ....    58.958401: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e8a7828
 rpi_mutex_debug-1271  [002] ....    58.958405: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed73c00, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.958408: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed73c00
    kworker/u8:0-7     [003] ....    58.958408: mutex_unlock <-flush_to_ldisc
 rpi_mutex_debug-1271  [002] ....    58.958411: mutex_unlock <-tty_write_unlock
    kworker/u8:0-7     [003] ....    58.958427: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
 rpi_mutex_debug-1271  [002] ....    58.958429: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e8a7828
    kworker/u8:0-7     [003] ....    58.958431: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9e85a00, current_process:b9e85a00
 rpi_mutex_debug-1271  [002] ....    58.958432: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed73c00, current_process:9ed73c00
    kworker/u8:0-7     [003] ....    58.958434: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9e85a00
 rpi_mutex_debug-1271  [002] ....    58.958436: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed73c00
    kworker/u8:0-7     [003] ....    58.958439: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    58.958442: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    58.958444: mutex_unlock <-flush_to_ldisc
    kworker/u8:0-7     [003] ....    58.958459: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    58.958462: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    58.958466: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    58.958470: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24289 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    58.958479: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    58.958486: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24289 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    58.958489: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    58.958499: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    58.958548: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    58.958567: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    58.958572: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    58.958575: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
 rpi_mutex_debug-1271  [002] ....    58.958623: do_exit: [+] comm: rpi_mutex_debug, pid: 1271, global_func_exe_times: 948
 rpi_mutex_debug-1271  [002] ....    58.958627: trace_function_dummy_call: [++] comm:rpi_mutex_debug, pid:1271, from(do_exit+0x80/0xc44) 
 rpi_mutex_debug-1271  [002] ....    58.958634: do_exit: [-] comm: rpi_mutex_debug, pid: 1271, global_func_exe_times: 949
            sshd-1224  [003] d...    58.958798: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    58.958806: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24290 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    58.958809: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    58.958864: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.958898: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.958911: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
 rpi_mutex_debug-1271  [002] ....    58.959406: mutex_lock: [+][fastpath] mutex_lock[b4b39e93] start.. owner:0, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.959411: mutex_lock: [+][fastpath] mutex_lock[b4b39e93] start.. owner:9ed73c00, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.959413: mutex_unlock <-perf_event_exit_task
 rpi_mutex_debug-1271  [002] ....    58.959432: <stack trace>
 => mutex_unlock
 => perf_event_exit_task
 => do_exit
 => do_group_exit
 => __wake_up_parent
 => ret_fast_syscall
 => 0x7e8a7a58
 rpi_mutex_debug-1271  [002] ....    58.959436: mutex_unlock: [-] mutex_unlock[b4b39e93] start.. owner:0x9ed73c00, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] ....    58.959439: mutex_unlock: [-] mutex_unlock[b4b39e93] end.. owner:0x0, current_process:9ed73c00
 rpi_mutex_debug-1271  [002] d...    58.959507: sched_switch: prev_comm=rpi_mutex_debug prev_pid=1271 prev_prio=120 prev_state=Z ==> next_comm=bash next_pid=1248 next_prio=120
            bash-1248  [002] ....    58.959646: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    58.959650: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.959653: mutex_unlock <-tty_ioctl
            bash-1248  [002] ....    58.959671: <stack trace>
 => mutex_unlock
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b996c
            bash-1248  [002] ....    58.959675: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.959679: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    58.959969: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    58.959973: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.959976: mutex_unlock <-tty_ioctl
            bash-1248  [002] ....    58.959993: <stack trace>
 => mutex_unlock
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b91ec
            bash-1248  [002] ....    58.959997: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.960000: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    58.960006: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    58.960010: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.960012: mutex_unlock <-tty_do_resize
            bash-1248  [002] ....    58.960029: <stack trace>
 => mutex_unlock
 => tty_do_resize
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b91ec
            bash-1248  [002] ....    58.960032: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.960036: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    58.960153: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    58.960157: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.960171: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    58.960185: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
            bash-1248  [002] ....    58.960191: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:0-7     [003] ....    58.960192: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24291 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    58.960195: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:0-7     [003] ....    58.960196: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    58.960198: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
    kworker/u8:0-7     [003] ....    58.960201: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9e85a00
            bash-1248  [002] ....    58.960201: mutex_unlock <-tty_write_unlock
    kworker/u8:0-7     [003] ....    58.960204: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9e85a00, current_process:b9e85a00
            bash-1248  [002] ....    58.960219: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:0-7     [003] ....    58.960223: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    58.960223: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    58.960226: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:0-7     [003] ....    58.960243: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    58.960247: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    58.960250: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    58.960255: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24292 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    58.960265: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    58.960277: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    58.960302: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    58.960320: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    58.960325: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    58.960328: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    58.960444: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.961931: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.961952: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.961978: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.962028: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.962068: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.962205: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/3 next_pid=26 next_prio=120
     ksoftirqd/3-26    [003] d...    58.962217: sched_switch: prev_comm=ksoftirqd/3 prev_pid=26 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    58.962223: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24292 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    58.962227: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] d...    58.962245: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.962257: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.962275: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24293 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    58.962282: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    58.968030: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    58.968063: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    58.969261: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    58.969272: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    58.969275: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    58.969282: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    58.969299: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    58.969303: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    58.969307: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    58.969483: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    58.969487: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    58.969491: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    58.969507: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    58.969511: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    58.969515: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    58.969527: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    58.970213: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    58.970343: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.970348: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    58.970354: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24293 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    58.970357: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    58.970396: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.970423: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.970452: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.970478: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.970579: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.970607: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    58.970620: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24294 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    58.970626: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    58.988006: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    58.988023: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    58.988024: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    58.988036: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.008002: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [003] d...    59.008018: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
       rcu_sched-10    [002] d...    59.008032: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    59.008040: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.008066: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    59.008082: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.008108: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    59.008123: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.008148: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    59.008159: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.025243: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.025288: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.025297: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24294 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.025301: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.025306: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.025310: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.025321: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.025341: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.025345: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.025348: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.025353: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24295 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.025382: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.028010: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    59.028031: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.036969: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    59.036988: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.038014: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
          <idle>-0     [001] d...    59.038019: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/2:2-98    [002] ....    59.038021: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24295 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.038027: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] ....    59.038028: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24296 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    59.038032: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] d...    59.038043: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24297 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.038050: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] d...    59.038086: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...    59.038110: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:1 next_pid=32 next_prio=120
     kworker/1:1-32    [001] ....    59.038117: worker_thread: [+] comm: kworker/1:1, pid: 32, global_func_exe_times: 24297 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] ....    59.038120: trace_function_dummy_call: [++] comm:kworker/1:1, pid:32, from(worker_thread+0x18c/0x60c) 
     kworker/1:1-32    [001] d...    59.038129: sched_switch: prev_comm=kworker/1:1 prev_pid=32 prev_prio=120 prev_state=I ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] d...    59.038151: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24298 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    59.038176: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.048009: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    59.048028: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.068006: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    59.068022: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.125408: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.125436: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.125442: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24298 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.125446: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.125451: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.125454: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.125462: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.125480: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.125485: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.125488: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.125493: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24299 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.125518: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.146158: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=985 next_prio=120
         lxpanel-985   [000] ....    59.146245: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    59.146249: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.146253: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    59.146276: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5a0
         lxpanel-985   [000] ....    59.146281: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.146284: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] ....    59.146297: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    59.146300: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.146302: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    59.146320: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5c0
         lxpanel-985   [000] ....    59.146324: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.146327: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] d...    59.146365: sched_switch: prev_comm=lxpanel prev_pid=985 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.209131: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [000] d...    59.209178: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...    59.213515: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=797 next_prio=120
          mysqld-797   [001] d...    59.213600: sched_switch: prev_comm=mysqld prev_pid=797 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [001] d...    59.213668: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.223361: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    59.223372: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    59.223375: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.223378: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    59.223396: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    59.223400: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.223404: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    59.223423: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    59.223427: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.223429: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    59.223443: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    59.223447: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.223450: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    59.223458: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    59.223461: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.223463: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    59.223477: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    59.223481: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.223484: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    59.223494: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.225249: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=791 next_prio=120
          mysqld-791   [000] d...    59.225353: sched_switch: prev_comm=mysqld prev_pid=791 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.225559: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.225585: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.225592: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24299 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.225595: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.225600: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.225603: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.225612: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.225629: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.225633: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.225636: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.225640: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24300 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.225667: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.227004: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=790 next_prio=120
          mysqld-790   [002] d...    59.227041: sched_switch: prev_comm=mysqld prev_pid=790 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    59.237287: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    59.237296: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    59.237300: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.237302: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    59.237321: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    59.237325: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.237343: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    59.237360: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    59.237364: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.237366: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    59.237381: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    59.237385: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.237388: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    59.237394: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    59.237398: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.237399: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    59.237414: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    59.237417: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.237420: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    59.237431: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    59.237439: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    59.237443: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.237445: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    59.237460: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    59.237464: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.237467: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    59.237480: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    59.237484: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.237486: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    59.237500: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    59.237504: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.237507: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    59.237514: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    59.237517: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.237519: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    59.237533: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    59.237536: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.237539: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    59.237572: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.255871: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    59.255880: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    59.255884: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.255887: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    59.255904: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    59.255908: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.255911: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    59.255927: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    59.255930: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.255932: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    59.255946: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    59.255950: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.255954: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    59.255960: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    59.255964: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.255965: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    59.255979: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    59.255983: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.255986: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    59.255996: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.278023: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:2 next_pid=150 next_prio=120
     kworker/3:2-150   [003] ....    59.278031: worker_thread: [+] comm: kworker/3:2, pid: 150, global_func_exe_times: 24300 from (kthread+0x140/0x170) 
     kworker/3:2-150   [003] ....    59.278035: trace_function_dummy_call: [++] comm:kworker/3:2, pid:150, from(worker_thread+0x18c/0x60c) 
     kworker/3:2-150   [003] ....    59.278056: mutex_lock: [+][fastpath] mutex_lock[2827bf1c] start.. owner:0, current_process:b8280f00
     kworker/3:2-150   [003] ....    59.278060: mutex_lock: [+][fastpath] mutex_lock[2827bf1c] start.. owner:b8280f00, current_process:b8280f00
     kworker/3:2-150   [003] d...    59.278113: sched_switch: prev_comm=kworker/3:2 prev_pid=150 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.278128: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:2 next_pid=150 next_prio=120
     kworker/3:2-150   [003] ....    59.278132: mutex_unlock <-rpi_firmware_transaction
     kworker/3:2-150   [003] ....    59.278168: <stack trace>
 => mutex_unlock
 => rpi_firmware_transaction
 => rpi_firmware_property_list
 => rpi_firmware_property
 => get_values_poll
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/3:2-150   [003] ....    59.278172: mutex_unlock: [-] mutex_unlock[2827bf1c] start.. owner:0xb8280f00, current_process:b8280f00
     kworker/3:2-150   [003] ....    59.278176: mutex_unlock: [-] mutex_unlock[2827bf1c] end.. owner:0x0, current_process:b8280f00
     kworker/3:2-150   [003] d...    59.278193: worker_thread: [-] comm: kworker/3:2, pid: 150, global_func_exe_times: 24301 from (kthread+0x140/0x170) 
     kworker/3:2-150   [003] d...    59.278200: sched_switch: prev_comm=kworker/3:2 prev_pid=150 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.284972: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    59.284989: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.325709: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.325735: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.325742: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24301 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.325745: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.325750: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.325753: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.325761: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.325778: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.325782: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.325786: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.325791: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24302 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.325822: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.358027: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    59.358035: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24302 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    59.358039: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    59.358052: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24303 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    59.358080: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.423623: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=762 next_prio=120
          mysqld-762   [003] ....    59.423632: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    59.423635: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    59.423638: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    59.423653: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    59.423657: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    59.423660: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    59.423675: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    59.423678: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    59.423680: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    59.423694: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    59.423698: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    59.423701: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    59.423708: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    59.423711: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    59.423713: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    59.423727: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    59.423746: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    59.423749: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] d...    59.423759: sched_switch: prev_comm=mysqld prev_pid=762 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=763 next_prio=120
          mysqld-763   [003] ....    59.423767: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    59.423770: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.423772: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    59.423788: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    59.423791: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.423795: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    59.423808: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    59.423811: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.423828: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    59.423843: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    59.423847: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.423850: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    59.423856: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    59.423860: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.423862: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    59.423875: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    59.423879: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.423882: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] d...    59.423894: sched_switch: prev_comm=mysqld prev_pid=763 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=764 next_prio=120
          mysqld-764   [003] ....    59.423901: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    59.423918: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.423921: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    59.423936: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    59.423940: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.423943: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    59.423956: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    59.423960: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.423961: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    59.423976: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    59.423980: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.423983: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    59.423989: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    59.423993: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.423994: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    59.424008: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    59.424012: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.424015: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] d...    59.424024: sched_switch: prev_comm=mysqld prev_pid=764 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=758 next_prio=120
          mysqld-758   [003] ....    59.424031: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    59.424035: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.424037: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    59.424052: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    59.424056: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.424059: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    59.424072: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    59.424075: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.424077: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    59.424091: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    59.424095: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.424098: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    59.424105: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    59.424108: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.424110: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    59.424124: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    59.424127: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.424130: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] d...    59.424159: sched_switch: prev_comm=mysqld prev_pid=758 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.425859: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.425884: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.425890: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24303 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.425893: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.425898: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.425902: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.425909: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.425926: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.425930: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.425933: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.425938: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24304 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.425956: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.438788: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] ....    59.438797: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    59.438801: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    59.438803: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    59.438820: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    59.438824: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    59.438828: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    59.438842: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    59.438846: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    59.438848: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    59.438863: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    59.438882: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    59.438885: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    59.438892: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    59.438895: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    59.438897: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    59.438912: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    59.438915: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    59.438919: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] d...    59.438929: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=761 next_prio=120
          mysqld-761   [000] ....    59.438936: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    59.438939: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.438942: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    59.438956: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    59.438960: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.438963: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    59.438977: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    59.438980: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.438982: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    59.438996: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    59.439000: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.439003: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    59.439009: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    59.439013: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.439015: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    59.439028: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    59.439032: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.439035: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] d...    59.439064: sched_switch: prev_comm=mysqld prev_pid=761 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.469273: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    59.469282: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    59.469285: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.469291: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    59.469308: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    59.469312: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.469315: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    59.469479: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    59.469483: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.469487: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    59.469502: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    59.469506: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.469509: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    59.469521: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.526010: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.526036: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.526043: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24304 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.526046: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.526051: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.526055: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.526062: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.526079: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.526083: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.526086: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.526091: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24305 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.526118: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.533098: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    59.533114: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.626159: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.626185: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.626191: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24305 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.626196: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.626201: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.626204: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.626211: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.626228: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.626232: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.626235: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.626240: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24306 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.626267: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.691233: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=674 next_prio=120
         apache2-674   [000] d...    59.691317: sched_switch: prev_comm=apache2 prev_pid=674 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.723536: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    59.723545: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    59.723549: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.723551: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    59.723567: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    59.723570: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.723573: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    59.723588: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    59.723591: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.723593: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    59.723608: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    59.723611: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.723614: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    59.723621: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    59.723624: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.723626: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    59.723640: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    59.723643: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    59.723646: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    59.723655: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.726308: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.726333: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.726339: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24306 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.726342: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.726347: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.726351: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.726358: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.726375: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.726379: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.726382: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.726387: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24307 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.726412: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    59.737470: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    59.737479: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    59.737483: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.737485: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    59.737501: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    59.737505: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.737508: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    59.737521: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    59.737525: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.737527: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    59.737541: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    59.737544: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.737547: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    59.737554: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    59.737558: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.737560: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    59.737575: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    59.737594: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    59.737597: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    59.737607: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    59.737613: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    59.737616: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.737618: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    59.737633: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    59.737637: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.737640: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    59.737652: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    59.737656: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.737658: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    59.737672: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    59.737675: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.737679: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    59.737685: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    59.737690: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.737692: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    59.737705: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    59.737709: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    59.737712: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    59.737736: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.746979: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=985 next_prio=120
         lxpanel-985   [000] ....    59.747046: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    59.747050: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.747054: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    59.747077: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5a0
         lxpanel-985   [000] ....    59.747081: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.747084: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] ....    59.747095: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    59.747099: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.747101: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    59.747118: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5c0
         lxpanel-985   [000] ....    59.747122: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    59.747125: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] d...    59.747160: sched_switch: prev_comm=lxpanel prev_pid=985 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.756040: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    59.756049: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    59.756052: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.756057: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    59.756074: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    59.756078: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.756081: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    59.756095: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    59.756099: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.756100: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    59.756115: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    59.756119: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.756122: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    59.756129: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    59.756132: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.756134: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    59.756148: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    59.756151: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    59.756155: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    59.756164: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.788974: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    59.789005: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.826457: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.826482: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.826488: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24307 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.826492: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.826496: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.826500: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.826507: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.826524: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.826528: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.826531: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.826536: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24308 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.826561: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    59.826686: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=chronyd next_pid=489 next_prio=120
         chronyd-489   [001] d...    59.826993: sched_switch: prev_comm=chronyd prev_pid=489 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.827001: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24308 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    59.827005: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] ....    59.827012: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827015: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:b920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827023: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827027: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.827049: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.827052: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.827056: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.827061: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.827083: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.827087: mutex_unlock <-stop_cpus
     migration/2-20    [002] d...    59.827089: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/3-25    [003] d...    59.827091: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.827091: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.827120: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.827125: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827130: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827134: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827138: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.827153: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.827153: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.827159: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.827161: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.827175: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.827179: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    59.827180: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.827181: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    59.827181: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.827205: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.827210: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827213: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827217: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827220: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.827235: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.827236: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.827241: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.827243: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.827256: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.827259: mutex_unlock <-stop_cpus
     migration/2-20    [002] d...    59.827262: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/3-25    [003] d...    59.827262: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.827262: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.827284: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.827288: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827291: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827295: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827299: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.827313: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.827315: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.827319: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.827321: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.827334: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.827337: mutex_unlock <-stop_cpus
     migration/2-20    [002] d...    59.827340: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/3-25    [003] d...    59.827340: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.827340: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.827362: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.827366: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827369: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827373: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827377: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.827391: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.827392: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.827397: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.827399: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.827411: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.827415: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    59.827417: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.827417: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    59.827418: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.827440: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.827444: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827448: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827450: mutex_unlock <-static_key_enable_cpuslocked
     kworker/1:2-74    [001] ....    59.827467: <stack trace>
 => mutex_unlock
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.827471: mutex_unlock: [-] mutex_unlock[582fdb4b] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.827474: mutex_unlock: [-] mutex_unlock[582fdb4b] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] d...    59.827479: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24309 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    59.827486: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.828035: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    59.828055: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.848041: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    59.848063: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.848069: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24309 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.848073: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] d...    59.848083: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24310 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.848105: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    59.858031: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.858038: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24310 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    59.858041: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] ....    59.858047: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858050: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:b920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858054: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858058: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
     kworker/1:2-74    [001] d...    59.858075: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [000] d...    59.858076: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
          <idle>-0     [002] d...    59.858083: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.858083: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.858097: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.858100: mutex_unlock <-stop_cpus
     migration/2-20    [002] d...    59.858107: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.858107: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/3-25    [003] d...    59.858107: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.858127: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.858131: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858134: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858138: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858142: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.858157: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.858157: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.858159: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.858164: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.858177: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.858180: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    59.858183: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.858184: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    59.858184: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.858206: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.858211: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858214: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858218: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858221: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.858236: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.858236: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.858238: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.858243: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.858255: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.858259: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    59.858261: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.858262: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    59.858262: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.858284: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.858288: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858291: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858295: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858298: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.858313: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.858314: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.858315: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.858320: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.858334: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.858337: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    59.858339: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.858339: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    59.858339: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.858362: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.858366: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858369: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858373: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858376: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    59.858391: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    59.858392: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    59.858393: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    59.858399: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    59.858411: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    59.858414: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    59.858417: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/2-20    [002] d...    59.858417: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/0-12    [000] d...    59.858418: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    59.858440: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.858445: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858448: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858450: mutex_unlock <-static_key_disable_cpuslocked
     kworker/1:2-74    [001] ....    59.858467: <stack trace>
 => mutex_unlock
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    59.858471: mutex_unlock: [-] mutex_unlock[582fdb4b] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    59.858474: mutex_unlock: [-] mutex_unlock[582fdb4b] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] d...    59.858479: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24311 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    59.858486: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.868025: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    59.868041: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.923790: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=762 next_prio=120
          mysqld-762   [003] ....    59.923798: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    59.923801: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    59.923804: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    59.923820: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    59.923824: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    59.923827: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    59.923841: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    59.923845: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    59.923846: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    59.923860: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    59.923864: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    59.923868: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    59.923874: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    59.923878: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    59.923880: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    59.923893: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    59.923897: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    59.923900: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] d...    59.923929: sched_switch: prev_comm=mysqld prev_pid=762 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    59.923948: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=763 next_prio=120
          mysqld-763   [003] ....    59.923955: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    59.923958: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.923961: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    59.923976: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    59.923980: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.923983: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    59.923996: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    59.923999: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.924001: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    59.924015: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    59.924019: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.924022: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    59.924029: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    59.924032: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.924034: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    59.924048: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    59.924068: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    59.924072: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] d...    59.924082: sched_switch: prev_comm=mysqld prev_pid=763 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=764 next_prio=120
          mysqld-764   [003] ....    59.924089: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    59.924092: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.924096: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    59.924111: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    59.924115: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.924118: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    59.924131: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    59.924134: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.924136: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    59.924150: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    59.924154: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.924157: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    59.924177: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    59.924181: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.924183: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    59.924197: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    59.924201: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    59.924204: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] d...    59.924213: sched_switch: prev_comm=mysqld prev_pid=764 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=758 next_prio=120
          mysqld-758   [003] ....    59.924220: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    59.924223: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.924227: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    59.924242: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    59.924245: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.924248: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    59.924261: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    59.924265: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.924266: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    59.924280: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    59.924284: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.924287: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    59.924293: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    59.924297: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.924298: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    59.924312: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    59.924315: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    59.924319: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] d...    59.924336: sched_switch: prev_comm=mysqld prev_pid=758 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.926605: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    59.926633: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    59.926640: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24311 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    59.926643: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    59.926648: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.926652: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.926660: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    59.926678: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    59.926682: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    59.926685: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    59.926690: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24312 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    59.926707: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    59.938970: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] ....    59.938979: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    59.938982: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    59.938985: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    59.939001: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    59.939005: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    59.939009: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    59.939023: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    59.939026: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    59.939028: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    59.939043: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    59.939046: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    59.939050: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    59.939056: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    59.939059: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    59.939061: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    59.939075: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    59.939095: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    59.939099: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] d...    59.939108: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=761 next_prio=120
          mysqld-761   [000] ....    59.939115: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    59.939119: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.939121: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    59.939136: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    59.939140: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.939143: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    59.939156: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    59.939160: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.939162: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    59.939176: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    59.939179: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.939183: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    59.939189: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    59.939193: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.939194: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    59.939208: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    59.939212: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    59.939215: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] d...    59.939246: sched_switch: prev_comm=mysqld prev_pid=761 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.953438: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=951 next_prio=120
           gmain-951   [002] d...    59.953536: sched_switch: prev_comm=gmain prev_pid=951 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    59.969282: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    59.969292: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    59.969296: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.969301: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    59.969318: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    59.969322: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.969325: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    59.969476: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    59.969480: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.969484: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    59.969500: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    59.969503: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    59.969507: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    59.969518: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.026760: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.026787: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.026794: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24312 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.026797: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.026802: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.026806: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.026813: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.026831: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.026835: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.026838: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.026843: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24313 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.026875: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.037099: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    60.037115: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.078032: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    60.078039: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24313 from (kthread+0x140/0x170) 
          <idle>-0     [000] d...    60.078043: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/1:2-74    [001] ....    60.078043: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] ....    60.078052: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24314 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    60.078056: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    60.078074: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24315 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    60.078097: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=kworker/1:1 next_pid=32 next_prio=120
     kworker/0:3-467   [000] d...    60.078100: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:1-32    [001] ....    60.078105: worker_thread: [+] comm: kworker/1:1, pid: 32, global_func_exe_times: 24315 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] ....    60.078108: trace_function_dummy_call: [++] comm:kworker/1:1, pid:32, from(worker_thread+0x18c/0x60c) 
     kworker/1:1-32    [001] d...    60.078117: worker_thread: [-] comm: kworker/1:1, pid: 32, global_func_exe_times: 24316 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] d...    60.078125: sched_switch: prev_comm=kworker/1:1 prev_pid=32 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...    60.078154: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:1 next_pid=32 next_prio=120
     kworker/1:1-32    [001] ....    60.078160: worker_thread: [+] comm: kworker/1:1, pid: 32, global_func_exe_times: 24316 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] ....    60.078163: trace_function_dummy_call: [++] comm:kworker/1:1, pid:32, from(worker_thread+0x18c/0x60c) 
     kworker/1:1-32    [001] d...    60.078171: sched_switch: prev_comm=kworker/1:1 prev_pid=32 prev_prio=120 prev_state=I ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] d...    60.078190: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24317 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    60.078205: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.126910: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.126935: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.126941: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24317 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.126945: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.126950: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.126953: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.126961: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.126978: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.126982: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.126985: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.126990: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24318 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.127015: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.209243: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [000] d...    60.209283: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.213684: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=797 next_prio=120
          mysqld-797   [001] d...    60.213760: sched_switch: prev_comm=mysqld prev_pid=797 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [001] d...    60.213827: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.223697: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    60.223705: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    60.223709: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.223711: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    60.223727: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    60.223730: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.223734: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    60.223747: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    60.223750: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.223752: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    60.223766: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    60.223770: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.223773: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    60.223779: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    60.223782: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.223784: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    60.223798: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    60.223801: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.223804: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    60.223813: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.225425: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=791 next_prio=120
          mysqld-791   [000] d...    60.225528: sched_switch: prev_comm=mysqld prev_pid=791 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.227058: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.227085: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.227107: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24318 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.227111: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.227116: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.227119: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.227126: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.227144: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.227148: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.227151: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.227156: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24319 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.227164: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=mysqld next_pid=790 next_prio=120
          mysqld-790   [002] d...    60.227222: sched_switch: prev_comm=mysqld prev_pid=790 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.237634: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    60.237643: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    60.237646: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.237649: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    60.237666: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    60.237670: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.237673: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    60.237691: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    60.237694: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.237696: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    60.237711: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    60.237715: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.237718: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    60.237725: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    60.237728: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.237730: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    60.237744: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    60.237763: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.237766: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    60.237776: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    60.237783: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    60.237787: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.237789: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    60.237804: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    60.237807: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.237811: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    60.237826: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    60.237829: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.237831: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    60.237845: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    60.237849: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.237852: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    60.237858: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    60.237862: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.237863: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    60.237877: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    60.237881: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.237884: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    60.237915: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.256208: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    60.256216: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    60.256220: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.256222: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    60.256240: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    60.256244: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.256247: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    60.256261: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    60.256265: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.256268: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    60.256283: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    60.256287: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.256290: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    60.256296: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    60.256300: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.256301: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    60.256315: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    60.256319: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.256322: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    60.256331: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.292976: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    60.293009: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.327206: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.327232: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.327238: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24319 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.327242: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.327247: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.327250: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.327258: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.327275: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.327279: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.327283: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.327287: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24320 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.327314: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.347777: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=985 next_prio=120
         lxpanel-985   [000] ....    60.347843: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    60.347847: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.347850: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    60.347873: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5a0
         lxpanel-985   [000] ....    60.347877: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.347880: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] ....    60.347893: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    60.347897: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.347899: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    60.347917: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5c0
         lxpanel-985   [000] ....    60.347921: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.347924: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] d...    60.347958: sched_switch: prev_comm=lxpanel prev_pid=985 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.423950: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=762 next_prio=120
          mysqld-762   [003] ....    60.423957: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    60.423961: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    60.423963: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    60.423978: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    60.423982: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    60.423985: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    60.423998: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    60.424001: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    60.424003: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    60.424018: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    60.424021: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    60.424025: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    60.424031: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    60.424035: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    60.424036: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    60.424050: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    60.424053: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    60.424057: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] d...    60.424086: sched_switch: prev_comm=mysqld prev_pid=762 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.424105: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=763 next_prio=120
          mysqld-763   [003] ....    60.424113: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    60.424116: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.424118: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    60.424134: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    60.424138: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.424141: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    60.424155: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    60.424158: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.424160: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    60.424174: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    60.424178: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.424181: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    60.424187: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    60.424191: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.424192: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    60.424206: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    60.424210: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.424213: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] d...    60.424224: sched_switch: prev_comm=mysqld prev_pid=763 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.424256: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=764 next_prio=120
          mysqld-764   [003] ....    60.424263: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    60.424266: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.424269: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    60.424284: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    60.424287: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.424290: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    60.424303: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    60.424307: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.424308: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    60.424322: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    60.424326: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.424329: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    60.424335: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    60.424339: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.424340: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    60.424354: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    60.424371: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.424375: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] d...    60.424384: sched_switch: prev_comm=mysqld prev_pid=764 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=758 next_prio=120
          mysqld-758   [003] ....    60.424391: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    60.424394: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.424396: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    60.424411: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    60.424415: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.424418: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    60.424430: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    60.424433: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.424435: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    60.424449: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    60.424453: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.424456: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    60.424463: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    60.424466: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.424468: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    60.424482: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    60.424485: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.424489: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] d...    60.424507: sched_switch: prev_comm=mysqld prev_pid=758 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.427356: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.427381: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.427387: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24320 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.427390: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.427395: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.427398: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.427406: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.427423: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.427427: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.427430: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.427434: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24321 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.427451: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.439137: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] ....    60.439145: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    60.439149: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    60.439151: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    60.439167: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    60.439171: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    60.439175: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    60.439189: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    60.439192: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    60.439194: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    60.439209: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    60.439212: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    60.439216: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    60.439222: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    60.439225: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    60.439227: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    60.439241: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    60.439261: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    60.439264: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] d...    60.439274: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=761 next_prio=120
          mysqld-761   [000] ....    60.439282: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    60.439285: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.439288: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    60.439303: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    60.439307: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.439310: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    60.439324: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    60.439327: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.439329: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    60.439343: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    60.439347: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.439350: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    60.439356: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    60.439360: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.439362: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    60.439376: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    60.439379: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.439383: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] d...    60.439410: sched_switch: prev_comm=mysqld prev_pid=761 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.469289: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    60.469297: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    60.469301: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.469306: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    60.469321: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    60.469325: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.469329: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    60.469472: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    60.469477: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.469481: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    60.469496: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    60.469500: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.469503: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    60.469516: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.527506: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.527533: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.527540: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24321 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.527544: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.527549: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.527553: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.527560: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.527577: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.527581: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.527584: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.527589: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24322 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.527616: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.541098: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    60.541113: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.627656: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.627681: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.627688: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24322 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.627691: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.627696: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.627699: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.627706: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.627723: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.627727: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.627730: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.627735: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24323 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.627756: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.692331: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=674 next_prio=120
         apache2-674   [000] d...    60.692408: sched_switch: prev_comm=apache2 prev_pid=674 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.723858: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    60.723865: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    60.723869: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.723871: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    60.723886: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    60.723890: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.723893: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    60.723905: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    60.723909: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.723911: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    60.723925: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    60.723928: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.723932: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    60.723938: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    60.723941: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.723943: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    60.723957: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    60.723961: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    60.723964: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    60.723973: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.727804: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.727829: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.727835: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24323 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.727838: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.727843: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.727846: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.727854: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.727870: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.727874: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.727877: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.727882: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24324 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.727907: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.737801: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    60.737809: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    60.737814: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.737816: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    60.737832: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    60.737836: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.737839: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    60.737852: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    60.737855: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.737858: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    60.737872: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    60.737876: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.737879: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    60.737885: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    60.737888: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.737890: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    60.737904: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    60.737907: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    60.737911: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    60.737920: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.737939: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    60.737946: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    60.737949: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.737951: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    60.737966: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    60.737970: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.737973: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    60.737986: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    60.737989: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.737991: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    60.738005: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    60.738042: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.738045: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    60.738052: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    60.738055: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.738057: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    60.738073: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    60.738076: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    60.738079: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    60.738088: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.756376: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    60.756384: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    60.756388: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.756390: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    60.756407: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    60.756411: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.756414: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    60.756429: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    60.756433: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.756434: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    60.756449: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    60.756453: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.756456: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    60.756462: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    60.756466: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.756468: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    60.756481: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    60.756486: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    60.756489: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    60.756498: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.796971: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    60.797001: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.798048: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    60.798056: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24324 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    60.798059: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] ....    60.798066: mutex_lock: [+][fastpath] mutex_lock[a0e16cf6] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    60.798069: mutex_lock: [+][fastpath] mutex_lock[a0e16cf6] start.. owner:b920bc00, current_process:b920bc00
     kworker/1:2-74    [001] d...    60.798117: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.798185: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] d...    60.798218: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.798276: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] d...    60.798302: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.798362: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] d...    60.798389: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...    60.798445: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    60.798451: mutex_unlock <-__smsc95xx_mdio_read
     kworker/1:2-74    [001] ....    60.798474: <stack trace>
 => mutex_unlock
 => __smsc95xx_mdio_read
 => check_carrier
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    60.798479: mutex_unlock: [-] mutex_unlock[a0e16cf6] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    60.798482: mutex_unlock: [-] mutex_unlock[a0e16cf6] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] d...    60.798490: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24325 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    60.798497: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.827952: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.827977: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.827983: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24325 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.827987: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.827992: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.827995: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.828041: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.828058: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.828063: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.828066: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.828077: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24326 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.828097: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.924111: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=762 next_prio=120
          mysqld-762   [003] ....    60.924118: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    60.924122: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    60.924124: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    60.924140: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    60.924143: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    60.924146: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    60.924159: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    60.924162: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    60.924164: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    60.924179: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    60.924182: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    60.924186: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    60.924192: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    60.924195: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    60.924197: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    60.924211: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    60.924215: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    60.924218: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] d...    60.924240: sched_switch: prev_comm=mysqld prev_pid=762 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.924258: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=763 next_prio=120
          mysqld-763   [003] ....    60.924265: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    60.924268: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.924270: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    60.924285: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    60.924289: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.924292: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    60.924305: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    60.924308: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.924310: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    60.924324: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    60.924328: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.924331: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    60.924338: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    60.924341: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.924343: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    60.924357: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    60.924360: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    60.924364: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] d...    60.924373: sched_switch: prev_comm=mysqld prev_pid=763 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    60.924411: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=764 next_prio=120
          mysqld-764   [003] ....    60.924419: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    60.924422: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.924424: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    60.924440: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    60.924444: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.924447: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    60.924459: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    60.924462: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.924464: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    60.924478: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    60.924482: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.924485: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    60.924491: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    60.924495: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.924496: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    60.924510: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    60.924514: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    60.924531: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] d...    60.924541: sched_switch: prev_comm=mysqld prev_pid=764 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=758 next_prio=120
          mysqld-758   [003] ....    60.924547: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    60.924550: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.924553: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    60.924567: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    60.924571: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.924574: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    60.924586: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    60.924589: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.924591: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    60.924605: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    60.924608: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.924611: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    60.924618: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    60.924621: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.924623: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    60.924637: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    60.924640: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    60.924643: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] d...    60.924660: sched_switch: prev_comm=mysqld prev_pid=758 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.928102: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    60.928126: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    60.928132: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24326 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    60.928135: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    60.928140: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.928144: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.928152: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    60.928168: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    60.928172: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    60.928176: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    60.928180: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24327 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    60.928201: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.939301: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] ....    60.939309: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    60.939313: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    60.939316: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    60.939332: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    60.939336: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    60.939339: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    60.939352: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    60.939355: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    60.939357: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    60.939371: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    60.939375: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    60.939379: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    60.939385: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    60.939388: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    60.939390: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    60.939404: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    60.939408: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    60.939426: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] d...    60.939436: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=761 next_prio=120
          mysqld-761   [000] ....    60.939442: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    60.939446: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.939448: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    60.939463: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    60.939466: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.939470: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    60.939484: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    60.939487: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.939489: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    60.939503: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    60.939507: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.939510: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    60.939517: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    60.939520: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.939522: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    60.939536: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    60.939539: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    60.939542: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] d...    60.939570: sched_switch: prev_comm=mysqld prev_pid=761 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    60.948577: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=985 next_prio=120
         lxpanel-985   [000] ....    60.948628: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    60.948632: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.948635: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    60.948656: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5a0
         lxpanel-985   [000] ....    60.948660: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.948663: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] ....    60.948673: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    60.948677: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.948679: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    60.948697: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5c0
         lxpanel-985   [000] ....    60.948701: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    60.948704: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] d...    60.948737: sched_switch: prev_comm=lxpanel prev_pid=985 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.969297: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    60.969305: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    60.969309: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.969313: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    60.969329: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    60.969333: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.969336: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    60.969456: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    60.969460: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.969464: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    60.969479: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    60.969483: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    60.969486: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    60.969500: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    60.997098: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
          <idle>-0     [000] d...    60.997101: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    60.997109: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24327 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    60.997113: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
            rngd-539   [002] d...    60.997123: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:3-467   [000] d...    60.997145: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24328 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    60.997153: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.014850: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.014998: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.015002: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.015010: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24328 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.015013: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.015039: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.015065: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.015076: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.018092: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.018108: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.018134: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.018174: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.018201: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.018235: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.018261: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.018381: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.018544: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.018548: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.018563: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.018587: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.018591: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.018594: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.018598: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.018615: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.018619: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.018622: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.018664: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.018672: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24329 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.018676: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.018681: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.018685: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.018699: mutex_unlock <-flush_to_ldisc
    kworker/u8:0-7     [003] ....    61.018717: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
          <idle>-0     [002] d...    61.018717: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.018721: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.018724: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.018729: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24330 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    61.018738: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.018747: mutex_unlock <-n_tty_read
    kworker/u8:2-130   [003] d...    61.018753: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24330 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.018767: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.018772: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.018775: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    61.018786: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.018833: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.018836: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.018844: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.018859: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.018863: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    61.018865: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24330 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.018866: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.018868: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.018870: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.018873: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.018873: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.018876: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.018890: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.018890: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    61.018893: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.018897: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.018907: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.018911: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.018914: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.018919: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24331 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.018928: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.018936: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.018954: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.018973: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.018977: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.018981: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.019158: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.019165: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24331 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.019168: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.019219: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.019249: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.019265: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24332 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.019273: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.028261: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.028296: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.028305: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24332 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.028308: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.028313: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.028317: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.028328: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.028345: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.028349: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.028353: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.028357: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24333 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.028387: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.031943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.032065: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.032070: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.032076: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24333 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.032079: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.032114: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.032141: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.032169: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.032196: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.032278: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.032306: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.032319: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24334 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.032326: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.048059: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.048071: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.050043: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.050157: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.050161: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.050167: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24334 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.050170: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.050205: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.050232: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.050260: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.050285: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.050355: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.050455: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.050460: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.050472: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.050492: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.050497: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.050500: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.050503: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.050521: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.050525: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.050528: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.050563: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.050570: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24335 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.050573: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.050579: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.050583: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.050592: mutex_unlock <-flush_to_ldisc
    kworker/u8:0-7     [003] ....    61.050609: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
          <idle>-0     [002] d...    61.050611: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.050613: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.050616: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.050621: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24336 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.050629: mutex_unlock <-n_tty_read
    kworker/u8:0-7     [003] d...    61.050630: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.050643: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24336 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.050649: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.050653: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.050657: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    61.050670: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.050692: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.050696: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.050703: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.050719: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.050722: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    61.050725: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24336 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.050726: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.050728: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.050729: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.050732: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.050733: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.050737: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.050749: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.050749: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    61.050753: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.050756: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.050766: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.050771: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.050774: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.050778: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24337 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.050787: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.050790: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.050813: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.050832: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.050836: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.050840: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.050970: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.050977: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24337 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.050980: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.051027: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.051057: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.051072: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24338 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.051080: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.064419: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.064533: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.064539: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.064545: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24338 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.064548: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.064583: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.064610: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.064637: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.064663: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.064726: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.064754: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.064767: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24339 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.064773: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.078052: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.078062: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.078538: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.078651: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.078655: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.078660: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24339 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.078664: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.078698: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.078730: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
          <idle>-0     [003] d...    61.078731: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            rngd-539   [002] d...    61.078746: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] d...    61.078758: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.078785: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.078852: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.078948: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.078953: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.078965: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.078985: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.078990: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.078993: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.078996: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.079013: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.079017: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.079020: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.079055: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.079061: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24340 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.079065: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.079069: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.079073: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.079081: mutex_unlock <-flush_to_ldisc
          <idle>-0     [002] d...    61.079096: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.079098: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.079102: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.079105: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.079110: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24341 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.079112: mutex_unlock <-n_tty_read
    kworker/u8:0-7     [003] d...    61.079118: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.079131: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:2-130   [003] d...    61.079131: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24341 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.079136: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.079139: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    61.079157: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.079170: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.079174: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.079181: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.079196: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.079200: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    61.079202: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24341 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.079204: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.079205: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.079207: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.079210: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.079210: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.079214: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.079227: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.079227: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    61.079230: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.079234: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.079244: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.079248: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.079251: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.079256: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24342 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.079265: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.079266: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.079291: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.079311: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.079315: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.079318: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.079443: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.079450: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24342 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.079454: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.079502: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.079531: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.079547: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24343 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.079554: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.087617: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.087731: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.087735: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.087741: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24343 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.087744: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.087778: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.087805: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.087833: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.087859: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.087920: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.087948: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.087961: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24344 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.087969: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.098048: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.098058: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...    61.099991: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=748 next_prio=120
          mysqld-748   [001] d...    61.100044: sched_switch: prev_comm=mysqld prev_pid=748 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.118046: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
          <idle>-0     [001] d...    61.118052: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.118059: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24344 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    61.118063: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
 brcmf_wdog/mmc1-266   [003] d...    61.118084: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/1:2-74    [001] d...    61.118111: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
          <idle>-0     [003] d...    61.118111: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
     ksoftirqd/1-16    [001] d...    61.118136: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:1 next_pid=32 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.118136: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/1:1-32    [001] ....    61.118144: worker_thread: [+] comm: kworker/1:1, pid: 32, global_func_exe_times: 24345 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] ....    61.118147: trace_function_dummy_call: [++] comm:kworker/1:1, pid:32, from(worker_thread+0x18c/0x60c) 
     kworker/1:1-32    [001] d...    61.118155: sched_switch: prev_comm=kworker/1:1 prev_pid=32 prev_prio=120 prev_state=I ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
          <idle>-0     [003] d...    61.118162: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
     kworker/1:2-74    [001] d...    61.118178: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24346 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    61.118184: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.118185: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.118199: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.118210: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.128425: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.128460: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.128467: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24346 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.128471: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.128476: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.128480: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.128490: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.128508: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.128512: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.128515: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.128520: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24347 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.128550: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.154712: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.154827: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.154833: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.154839: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24347 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.154843: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.154863: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.154889: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.154900: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.157913: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.157928: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.157953: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.157986: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.158017: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.158046: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.158066: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.158137: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.158239: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.158243: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.158256: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.158277: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.158282: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.158285: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.158288: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.158305: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.158309: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.158312: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.158348: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.158354: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24348 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.158357: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.158363: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.158366: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.158375: mutex_unlock <-flush_to_ldisc
    kworker/u8:0-7     [003] ....    61.158392: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
          <idle>-0     [002] d...    61.158394: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.158397: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.158400: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.158405: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24349 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.158412: mutex_unlock <-n_tty_read
    kworker/u8:0-7     [003] d...    61.158414: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.158428: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24349 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.158431: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.158436: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.158439: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    61.158457: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.158472: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.158475: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.158483: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.158493: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.158499: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24349 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.158501: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    61.158502: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.158505: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.158507: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
            bash-1248  [002] ....    61.158508: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.158510: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
            bash-1248  [002] ....    61.158511: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.158523: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.158528: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    61.158532: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.158535: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.158540: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.158544: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.158547: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.158552: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24350 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.158560: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.158567: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.158586: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.158606: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.158611: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.158614: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.158745: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.158752: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24350 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.158756: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.158805: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.158835: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.158850: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24351 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.158858: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.168778: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.168892: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.168898: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.168904: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24351 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.168907: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.168942: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.168969: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.168997: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.169023: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.169087: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.169115: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.169127: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24352 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.169134: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.188054: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.188064: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.196973: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    61.196988: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.208045: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.208087: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.208106: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.208123: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.208140: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.208155: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.208172: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.208183: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.209349: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [000] d...    61.209377: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...    61.213850: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=797 next_prio=120
          mysqld-797   [001] d...    61.213921: sched_switch: prev_comm=mysqld prev_pid=797 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [001] d...    61.213980: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.224017: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    61.224027: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    61.224031: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.224034: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    61.224052: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    61.224056: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.224059: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    61.224079: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    61.224082: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.224085: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    61.224099: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    61.224103: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.224106: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    61.224114: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    61.224117: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.224119: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    61.224133: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    61.224137: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.224140: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    61.224150: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.225601: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=791 next_prio=120
          mysqld-791   [000] d...    61.225701: sched_switch: prev_comm=mysqld prev_pid=791 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.227275: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=790 next_prio=120
          mysqld-790   [002] d...    61.227310: sched_switch: prev_comm=mysqld prev_pid=790 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.228590: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.228629: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.228637: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24352 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.228640: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.228646: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.228649: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.228660: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.228678: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.228682: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.228685: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.228690: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24353 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.228721: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    61.237968: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    61.237976: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    61.237980: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.237983: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    61.237999: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    61.238003: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.238043: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    61.238059: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    61.238064: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.238067: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    61.238082: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    61.238086: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.238089: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    61.238096: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    61.238099: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.238101: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    61.238115: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    61.238134: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.238137: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    61.238147: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    61.238155: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    61.238158: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.238160: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    61.238175: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    61.238179: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.238182: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    61.238197: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    61.238201: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.238203: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    61.238217: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    61.238221: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.238224: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    61.238230: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    61.238234: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.238235: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    61.238249: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    61.238253: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.238256: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    61.238288: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.256542: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    61.256551: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    61.256555: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.256558: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    61.256576: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    61.256580: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.256583: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    61.256599: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    61.256602: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.256604: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    61.256619: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    61.256623: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.256626: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    61.256632: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    61.256636: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.256638: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    61.256651: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    61.256655: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.256659: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    61.256668: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.320819: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [003] d...    61.320954: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.320961: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24353 from (kthread+0x140/0x170) 
     irq/86-mmc1-80    [000] d...    61.320964: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    61.320964: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.320985: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.321012: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.321024: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.324037: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.324053: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.324078: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.324113: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.324139: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.324169: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.324194: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.324283: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.324421: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.324426: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.324440: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.324461: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.324465: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.324469: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.324472: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.324490: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.324494: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.324497: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.324535: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.324542: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24354 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.324545: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.324550: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.324554: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.324564: mutex_unlock <-flush_to_ldisc
          <idle>-0     [002] d...    61.324581: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.324582: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.324586: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.324589: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.324596: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24355 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.324603: mutex_unlock <-n_tty_read
    kworker/u8:0-7     [003] d...    61.324606: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.324620: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24355 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.324623: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.324628: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.324631: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    61.324642: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.324670: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.324674: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.324682: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.324697: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.324700: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    61.324703: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24355 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.324704: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.324706: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.324707: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.324710: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.324711: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.324715: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.324727: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.324729: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    61.324733: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.324736: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.324744: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.324748: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.324752: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.324756: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24356 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.324765: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.324772: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.324791: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.324810: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.324814: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.324818: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.324969: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.324976: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24356 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.324979: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.325031: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.325060: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.325077: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24357 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.325084: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.328757: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.328790: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.328797: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24357 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.328800: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.328805: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.328809: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.328819: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.328836: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.328840: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.328843: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.328847: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24358 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.328878: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.333866: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.333985: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.333991: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.333996: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24358 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.333999: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.334034: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.334061: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.334089: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.334115: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.334189: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.334216: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.334228: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24359 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.334235: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.348059: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.348070: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.349428: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [002] d...    61.349437: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    61.349453: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.349542: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
     irq/86-mmc1-80    [000] d...    61.349543: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    61.349548: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24359 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.349551: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.349586: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.349608: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.349635: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.349656: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.349724: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.349822: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.349827: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.349839: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.349859: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.349863: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.349867: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.349870: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.349887: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.349891: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.349894: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.349923: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.349930: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24360 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.349933: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.349938: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.349941: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.349950: mutex_unlock <-flush_to_ldisc
          <idle>-0     [002] d...    61.349964: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.349966: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.349970: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.349974: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.349978: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24361 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.349981: mutex_unlock <-n_tty_read
    kworker/u8:0-7     [003] d...    61.349986: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.349999: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24361 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.350000: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.350005: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350008: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.350023: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.350026: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350028: mutex_unlock <-n_tty_write
    kworker/u8:2-130   [003] d...    61.350030: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.350046: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
            bash-1248  [002] ....    61.350050: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350053: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.350056: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.350060: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350068: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.350078: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.350084: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24361 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.350085: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
    kworker/u8:2-130   [003] ....    61.350087: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.350089: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350092: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.350092: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
            bash-1248  [002] ....    61.350095: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.350096: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.350110: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.350112: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
            bash-1248  [002] ....    61.350115: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350119: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.350126: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.350130: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.350133: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.350138: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24362 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.350147: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.350173: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.350192: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.350196: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.350199: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.350337: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.350347: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24362 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.350351: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.350404: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.350429: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.350446: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24363 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.350453: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.350699: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.350704: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350706: mutex_unlock <-tty_ioctl
            bash-1248  [002] ....    61.350725: <stack trace>
 => mutex_unlock
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b91ec
            bash-1248  [002] ....    61.350730: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350733: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.350739: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.350742: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350745: mutex_unlock <-tty_do_resize
            bash-1248  [002] ....    61.350761: <stack trace>
 => mutex_unlock
 => tty_do_resize
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b91ec
            bash-1248  [002] ....    61.350765: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350768: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.350850: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.350854: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350866: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.350875: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.350880: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24363 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.350884: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.350885: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.350889: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.350889: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
            bash-1248  [002] ....    61.350892: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.350892: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
            bash-1248  [002] ....    61.350895: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.350906: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.350913: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.350916: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.350919: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.350924: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.350928: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.350932: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.350936: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24364 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.350945: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.350967: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.350974: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.350993: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.350997: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.351001: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.351147: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.351154: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24364 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.351157: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.351206: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.351233: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.351249: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24365 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.351256: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.358065: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:2 next_pid=150 next_prio=120
     kworker/3:2-150   [003] ....    61.358072: worker_thread: [+] comm: kworker/3:2, pid: 150, global_func_exe_times: 24365 from (kthread+0x140/0x170) 
     kworker/3:2-150   [003] ....    61.358076: trace_function_dummy_call: [++] comm:kworker/3:2, pid:150, from(worker_thread+0x18c/0x60c) 
     kworker/3:2-150   [003] ....    61.358094: mutex_lock: [+][fastpath] mutex_lock[2827bf1c] start.. owner:0, current_process:b8280f00
     kworker/3:2-150   [003] ....    61.358098: mutex_lock: [+][fastpath] mutex_lock[2827bf1c] start.. owner:b8280f00, current_process:b8280f00
     kworker/3:2-150   [003] d...    61.358131: sched_switch: prev_comm=kworker/3:2 prev_pid=150 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.358151: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:2 next_pid=150 next_prio=120
     kworker/3:2-150   [003] ....    61.358155: mutex_unlock <-rpi_firmware_transaction
     kworker/3:2-150   [003] ....    61.358180: <stack trace>
 => mutex_unlock
 => rpi_firmware_transaction
 => rpi_firmware_property_list
 => rpi_firmware_property
 => get_values_poll
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/3:2-150   [003] ....    61.358185: mutex_unlock: [-] mutex_unlock[2827bf1c] start.. owner:0xb8280f00, current_process:b8280f00
     kworker/3:2-150   [003] ....    61.358188: mutex_unlock: [-] mutex_unlock[2827bf1c] end.. owner:0x0, current_process:b8280f00
     kworker/3:2-150   [003] d...    61.358203: worker_thread: [-] comm: kworker/3:2, pid: 150, global_func_exe_times: 24366 from (kthread+0x140/0x170) 
     kworker/3:2-150   [003] d...    61.358210: sched_switch: prev_comm=kworker/3:2 prev_pid=150 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.362350: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [003] d...    61.362470: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
     irq/86-mmc1-80    [000] d...    61.362471: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    61.362475: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24366 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.362478: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.362516: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.362544: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.362573: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.362599: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.362688: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.362716: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.362729: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24367 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.362736: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.378053: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.378064: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.398053: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.398095: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.398122: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.398139: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.398164: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.398180: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.398204: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.398215: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.424271: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=762 next_prio=120
          mysqld-762   [003] ....    61.424282: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    61.424286: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    61.424288: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    61.424305: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    61.424309: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    61.424313: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    61.424335: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    61.424338: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    61.424340: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    61.424355: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    61.424359: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    61.424362: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    61.424369: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    61.424373: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    61.424375: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    61.424389: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    61.424409: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    61.424413: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] d...    61.424424: sched_switch: prev_comm=mysqld prev_pid=762 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=763 next_prio=120
          mysqld-763   [003] ....    61.424431: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    61.424434: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.424437: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    61.424453: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    61.424459: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.424462: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    61.424476: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    61.424479: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.424481: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    61.424495: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    61.424499: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.424502: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    61.424509: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    61.424512: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.424514: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    61.424528: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    61.424531: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.424534: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] d...    61.424564: sched_switch: prev_comm=mysqld prev_pid=763 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.424584: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=764 next_prio=120
          mysqld-764   [003] ....    61.424592: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    61.424595: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.424598: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    61.424613: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    61.424617: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.424620: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    61.424634: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    61.424637: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.424639: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    61.424653: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    61.424657: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.424660: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    61.424667: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    61.424670: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.424687: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    61.424701: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    61.424705: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.424708: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] d...    61.424718: sched_switch: prev_comm=mysqld prev_pid=764 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=758 next_prio=120
          mysqld-758   [003] ....    61.424726: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    61.424729: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.424732: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    61.424746: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    61.424750: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.424753: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    61.424767: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    61.424771: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.424773: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    61.424787: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    61.424790: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.424794: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    61.424800: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    61.424803: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.424805: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    61.424819: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    61.424823: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.424826: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] d...    61.424843: sched_switch: prev_comm=mysqld prev_pid=758 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.428923: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.428969: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.428976: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24367 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.428980: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.428985: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.428989: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.429000: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.429018: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.429022: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.429025: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.429031: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24368 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.429060: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.439469: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] ....    61.439477: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    61.439481: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    61.439484: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    61.439501: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    61.439505: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    61.439508: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    61.439525: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    61.439529: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    61.439532: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    61.439547: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    61.439551: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    61.439554: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    61.439561: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    61.439564: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    61.439566: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    61.439580: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    61.439600: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    61.439604: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] d...    61.439614: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=761 next_prio=120
          mysqld-761   [000] ....    61.439622: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    61.439625: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.439628: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    61.439643: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    61.439646: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.439650: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    61.439663: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    61.439667: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.439669: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    61.439683: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    61.439686: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.439690: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    61.439696: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    61.439699: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.439701: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    61.439715: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    61.439718: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.439722: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] d...    61.439752: sched_switch: prev_comm=mysqld prev_pid=761 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.469306: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    61.469315: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    61.469319: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.469325: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    61.469342: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    61.469346: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.469350: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    61.469520: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    61.469524: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.469528: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    61.469543: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    61.469547: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.469551: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    61.469563: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.509103: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    61.509140: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.529093: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.529123: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.529129: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24368 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.529132: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.529137: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.529141: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.529150: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.529167: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.529171: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.529174: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.529179: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24369 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.529206: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.549353: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=985 next_prio=120
         lxpanel-985   [000] ....    61.549429: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    61.549433: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    61.549436: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    61.549459: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5a0
         lxpanel-985   [000] ....    61.549463: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    61.549467: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] ....    61.549479: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    61.549483: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    61.549485: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    61.549502: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5c0
         lxpanel-985   [000] ....    61.549506: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    61.549510: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] d...    61.549547: sched_switch: prev_comm=lxpanel prev_pid=985 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.618712: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [003] d...    61.618843: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
     irq/86-mmc1-80    [000] d...    61.618849: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    61.618851: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24369 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.618854: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.618876: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.618902: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.618914: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.621926: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.621942: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.621966: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.622003: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.622029: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.622059: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.622085: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.622182: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.622330: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.622334: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.622348: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.622369: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.622374: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.622377: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.622381: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.622398: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.622402: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.622406: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.622445: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.622453: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24370 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.622456: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.622462: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.622465: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.622477: mutex_unlock <-flush_to_ldisc
    kworker/u8:0-7     [003] ....    61.622496: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
          <idle>-0     [002] d...    61.622496: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.622500: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.622503: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.622508: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24371 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    61.622517: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.622521: mutex_unlock <-n_tty_read
    kworker/u8:2-130   [003] d...    61.622531: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24371 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.622541: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.622546: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.622549: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    61.622554: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.622599: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.622603: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.622611: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.622626: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.622629: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    61.622632: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24371 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.622633: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.622635: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.622636: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.622639: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.622640: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.622643: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
            bash-1248  [002] ....    61.622656: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    61.622656: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.622660: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.622663: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.622673: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.622677: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.622680: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.622685: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24372 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.622695: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.622701: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.622722: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.622740: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.622745: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.622748: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.622910: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.622917: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24372 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.622921: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.622974: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.623004: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.623020: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24373 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.623027: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.629247: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.629277: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.629283: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24373 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.629286: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.629293: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.629296: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.629306: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.629323: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.629326: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.629330: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.629334: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24374 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.629360: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.631792: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.631910: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.631915: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.631921: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24374 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.631924: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.631960: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.631987: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.632016: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.632042: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.632120: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.632147: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.632160: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24375 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.632168: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.648062: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.648073: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.657238: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.657352: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.657356: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.657362: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24375 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.657365: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.657399: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.657425: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.657453: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.657479: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.657547: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
          <idle>-0     [002] d...    61.657578: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    61.657612: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.657648: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    61.657652: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.657664: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.657685: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.657689: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.657693: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    61.657696: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.657713: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    61.657717: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.657720: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.657749: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.657756: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24376 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.657759: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.657764: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.657767: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.657776: mutex_unlock <-flush_to_ldisc
          <idle>-0     [002] d...    61.657791: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:0-7     [003] ....    61.657793: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.657797: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.657800: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] d...    61.657805: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24377 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.657808: mutex_unlock <-n_tty_read
    kworker/u8:0-7     [003] d...    61.657813: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.657826: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24377 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.657828: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    61.657833: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.657836: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    61.657843: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    61.657851: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.657855: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.657857: mutex_unlock <-n_tty_write
            bash-1248  [002] ....    61.657875: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
            bash-1248  [002] ....    61.657878: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.657882: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.657885: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.657889: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.657898: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.657912: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.657915: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
    kworker/u8:2-130   [003] ....    61.657918: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24377 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.657919: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.657921: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.657922: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.657925: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.657926: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.657930: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.657942: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.657943: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
            bash-1248  [002] ....    61.657946: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.657950: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.657959: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.657963: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.657967: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.657971: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24378 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.657980: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.658006: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.658024: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.658052: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.658056: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.658196: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.658203: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24378 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.658207: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.658264: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.658295: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.658312: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24379 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.658320: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.658877: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1278 next_prio=120
            bash-1248  [002] d...    61.659357: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
              ls-1278  [000] ....    61.659401: mutex_lock: [+][fastpath] mutex_lock[37a316b1] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.659406: mutex_lock: [+][fastpath] mutex_lock[37a316b1] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.659411: mutex_unlock <-pipe_release
              ls-1278  [000] ....    61.659441: <stack trace>
 => mutex_unlock
 => pipe_release
 => __fput
 => ____fput
 => task_work_run
 => do_work_pending
 => slow_work_pending
 => 0x76e896bc
              ls-1278  [000] ....    61.659446: mutex_unlock: [-] mutex_unlock[37a316b1] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.659450: mutex_unlock: [-] mutex_unlock[37a316b1] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.659465: mutex_lock: [+][fastpath] mutex_lock[37a316b1] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.659468: mutex_lock: [+][fastpath] mutex_lock[37a316b1] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.659470: mutex_unlock <-pipe_read
              ls-1278  [000] ....    61.659488: <stack trace>
 => mutex_unlock
 => pipe_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b98d8
              ls-1278  [000] ....    61.659491: mutex_unlock: [-] mutex_unlock[37a316b1] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.659495: mutex_unlock: [-] mutex_unlock[37a316b1] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.659542: mutex_lock: [+][fastpath] mutex_lock[37a316b1] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.659546: mutex_lock: [+][fastpath] mutex_lock[37a316b1] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.659548: mutex_unlock <-pipe_release
              ls-1278  [000] ....    61.659565: <stack trace>
 => mutex_unlock
 => pipe_release
 => __fput
 => ____fput
 => task_work_run
 => do_work_pending
 => slow_work_pending
 => 0x76e896bc
              ls-1278  [000] ....    61.659568: mutex_unlock: [-] mutex_unlock[37a316b1] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.659571: mutex_unlock: [-] mutex_unlock[37a316b1] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.660938: mutex_unlock <-install_exec_creds
              ls-1278  [000] ....    61.660960: <stack trace>
 => mutex_unlock
 => install_exec_creds
 => load_elf_binary
 => search_binary_handler.part.0
 => __do_execve_file
 => sys_execve
 => ret_fast_syscall
 => 0x7e9b9974
              ls-1278  [000] ....    61.660998: mutex_unlock: [-] mutex_unlock[f4ab95bd] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.661001: mutex_unlock: [-] mutex_unlock[f4ab95bd] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664358: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664365: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664369: mutex_unlock <-kernfs_iop_permission
              ls-1278  [000] ....    61.664400: <stack trace>
 => mutex_unlock
 => kernfs_iop_permission
 => inode_permission
 => link_path_walk.part.0
 => path_lookupat
 => filename_lookup
 => user_path_at_empty
 => user_statfs
 => sys_statfs
 => ret_fast_syscall
 => 0x7ee10bdc
              ls-1278  [000] ....    61.664404: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664408: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664414: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664417: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664420: mutex_unlock <-kernfs_dop_revalidate
              ls-1278  [000] ....    61.664441: <stack trace>
 => mutex_unlock
 => kernfs_dop_revalidate
 => lookup_fast
 => walk_component
 => link_path_walk.part.0
 => path_lookupat
 => filename_lookup
 => user_path_at_empty
 => user_statfs
 => sys_statfs
 => ret_fast_syscall
 => 0x7ee10bdc
              ls-1278  [000] ....    61.664445: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664448: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664452: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664456: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664458: mutex_unlock <-kernfs_iop_permission
              ls-1278  [000] ....    61.664477: <stack trace>
 => mutex_unlock
 => kernfs_iop_permission
 => inode_permission
 => link_path_walk.part.0
 => path_lookupat
 => filename_lookup
 => user_path_at_empty
 => user_statfs
 => sys_statfs
 => ret_fast_syscall
 => 0x7ee10bdc
              ls-1278  [000] ....    61.664481: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664484: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664494: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664497: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664502: mutex_unlock <-kernfs_iop_lookup
              ls-1278  [000] ....    61.664523: <stack trace>
 => mutex_unlock
 => kernfs_iop_lookup
 => __lookup_slow
 => lookup_slow
 => walk_component
 => path_lookupat
 => filename_lookup
 => user_path_at_empty
 => user_statfs
 => sys_statfs
 => ret_fast_syscall
 => 0x7ee10bdc
              ls-1278  [000] ....    61.664526: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664530: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664888: mutex_lock: [+][fastpath] mutex_lock[2289d87d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.664892: mutex_lock: [+][fastpath] mutex_lock[2289d87d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664957: mutex_unlock <-seq_read
              ls-1278  [000] ....    61.664980: <stack trace>
 => mutex_unlock
 => seq_read
 => proc_reg_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee10be8
              ls-1278  [000] ....    61.664984: mutex_unlock: [-] mutex_unlock[2289d87d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.664987: mutex_unlock: [-] mutex_unlock[2289d87d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.665033: mutex_lock: [+][fastpath] mutex_lock[2289d87d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.665036: mutex_lock: [+][fastpath] mutex_lock[2289d87d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.665038: mutex_unlock <-seq_read
              ls-1278  [000] ....    61.665056: <stack trace>
 => mutex_unlock
 => seq_read
 => proc_reg_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee10be8
              ls-1278  [000] ....    61.665060: mutex_unlock: [-] mutex_unlock[2289d87d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.665063: mutex_unlock: [-] mutex_unlock[2289d87d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.665491: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.665499: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.665501: mutex_unlock <-tty_ioctl
              ls-1278  [000] ....    61.665522: <stack trace>
 => mutex_unlock
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7ee10b3c
              ls-1278  [000] ....    61.665526: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.665529: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] d...    61.666720: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.666896: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=ls next_pid=1278 next_prio=120
          <idle>-0     [003] d...    61.666911: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.666920: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24379 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.666924: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.666994: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.667009: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.667042: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.667071: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.667188: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.667227: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.667244: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24380 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.667251: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.668133: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
              ls-1278  [000] d...    61.668171: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    61.668182: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24380 from (kthread+0x140/0x170) 
       rcu_sched-10    [002] d...    61.668184: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/0:3-467   [000] ....    61.668186: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
          <idle>-0     [002] d...    61.668218: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/0:3-467   [000] d...    61.668219: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24381 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.668226: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24381 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.668230: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    61.668231: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=kworker/0:2H next_pid=101 next_prio=100
    kworker/0:2H-101   [000] ....    61.668237: worker_thread: [+] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24382 from (kthread+0x140/0x170) 
    kworker/0:2H-101   [000] ....    61.668241: trace_function_dummy_call: [++] comm:kworker/0:2H, pid:101, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] d...    61.668243: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24383 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.668262: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/0:2H-101   [000] ....    61.668277: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:0, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.668281: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:b8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.668284: mutex_unlock <-mmc_blk_mq_complete_prev_req.part.0
    kworker/0:2H-101   [000] ....    61.668326: <stack trace>
 => mutex_unlock
 => mmc_blk_mq_complete_prev_req.part.0
 => mmc_blk_rw_wait
 => mmc_blk_mq_issue_rq
 => mmc_mq_queue_rq
 => blk_mq_dispatch_rq_list
 => blk_mq_do_dispatch_sched
 => blk_mq_sched_dispatch_requests
 => __blk_mq_run_hw_queue
 => blk_mq_run_work_fn
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/0:2H-101   [000] ....    61.668331: mutex_unlock: [-] mutex_unlock[ee76c60f] start.. owner:0xb8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.668334: mutex_unlock: [-] mutex_unlock[ee76c60f] end.. owner:0x0, current_process:b8260000
    kworker/0:2H-101   [000] d...    61.668391: worker_thread: [-] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24383 from (kthread+0x140/0x170) 
    kworker/0:2H-101   [000] d...    61.668401: sched_switch: prev_comm=kworker/0:2H prev_pid=101 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    61.668406: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24383 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    61.668410: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    61.668419: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24384 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    61.668427: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] d...    61.668478: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2H next_pid=101 next_prio=100
    kworker/0:2H-101   [000] ....    61.668484: worker_thread: [+] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24384 from (kthread+0x140/0x170) 
    kworker/0:2H-101   [000] ....    61.668487: trace_function_dummy_call: [++] comm:kworker/0:2H, pid:101, from(worker_thread+0x18c/0x60c) 
    kworker/0:2H-101   [000] d...    61.668507: sched_switch: prev_comm=kworker/0:2H prev_pid=101 prev_prio=100 prev_state=D ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] d...    61.668555: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:1H next_pid=85 next_prio=100
    kworker/0:1H-85    [000] ....    61.668563: worker_thread: [+] comm: kworker/0:1H, pid: 85, global_func_exe_times: 24385 from (kthread+0x140/0x170) 
    kworker/0:1H-85    [000] ....    61.668566: trace_function_dummy_call: [++] comm:kworker/0:1H, pid:85, from(worker_thread+0x18c/0x60c) 
    kworker/0:1H-85    [000] d...    61.668570: worker_thread: [-] comm: kworker/0:1H, pid: 85, global_func_exe_times: 24386 from (kthread+0x140/0x170) 
    kworker/0:1H-85    [000] d...    61.668580: sched_switch: prev_comm=kworker/0:1H prev_pid=85 prev_prio=100 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] d...    61.669189: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:1H next_pid=85 next_prio=100
    kworker/0:1H-85    [000] ....    61.669196: worker_thread: [+] comm: kworker/0:1H, pid: 85, global_func_exe_times: 24386 from (kthread+0x140/0x170) 
    kworker/0:1H-85    [000] ....    61.669199: trace_function_dummy_call: [++] comm:kworker/0:1H, pid:85, from(worker_thread+0x18c/0x60c) 
    kworker/0:1H-85    [000] d...    61.669204: worker_thread: [-] comm: kworker/0:1H, pid: 85, global_func_exe_times: 24387 from (kthread+0x140/0x170) 
    kworker/0:1H-85    [000] d...    61.669212: sched_switch: prev_comm=kworker/0:1H prev_pid=85 prev_prio=100 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] d...    61.669276: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.671024: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    61.671031: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24387 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    61.671034: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    61.671041: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24388 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    61.671049: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=kworker/0:2H next_pid=101 next_prio=100
    kworker/0:2H-101   [000] ....    61.671056: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:0, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.671059: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:b8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.671062: mutex_unlock <-mmc_blk_mq_complete_prev_req.part.0
    kworker/0:2H-101   [000] ....    61.671091: <stack trace>
 => mutex_unlock
 => mmc_blk_mq_complete_prev_req.part.0
 => mmc_blk_rw_wait
 => mmc_blk_mq_issue_rq
 => mmc_mq_queue_rq
 => blk_mq_dispatch_rq_list
 => blk_mq_do_dispatch_sched
 => blk_mq_sched_dispatch_requests
 => __blk_mq_run_hw_queue
 => blk_mq_run_work_fn
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/0:2H-101   [000] ....    61.671095: mutex_unlock: [-] mutex_unlock[ee76c60f] start.. owner:0xb8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.671099: mutex_unlock: [-] mutex_unlock[ee76c60f] end.. owner:0x0, current_process:b8260000
    kworker/0:2H-101   [000] d...    61.671174: sched_switch: prev_comm=kworker/0:2H prev_pid=101 prev_prio=100 prev_state=D ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    61.671181: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24388 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    61.671184: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    61.671191: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24389 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    61.671208: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.671561: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2H next_pid=101 next_prio=100
    kworker/0:2H-101   [000] ....    61.671568: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:0, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.671572: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:b8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.671575: mutex_unlock <-mmc_blk_mq_complete_prev_req.part.0
    kworker/0:2H-101   [000] ....    61.671601: <stack trace>
 => mutex_unlock
 => mmc_blk_mq_complete_prev_req.part.0
 => mmc_blk_rw_wait
 => mmc_blk_mq_issue_rq
 => mmc_mq_queue_rq
 => blk_mq_dispatch_rq_list
 => blk_mq_do_dispatch_sched
 => blk_mq_sched_dispatch_requests
 => __blk_mq_run_hw_queue
 => blk_mq_run_work_fn
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/0:2H-101   [000] ....    61.671605: mutex_unlock: [-] mutex_unlock[ee76c60f] start.. owner:0xb8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.671608: mutex_unlock: [-] mutex_unlock[ee76c60f] end.. owner:0x0, current_process:b8260000
    kworker/0:2H-101   [000] d...    61.671706: worker_thread: [-] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24389 from (kthread+0x140/0x170) 
    kworker/0:2H-101   [000] d...    61.671715: sched_switch: prev_comm=kworker/0:2H prev_pid=101 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    61.671721: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24389 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    61.671724: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    61.671730: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24390 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    61.671745: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.677247: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2H next_pid=101 next_prio=100
    kworker/0:2H-101   [000] ....    61.677253: worker_thread: [+] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24390 from (kthread+0x140/0x170) 
    kworker/0:2H-101   [000] ....    61.677257: trace_function_dummy_call: [++] comm:kworker/0:2H, pid:101, from(worker_thread+0x18c/0x60c) 
    kworker/0:2H-101   [000] ....    61.677262: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:0, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.677266: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:b8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.677337: mutex_unlock <-mmc_blk_mq_complete_prev_req.part.0
    kworker/0:2H-101   [000] ....    61.677356: <stack trace>
 => mutex_unlock
 => mmc_blk_mq_complete_prev_req.part.0
 => mmc_blk_mq_complete_work
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/0:2H-101   [000] ....    61.677360: mutex_unlock: [-] mutex_unlock[ee76c60f] start.. owner:0xb8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    61.677364: mutex_unlock: [-] mutex_unlock[ee76c60f] end.. owner:0x0, current_process:b8260000
    kworker/0:2H-101   [000] d...    61.677368: worker_thread: [-] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24391 from (kthread+0x140/0x170) 
    kworker/0:2H-101   [000] d...    61.677377: sched_switch: prev_comm=kworker/0:2H prev_pid=101 prev_prio=100 prev_state=I ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    61.677383: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24391 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    61.677386: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    61.677392: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24392 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    61.677400: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] ....    61.678066: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.678071: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
          <idle>-0     [003] d...    61.678081: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
              ls-1278  [000] ....    61.678084: mutex_unlock <-n_tty_write
 brcmf_wdog/mmc1-266   [003] d...    61.678105: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.678112: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24392 from (kthread+0x140/0x170) 
              ls-1278  [000] ....    61.678112: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10788
    kworker/u8:2-130   [003] ....    61.678115: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
              ls-1278  [000] ....    61.678116: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678120: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
    kworker/u8:2-130   [003] ....    61.678121: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
              ls-1278  [000] ....    61.678123: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
    kworker/u8:2-130   [003] ....    61.678125: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
              ls-1278  [000] ....    61.678127: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678135: mutex_unlock <-n_tty_write
              ls-1278  [000] ....    61.678152: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10788
    kworker/u8:2-130   [003] d...    61.678153: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
              ls-1278  [000] ....    61.678156: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678160: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
    kworker/u8:0-7     [003] ....    61.678160: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24393 from (kthread+0x140/0x170) 
              ls-1278  [000] ....    61.678163: mutex_unlock <-tty_write_unlock
    kworker/u8:0-7     [003] ....    61.678163: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] d...    61.678168: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24394 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    61.678177: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
              ls-1278  [000] ....    61.678180: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10788
              ls-1278  [000] ....    61.678184: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678187: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
            sshd-1224  [003] ....    61.678235: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.678257: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.678261: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.678265: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.678362: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.678369: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24394 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.678372: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] d...    61.678381: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.678388: mutex_unlock <-flush_to_ldisc
    kworker/u8:2-130   [003] ....    61.678407: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.678411: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.678415: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.678421: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.678424: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.678426: mutex_unlock <-flush_to_ldisc
    kworker/u8:2-130   [003] ....    61.678441: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.678447: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.678455: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.678478: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24395 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.678489: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    61.678513: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.678532: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.678536: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.678540: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] ....    61.678632: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.678636: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678646: mutex_unlock <-n_tty_write
              ls-1278  [000] ....    61.678666: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] ....    61.678670: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678673: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] ....    61.678677: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.678680: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678684: mutex_unlock <-n_tty_write
              ls-1278  [000] ....    61.678701: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
            sshd-1224  [003] d...    61.678702: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
              ls-1278  [000] ....    61.678704: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678708: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
    kworker/u8:2-130   [003] ....    61.678709: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24395 from (kthread+0x140/0x170) 
              ls-1278  [000] ....    61.678711: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.678712: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.678727: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
              ls-1278  [000] ....    61.678728: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] ....    61.678731: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
    kworker/u8:0-7     [003] ....    61.678733: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24396 from (kthread+0x140/0x170) 
              ls-1278  [000] ....    61.678735: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
    kworker/u8:0-7     [003] ....    61.678736: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:0-7     [003] ....    61.678742: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.678745: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.678751: mutex_unlock <-flush_to_ldisc
    kworker/u8:0-7     [003] ....    61.678768: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.678773: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.678776: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9e85a00
              ls-1278  [000] ....    61.678781: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.678785: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
    kworker/u8:0-7     [003] d...    61.678790: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24397 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    61.678799: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
              ls-1278  [000] ....    61.678805: mutex_unlock <-n_tty_write
            sshd-1224  [003] d...    61.678818: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:0-7     [003] ....    61.678824: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24397 from (kthread+0x140/0x170) 
              ls-1278  [000] ....    61.678824: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
    kworker/u8:0-7     [003] ....    61.678827: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
              ls-1278  [000] ....    61.678828: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.678831: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
    kworker/u8:0-7     [003] ....    61.678832: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9e85a00
              ls-1278  [000] ....    61.678835: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
    kworker/u8:0-7     [003] ....    61.678835: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9e85a00, current_process:b9e85a00
              ls-1278  [000] ....    61.678838: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
    kworker/u8:0-7     [003] ....    61.678839: mutex_unlock <-flush_to_ldisc
              ls-1278  [000] .n..    61.678853: mutex_unlock <-n_tty_write
    kworker/u8:0-7     [003] ....    61.678856: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.678860: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.678863: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.678867: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9e85a00
              ls-1278  [000] .n..    61.678870: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
    kworker/u8:0-7     [003] ....    61.678871: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9e85a00, current_process:b9e85a00
              ls-1278  [000] .n..    61.678875: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
    kworker/u8:0-7     [003] ....    61.678875: mutex_unlock <-flush_to_ldisc
              ls-1278  [000] .n..    61.678878: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.678881: mutex_unlock <-tty_write_unlock
    kworker/u8:0-7     [003] ....    61.678890: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.678894: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9e85a00, current_process:b9e85a00
    kworker/u8:0-7     [003] ....    61.678897: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9e85a00
              ls-1278  [000] .n..    61.678897: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.678901: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
    kworker/u8:0-7     [003] d...    61.678901: worker_thread: [-] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24398 from (kthread+0x140/0x170) 
              ls-1278  [000] .n..    61.678904: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
    kworker/u8:0-7     [003] d...    61.678909: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
              ls-1278  [000] d...    61.678916: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.678924: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24398 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.678928: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
            sshd-1224  [003] ....    61.678932: mutex_unlock <-n_tty_read
    kworker/u8:1-45    [000] d...    61.678938: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
            sshd-1224  [003] ....    61.678950: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.678955: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.678958: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] ....    61.678984: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.678988: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679002: mutex_unlock <-n_tty_write
              ls-1278  [000] .n..    61.679021: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679025: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            sshd-1224  [003] d...    61.679027: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
              ls-1278  [000] .n..    61.679028: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679031: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] d...    61.679039: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.679045: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24399 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.679048: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.679053: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679057: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679062: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.679078: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] d...    61.679110: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-45    [000] ....    61.679122: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679126: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.679135: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24400 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] d...    61.679144: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] ....    61.679150: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
          <idle>-0     [003] d...    61.679151: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1224 next_prio=120
              ls-1278  [000] .n..    61.679160: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.679175: mutex_unlock <-n_tty_read
              ls-1278  [000] .n..    61.679179: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679182: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679186: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679189: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.679195: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.679200: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.679203: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] .n..    61.679206: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679210: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679213: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] d...    61.679222: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.679227: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24400 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.679231: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.679235: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679239: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679243: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.679258: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    61.679262: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679265: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
            sshd-1224  [003] ....    61.679266: mutex_unlock <-n_tty_read
    kworker/u8:1-45    [000] d...    61.679270: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24401 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] d...    61.679278: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
            sshd-1224  [003] ....    61.679285: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.679289: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.679293: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] ....    61.679322: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.679326: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679340: mutex_unlock <-n_tty_write
              ls-1278  [000] .n..    61.679359: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679363: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679366: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679370: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
            sshd-1224  [003] d...    61.679374: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
              ls-1278  [000] d...    61.679377: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.679383: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24401 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.679386: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.679391: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679394: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679400: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.679416: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    61.679420: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679423: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.679432: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24402 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] d...    61.679443: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] ....    61.679448: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679460: mutex_unlock <-n_tty_write
    kworker/u8:2-130   [003] d...    61.679465: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=R+ ==> next_comm=ksoftirqd/3 next_pid=26 next_prio=120
              ls-1278  [000] .n..    61.679478: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
     ksoftirqd/3-26    [003] d...    61.679483: sched_switch: prev_comm=ksoftirqd/3 prev_pid=26 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=1224 next_prio=120
              ls-1278  [000] .n..    61.679484: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679487: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679490: mutex_unlock <-tty_write_unlock
              ls-1278  [000] .n..    61.679507: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
            sshd-1224  [003] ....    61.679508: mutex_unlock <-n_tty_read
              ls-1278  [000] .n..    61.679511: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679514: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] d...    61.679523: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
            sshd-1224  [003] ....    61.679527: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
    kworker/u8:1-45    [000] ....    61.679528: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24402 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.679531: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
            sshd-1224  [003] ....    61.679532: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.679536: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
    kworker/u8:1-45    [000] ....    61.679536: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679539: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679544: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.679559: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    61.679563: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679566: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.679571: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24403 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] d...    61.679578: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
            sshd-1224  [003] ....    61.679590: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.679609: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.679614: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.679617: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] ....    61.679622: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.679625: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679640: mutex_unlock <-n_tty_write
              ls-1278  [000] .n..    61.679659: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679663: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679666: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679669: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
            sshd-1224  [003] d...    61.679673: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
              ls-1278  [000] d...    61.679676: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.679682: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24403 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.679685: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.679690: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679694: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679699: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.679715: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] d...    61.679726: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-45    [000] ....    61.679740: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679743: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.679752: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24404 from (kthread+0x140/0x170) 
          <idle>-0     [003] d...    61.679767: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1224 next_prio=120
    kworker/u8:1-45    [000] d...    61.679775: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] ....    61.679780: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679791: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.679796: mutex_unlock <-n_tty_read
              ls-1278  [000] .n..    61.679809: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679813: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679816: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
            sshd-1224  [003] ....    61.679816: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
              ls-1278  [000] .n..    61.679819: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.679821: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.679825: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] .n..    61.679836: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679840: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679843: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] d...    61.679852: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.679857: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24404 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.679860: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.679865: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679868: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.679873: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] d...    61.679886: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:1-45    [000] ....    61.679888: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    61.679892: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:0-7     [003] ....    61.679892: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24405 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.679895: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:0-7     [003] ....    61.679896: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] d...    61.679902: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24406 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    61.679905: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
    kworker/u8:1-45    [000] d...    61.679909: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
            sshd-1224  [003] ....    61.679925: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.679945: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.679949: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.679953: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] ....    61.679953: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.679957: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679971: mutex_unlock <-n_tty_write
              ls-1278  [000] .n..    61.679990: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.679994: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.679997: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680001: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
            sshd-1224  [003] d...    61.680004: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
              ls-1278  [000] d...    61.680008: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.680014: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24406 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680017: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680022: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680025: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680030: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.680046: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    61.680049: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680052: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.680061: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24407 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] d...    61.680070: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
    kworker/u8:2-130   [003] d...    61.680073: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=R+ ==> next_comm=ksoftirqd/3 next_pid=26 next_prio=120
              ls-1278  [000] ....    61.680075: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680085: mutex_unlock <-n_tty_write
     ksoftirqd/3-26    [003] d...    61.680087: sched_switch: prev_comm=ksoftirqd/3 prev_pid=26 prev_prio=120 prev_state=S ==> next_comm=sshd next_pid=1224 next_prio=120
              ls-1278  [000] .n..    61.680103: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.680107: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680110: mutex_unlock <-n_tty_read
              ls-1278  [000] .n..    61.680110: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680113: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.680130: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
              ls-1278  [000] .n..    61.680130: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.680134: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680134: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
              ls-1278  [000] .n..    61.680137: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680138: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] d...    61.680146: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.680151: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24407 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680155: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680159: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680162: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680166: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.680182: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    61.680185: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680189: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.680193: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24408 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] d...    61.680201: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
            sshd-1224  [003] ....    61.680202: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.680221: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.680225: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.680229: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] ....    61.680241: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.680245: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680259: mutex_unlock <-n_tty_write
              ls-1278  [000] .n..    61.680277: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
            sshd-1224  [003] d...    61.680277: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
              ls-1278  [000] .n..    61.680281: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680284: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680288: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] d...    61.680294: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.680300: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24408 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680303: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.680325: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
    kworker/u8:1-45    [000] ....    61.680326: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680329: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680336: mutex_unlock <-flush_to_ldisc
    kworker/u8:1-45    [000] ....    61.680352: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    61.680369: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680372: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.680381: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24409 from (kthread+0x140/0x170) 
          <idle>-0     [003] d...    61.680388: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1224 next_prio=120
    kworker/u8:1-45    [000] d...    61.680390: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] ....    61.680395: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680407: mutex_unlock <-n_tty_write
            sshd-1224  [003] ....    61.680410: mutex_unlock <-n_tty_read
              ls-1278  [000] .n..    61.680425: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.680429: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680430: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
              ls-1278  [000] .n..    61.680432: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680435: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
              ls-1278  [000] .n..    61.680435: mutex_unlock <-tty_write_unlock
            sshd-1224  [003] ....    61.680438: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] .n..    61.680452: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.680457: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680460: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] d...    61.680470: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.680475: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24409 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680479: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680483: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680487: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680491: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] d...    61.680500: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:1-45    [000] ....    61.680506: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.680507: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24410 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680510: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:0-7     [003] ....    61.680511: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680513: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.680520: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24411 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    61.680520: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
    kworker/u8:1-45    [000] d...    61.680528: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
            sshd-1224  [003] ....    61.680540: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.680560: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.680564: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.680567: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] ....    61.680571: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.680575: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680589: mutex_unlock <-n_tty_write
              ls-1278  [000] .n..    61.680608: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.680612: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680615: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680619: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] d...    61.680626: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.680631: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24411 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680634: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680639: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680642: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680647: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] d...    61.680657: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:1-45    [000] ....    61.680663: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.680664: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24412 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680666: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:0-7     [003] ....    61.680668: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680670: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    61.680676: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24413 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] d...    61.680676: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
    kworker/u8:1-45    [000] d...    61.680684: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
              ls-1278  [000] ....    61.680689: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:9ed2bc00, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680699: mutex_unlock <-n_tty_read
              ls-1278  [000] .n..    61.680699: mutex_unlock <-n_tty_write
              ls-1278  [000] .n..    61.680717: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
            sshd-1224  [003] ....    61.680718: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
              ls-1278  [000] .n..    61.680721: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680723: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
              ls-1278  [000] .n..    61.680724: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:9ed2bc00
            sshd-1224  [003] ....    61.680726: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
              ls-1278  [000] .n..    61.680727: mutex_unlock <-tty_write_unlock
              ls-1278  [000] .n..    61.680744: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee10758
              ls-1278  [000] .n..    61.680748: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] .n..    61.680751: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] d...    61.680760: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.680765: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24413 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.680768: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680773: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680776: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680780: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] d...    61.680789: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:0 next_pid=7 next_prio=120
    kworker/u8:1-45    [000] ....    61.680796: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:0-7     [003] ....    61.680796: worker_thread: [+] comm: kworker/u8:0, pid: 7, global_func_exe_times: 24414 from (kthread+0x140/0x170) 
    kworker/u8:0-7     [003] ....    61.680799: trace_function_dummy_call: [++] comm:kworker/u8:0, pid:7, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] ....    61.680800: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    61.680803: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b9746900
    kworker/u8:0-7     [003] d...    61.680808: sched_switch: prev_comm=kworker/u8:0 prev_pid=7 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
    kworker/u8:1-45    [000] d...    61.680809: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24415 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] d...    61.680817: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=ls next_pid=1278 next_prio=120
            sshd-1224  [003] ....    61.680828: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.680847: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.680851: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.680855: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.680936: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.680970: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=R+ ==> next_comm=ksoftirqd/3 next_pid=26 next_prio=120
     ksoftirqd/3-26    [003] d...    61.680985: sched_switch: prev_comm=ksoftirqd/3 prev_pid=26 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.681030: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
              ls-1278  [000] ....    61.681059: do_exit: [+] comm: ls, pid: 1278, global_func_exe_times: 949
              ls-1278  [000] ....    61.681063: trace_function_dummy_call: [++] comm:ls, pid:1278, from(do_exit+0x80/0xc44) 
              ls-1278  [000] ....    61.681069: do_exit: [-] comm: ls, pid: 1278, global_func_exe_times: 950
          <idle>-0     [003] d...    61.681074: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.681099: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24415 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.681107: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
              ls-1278  [000] ....    61.681743: mutex_lock: [+][fastpath] mutex_lock[7e3fd516] start.. owner:0, current_process:9ed2bc00
              ls-1278  [000] ....    61.681747: mutex_lock: [+][fastpath] mutex_lock[7e3fd516] start.. owner:9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.681749: mutex_unlock <-perf_event_exit_task
              ls-1278  [000] ....    61.681769: <stack trace>
 => mutex_unlock
 => perf_event_exit_task
 => do_exit
 => do_group_exit
 => __wake_up_parent
 => ret_fast_syscall
 => 0x7ee10b88
              ls-1278  [000] ....    61.681773: mutex_unlock: [-] mutex_unlock[7e3fd516] start.. owner:0x9ed2bc00, current_process:9ed2bc00
              ls-1278  [000] ....    61.681777: mutex_unlock: [-] mutex_unlock[7e3fd516] end.. owner:0x0, current_process:9ed2bc00
              ls-1278  [000] d...    61.681836: sched_switch: prev_comm=ls prev_pid=1278 prev_prio=120 prev_state=Z ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.681849: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
            bash-1248  [002] ....    61.681963: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.681967: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.681970: mutex_unlock <-tty_ioctl
            bash-1248  [002] ....    61.681989: <stack trace>
 => mutex_unlock
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b996c
            bash-1248  [002] ....    61.681994: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.681997: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.682312: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.682317: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.682319: mutex_unlock <-tty_ioctl
            bash-1248  [002] ....    61.682337: <stack trace>
 => mutex_unlock
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b91ec
            bash-1248  [002] ....    61.682341: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.682344: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.682350: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.682353: mutex_lock: [+][fastpath] mutex_lock[f36ab86d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.682355: mutex_unlock <-tty_do_resize
            bash-1248  [002] ....    61.682372: <stack trace>
 => mutex_unlock
 => tty_do_resize
 => tty_ioctl
 => do_vfs_ioctl
 => ksys_ioctl
 => sys_ioctl
 => ret_fast_syscall
 => 0x7e9b91ec
            bash-1248  [002] ....    61.682376: mutex_unlock: [-] mutex_unlock[f36ab86d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.682380: mutex_unlock: [-] mutex_unlock[f36ab86d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.682485: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    61.682490: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.682503: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    61.682519: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    61.682522: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:2-130   [003] ....    61.682525: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24415 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    61.682526: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.682528: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    61.682530: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    61.682533: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    61.682534: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.682537: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
            bash-1248  [002] ....    61.682551: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:2-130   [003] ....    61.682554: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    61.682554: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    61.682557: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    61.682573: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    61.682577: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    61.682580: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    61.682585: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24416 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.682594: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    61.682610: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    61.682631: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    61.682650: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    61.682654: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    61.682657: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    61.682762: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.687478: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    61.687621: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.687625: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    61.687631: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24416 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.687634: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.687676: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.687705: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.687738: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.687765: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
          <idle>-0     [000] d...    61.687911: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
    kworker/u8:1-45    [000] ....    61.687919: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24417 from (kthread+0x140/0x170) 
    kworker/u8:1-45    [000] ....    61.687922: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
    kworker/u8:1-45    [000] d...    61.687930: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] d...    61.687939: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.687969: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.688008: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.688080: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [003] d...    61.688095: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
       rcu_sched-10    [002] d...    61.688101: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] d...    61.688122: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24418 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.688130: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.690512: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [003] d...    61.690626: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
     irq/86-mmc1-80    [000] d...    61.690626: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    61.690631: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24418 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.690635: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.690668: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.690689: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.690716: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.690736: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.690800: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.690821: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.690833: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24419 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.690840: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.693423: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=674 next_prio=120
         apache2-674   [000] d...    61.693502: sched_switch: prev_comm=apache2 prev_pid=674 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.697950: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [002] d...    61.698058: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.698079: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.698096: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
     irq/86-mmc1-80    [000] d...    61.698097: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    61.698102: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24419 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    61.698105: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    61.698140: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.698168: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.698196: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.698222: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.698281: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.698309: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    61.698322: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24420 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    61.698328: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.718046: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [003] d...    61.718064: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
       rcu_sched-10    [002] d...    61.718064: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.718076: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.724192: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    61.724203: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    61.724206: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.724210: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    61.724227: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    61.724231: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.724235: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    61.724260: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    61.724263: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.724265: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    61.724280: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    61.724283: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.724286: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    61.724294: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    61.724297: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.724299: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    61.724313: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    61.724317: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    61.724320: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    61.724330: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.724970: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    61.724990: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.729401: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.729447: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.729455: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24420 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.729459: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.729465: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.729469: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.729481: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.729501: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.729505: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.729508: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.729513: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24421 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.729536: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.738050: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [003] d...    61.738064: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
       rcu_sched-10    [002] d...    61.738069: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.738088: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.738114: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.738131: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.738155: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.738170: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...    61.738174: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    61.738184: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    61.738190: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.738192: mutex_unlock <-aio_read_events
          <idle>-0     [003] d...    61.738194: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    61.738206: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          mysqld-767   [001] ....    61.738208: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    61.738212: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.738216: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    61.738230: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    61.738234: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.738236: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    61.738250: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    61.738254: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.738257: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    61.738265: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    61.738268: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.738270: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    61.738284: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    61.738303: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    61.738307: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    61.738319: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    61.738326: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    61.738330: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.738332: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    61.738347: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    61.738351: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.738354: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    61.738367: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    61.738371: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.738373: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    61.738387: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    61.738390: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.738394: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    61.738400: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    61.738404: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.738405: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    61.738419: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    61.738423: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    61.738427: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    61.738446: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.756707: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    61.756717: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    61.756721: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.756724: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    61.756741: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    61.756745: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.756748: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    61.756768: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    61.756771: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.756773: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    61.756788: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    61.756792: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.756795: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    61.756802: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    61.756807: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.756809: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    61.756823: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    61.756839: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    61.756842: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    61.756854: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.768047: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.768067: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.788059: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.788086: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.808056: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.808075: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.828058: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.828089: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.829569: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.829600: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.829607: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24421 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.829611: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.829616: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.829620: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.829628: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.829647: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.829651: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.829654: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.829659: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24422 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.829676: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.848055: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.848070: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    61.850853: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=chronyd next_pid=489 next_prio=120
         chronyd-489   [001] d...    61.851147: sched_switch: prev_comm=chronyd prev_pid=489 prev_prio=120 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.851155: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24422 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    61.851159: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] ....    61.851167: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851171: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:b920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851178: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851182: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.851205: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.851208: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.851211: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.851216: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.851237: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.851241: mutex_unlock <-stop_cpus
     migration/0-12    [000] d...    61.851246: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.851247: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/2-20    [002] d...    61.851247: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.851274: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.851279: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851282: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851287: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851290: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.851306: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.851306: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.851311: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.851313: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.851328: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.851332: mutex_unlock <-stop_cpus
     migration/2-20    [002] d...    61.851337: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/0-12    [000] d...    61.851337: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.851337: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.851357: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.851361: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851364: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851368: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851371: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.851386: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.851387: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.851392: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.851394: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.851407: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.851410: mutex_unlock <-stop_cpus
     migration/0-12    [000] d...    61.851414: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.851414: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/2-20    [002] d...    61.851415: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.851435: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.851440: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851443: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851447: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851450: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.851465: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.851466: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.851470: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.851473: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.851485: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.851489: mutex_unlock <-stop_cpus
     migration/0-12    [000] d...    61.851492: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.851492: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/2-20    [002] d...    61.851494: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.851514: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.851518: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851521: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851525: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851528: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.851543: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.851543: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.851548: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.851551: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.851564: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.851568: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    61.851570: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    61.851570: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    61.851571: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.851592: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.851596: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851599: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851601: mutex_unlock <-static_key_enable_cpuslocked
     kworker/1:2-74    [001] ....    61.851619: <stack trace>
 => mutex_unlock
 => static_key_enable_cpuslocked
 => static_key_enable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.851622: mutex_unlock: [-] mutex_unlock[582fdb4b] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.851626: mutex_unlock: [-] mutex_unlock[582fdb4b] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] d...    61.851630: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24423 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    61.851637: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.858068: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.858082: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.878061: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.878080: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    61.888063: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.888070: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24423 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    61.888073: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] ....    61.888079: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888083: mutex_lock: [+][fastpath] mutex_lock[582fdb4b] start.. owner:b920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888087: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888090: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
     kworker/1:2-74    [001] d...    61.888107: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [000] d...    61.888108: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
          <idle>-0     [002] d...    61.888114: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.888115: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.888128: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.888132: mutex_unlock <-stop_cpus
     migration/0-12    [000] d...    61.888138: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    61.888138: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.888139: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.888159: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.888163: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888166: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888171: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888174: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.888189: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.888191: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.888192: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.888197: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.888210: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.888213: mutex_unlock <-stop_cpus
     migration/2-20    [002] d...    61.888216: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.888217: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    61.888218: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.888238: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.888242: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888246: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888250: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888253: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.888268: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.888268: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.888270: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.888276: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.888288: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.888291: mutex_unlock <-stop_cpus
     migration/0-12    [000] d...    61.888294: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     migration/2-20    [002] d...    61.888295: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.888295: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.888317: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.888321: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888324: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888328: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888332: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.888346: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.888347: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.888348: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.888354: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.888366: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.888369: mutex_unlock <-stop_cpus
     migration/2-20    [002] d...    61.888373: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/3-25    [003] d...    61.888373: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/0-12    [000] d...    61.888373: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.888394: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.888398: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888401: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888405: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888410: mutex_lock: [+][fastpath] mutex_lock[0874fa84] start.. owner:b920bc00, current_process:b920bc00
          <idle>-0     [000] d...    61.888424: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0
     kworker/1:2-74    [001] d...    61.888425: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=15 next_prio=0
          <idle>-0     [002] d...    61.888427: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/2 next_pid=20 next_prio=0
          <idle>-0     [003] d...    61.888432: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0
     migration/1-15    [001] d...    61.888446: sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    61.888450: mutex_unlock <-stop_cpus
     migration/3-25    [003] d...    61.888452: sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     migration/2-20    [002] d...    61.888452: sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     migration/0-12    [000] d...    61.888453: sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:2-74    [001] ....    61.888474: <stack trace>
 => mutex_unlock
 => stop_cpus
 => stop_machine_cpuslocked
 => patch_text
 => arch_jump_label_transform
 => __jump_label_update
 => jump_label_update
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.888479: mutex_unlock: [-] mutex_unlock[0874fa84] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888482: mutex_unlock: [-] mutex_unlock[0874fa84] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888484: mutex_unlock <-static_key_disable_cpuslocked
     kworker/1:2-74    [001] ....    61.888501: <stack trace>
 => mutex_unlock
 => static_key_disable_cpuslocked
 => static_key_disable
 => netstamp_clear
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/1:2-74    [001] ....    61.888505: mutex_unlock: [-] mutex_unlock[582fdb4b] start.. owner:0xb920bc00, current_process:b920bc00
     kworker/1:2-74    [001] ....    61.888508: mutex_unlock: [-] mutex_unlock[582fdb4b] end.. owner:0x0, current_process:b920bc00
     kworker/1:2-74    [001] d...    61.888513: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24424 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    61.888520: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.898056: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    61.898071: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.924452: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=762 next_prio=120
          mysqld-762   [003] ....    61.924460: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    61.924464: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    61.924466: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    61.924483: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    61.924487: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    61.924490: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    61.924506: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    61.924509: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    61.924511: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    61.924526: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    61.924530: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    61.924533: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    61.924540: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    61.924543: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    61.924545: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    61.924559: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    61.924580: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    61.924584: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] d...    61.924594: sched_switch: prev_comm=mysqld prev_pid=762 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=763 next_prio=120
          mysqld-763   [003] ....    61.924601: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    61.924605: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.924607: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    61.924622: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    61.924626: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.924629: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    61.924644: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    61.924647: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.924649: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    61.924663: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    61.924667: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.924670: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    61.924676: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    61.924680: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.924682: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    61.924695: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    61.924699: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    61.924702: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] d...    61.924735: sched_switch: prev_comm=mysqld prev_pid=763 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    61.924755: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=764 next_prio=120
          mysqld-764   [003] ....    61.924764: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    61.924767: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.924770: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    61.924785: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    61.924789: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.924792: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    61.924805: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    61.924809: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.924811: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    61.924824: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    61.924828: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.924831: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    61.924838: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    61.924841: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.924843: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    61.924857: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    61.924875: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    61.924878: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] d...    61.924890: sched_switch: prev_comm=mysqld prev_pid=764 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=758 next_prio=120
          mysqld-758   [003] ....    61.924897: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    61.924900: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.924903: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    61.924918: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    61.924921: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.924925: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    61.924938: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    61.924942: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.924943: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    61.924958: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    61.924961: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.924965: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    61.924971: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    61.924974: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.924976: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    61.924990: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    61.924994: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    61.924997: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] d...    61.925013: sched_switch: prev_comm=mysqld prev_pid=758 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.929724: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    61.929754: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    61.929761: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24424 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    61.929764: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    61.929769: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.929773: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.929783: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    61.929800: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    61.929804: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    61.929808: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    61.929812: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24425 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    61.929839: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    61.939642: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] ....    61.939651: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    61.939655: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    61.939658: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    61.939674: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    61.939678: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    61.939682: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    61.939697: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    61.939701: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    61.939703: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    61.939718: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    61.939721: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    61.939725: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    61.939731: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    61.939735: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    61.939737: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    61.939751: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    61.939772: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    61.939776: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] d...    61.939786: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=761 next_prio=120
          mysqld-761   [000] ....    61.939794: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    61.939797: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.939800: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    61.939815: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    61.939819: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.939822: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    61.939836: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    61.939840: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.939841: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    61.939856: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    61.939859: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.939863: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    61.939869: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    61.939873: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.939875: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    61.939888: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    61.939892: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    61.939895: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] d...    61.939928: sched_switch: prev_comm=mysqld prev_pid=761 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.964979: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    61.964999: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    61.969314: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    61.969323: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    61.969327: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.969333: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    61.969350: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    61.969354: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.969357: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    61.969531: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    61.969535: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.969539: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    61.969555: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    61.969559: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    61.969562: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    61.969574: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.029879: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.029908: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.029915: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24425 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.029918: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.029923: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.029926: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.029934: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.029951: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.029955: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.029958: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.029963: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24426 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.029995: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.036101: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    62.036242: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.036247: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.036255: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24426 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.036259: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.036283: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.036309: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.036320: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.039339: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.039354: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.039380: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.039417: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.039444: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.039475: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.039501: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.039607: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    62.039763: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    62.039769: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.039779: mutex_unlock <-n_tty_write
          <idle>-0     [000] d...    62.039797: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
            sshd-1224  [003] ....    62.039803: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
    kworker/u8:1-45    [000] ....    62.039805: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24427 from (kthread+0x140/0x170) 
            sshd-1224  [003] ....    62.039807: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
    kworker/u8:1-45    [000] ....    62.039809: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
            sshd-1224  [003] ....    62.039810: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    62.039814: mutex_unlock <-tty_write_unlock
    kworker/u8:1-45    [000] ....    62.039815: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.039819: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.039831: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] ....    62.039832: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    62.039836: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.039839: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
          <idle>-0     [002] d...    62.039850: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:1-45    [000] ....    62.039850: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    62.039855: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.039858: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    62.039863: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24428 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.039878: mutex_unlock <-n_tty_read
            sshd-1224  [003] d...    62.039880: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:1-45    [000] d...    62.039891: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] d...    62.039896: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24428 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.039898: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
            bash-1248  [002] ....    62.039903: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] d...    62.039903: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    62.039906: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    62.039964: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    62.039968: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.039976: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    62.039991: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.039995: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    62.039997: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24428 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.039999: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.040000: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    62.040002: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    62.040005: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    62.040005: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.040009: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.040022: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    62.040022: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    62.040026: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.040029: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.040039: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    62.040043: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.040046: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    62.040051: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24429 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.040062: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    62.040069: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    62.040089: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    62.040108: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    62.040112: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.040115: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    62.040287: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.040294: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24429 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.040298: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.040350: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.040381: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.040397: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24430 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.040405: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.048411: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    62.048530: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.048536: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.048542: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24430 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.048545: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.048579: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.048607: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.048635: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.048661: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.048738: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.048765: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.048778: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24431 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.048785: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.068068: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.068080: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.080863: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [003] d...    62.080984: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.080990: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24431 from (kthread+0x140/0x170) 
     irq/86-mmc1-80    [000] d...    62.080990: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    62.080993: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.081028: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.081050: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.081077: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.081098: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.081168: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    62.081268: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    62.081273: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.081280: mutex_unlock <-n_tty_write
          <idle>-0     [000] d...    62.081296: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
            sshd-1224  [003] ....    62.081301: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
    kworker/u8:1-45    [000] ....    62.081304: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24432 from (kthread+0x140/0x170) 
            sshd-1224  [003] ....    62.081305: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
    kworker/u8:1-45    [000] ....    62.081308: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
            sshd-1224  [003] ....    62.081308: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    62.081311: mutex_unlock <-tty_write_unlock
    kworker/u8:1-45    [000] ....    62.081313: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.081316: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.081325: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] ....    62.081329: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    62.081332: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.081336: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
          <idle>-0     [002] d...    62.081341: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:1-45    [000] ....    62.081343: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    62.081347: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.081350: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    62.081357: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24433 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.081357: mutex_unlock <-n_tty_read
            sshd-1224  [003] d...    62.081370: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.081377: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:1-45    [000] d...    62.081381: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-1248  [002] ....    62.081381: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] d...    62.081385: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24433 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.081385: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    62.081392: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    62.081416: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    62.081420: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.081427: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    62.081442: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.081446: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    62.081448: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24433 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.081450: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.081451: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    62.081454: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.081456: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
            bash-1248  [002] ....    62.081456: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    62.081460: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.081472: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    62.081474: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    62.081477: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.081480: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.081490: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    62.081494: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.081497: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    62.081502: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24434 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.081510: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    62.081515: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    62.081536: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    62.081554: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    62.081558: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.081562: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    62.081690: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.081697: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24434 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.081700: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.081748: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.081779: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.081794: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24435 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.081801: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.090752: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [002] d...    62.090800: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    62.090818: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
     irq/86-mmc1-80    [000] d...    62.090876: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.090882: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.090887: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24435 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.090890: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.090925: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.090952: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.090979: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.091005: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.091069: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.091097: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.091110: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24436 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.091117: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.108069: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.108079: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.128061: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.128100: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.128126: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.128144: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.128169: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.128185: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.128209: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.128220: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.130032: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.130069: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.130076: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24436 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.130080: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.130085: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.130089: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.130099: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.130116: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.130120: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.130123: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.130128: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24437 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.130146: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.150164: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=985 next_prio=120
         lxpanel-985   [000] ....    62.150248: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    62.150252: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.150257: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    62.150280: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5a0
         lxpanel-985   [000] ....    62.150284: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.150287: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] ....    62.150300: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    62.150304: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.150306: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    62.150324: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5c0
         lxpanel-985   [000] ....    62.150328: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.150331: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] d...    62.150369: sched_switch: prev_comm=lxpanel prev_pid=985 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...    62.158068: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    62.158077: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24437 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    62.158081: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...    62.158129: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=D ==> next_comm=kworker/1:1 next_pid=32 next_prio=120
     kworker/1:1-32    [001] ....    62.158136: worker_thread: [+] comm: kworker/1:1, pid: 32, global_func_exe_times: 24438 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] ....    62.158139: trace_function_dummy_call: [++] comm:kworker/1:1, pid:32, from(worker_thread+0x18c/0x60c) 
     kworker/1:1-32    [001] d...    62.158149: worker_thread: [-] comm: kworker/1:1, pid: 32, global_func_exe_times: 24439 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] d...    62.158157: sched_switch: prev_comm=kworker/1:1 prev_pid=32 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/1 next_pid=16 next_prio=120
     ksoftirqd/1-16    [001] d...    62.158186: sched_switch: prev_comm=ksoftirqd/1 prev_pid=16 prev_prio=120 prev_state=S ==> next_comm=kworker/1:1 next_pid=32 next_prio=120
     kworker/1:1-32    [001] ....    62.158193: worker_thread: [+] comm: kworker/1:1, pid: 32, global_func_exe_times: 24439 from (kthread+0x140/0x170) 
     kworker/1:1-32    [001] ....    62.158196: trace_function_dummy_call: [++] comm:kworker/1:1, pid:32, from(worker_thread+0x18c/0x60c) 
     kworker/1:1-32    [001] d...    62.158203: sched_switch: prev_comm=kworker/1:1 prev_pid=32 prev_prio=120 prev_state=I ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] d...    62.158222: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24440 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    62.158251: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.209460: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=807 next_prio=120
          mysqld-807   [000] d...    62.209512: sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [001] d...    62.214008: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=797 next_prio=120
          mysqld-797   [001] d...    62.214093: sched_switch: prev_comm=mysqld prev_pid=797 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=769 next_prio=120
          mysqld-769   [001] d...    62.214162: sched_switch: prev_comm=mysqld prev_pid=769 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [001] d...    62.222751: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=794 next_prio=120
          mysqld-794   [001] d...    62.222793: sched_switch: prev_comm=mysqld prev_pid=794 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.224371: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    62.224381: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    62.224385: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.224388: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    62.224406: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    62.224410: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.224413: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    62.224434: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    62.224437: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.224439: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    62.224454: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    62.224458: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.224461: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    62.224469: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    62.224472: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.224474: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    62.224488: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    62.224492: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.224495: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    62.224505: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.225774: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=791 next_prio=120
          mysqld-791   [000] d...    62.225879: sched_switch: prev_comm=mysqld prev_pid=791 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.225888: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=792 next_prio=120
          mysqld-792   [002] d...    62.225928: sched_switch: prev_comm=mysqld prev_pid=792 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.227381: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=790 next_prio=120
          mysqld-790   [002] d...    62.227413: sched_switch: prev_comm=mysqld prev_pid=790 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.230192: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.230227: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.230233: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24440 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.230237: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.230242: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.230245: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.230255: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.230274: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.230278: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.230281: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.230285: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24441 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.230317: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    62.238347: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    62.238356: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    62.238359: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.238362: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    62.238379: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    62.238383: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.238386: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    62.238401: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    62.238404: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.238406: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    62.238421: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    62.238425: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.238428: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    62.238434: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    62.238439: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.238440: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    62.238455: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    62.238474: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.238478: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    62.238487: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    62.238495: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    62.238498: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.238501: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    62.238516: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    62.238520: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.238523: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    62.238537: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    62.238540: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.238542: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    62.238556: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    62.238560: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.238564: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    62.238570: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    62.238574: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.238576: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    62.238590: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    62.238593: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.238597: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    62.238628: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.256881: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    62.256890: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    62.256894: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.256897: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    62.256914: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    62.256918: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.256921: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    62.256936: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    62.256940: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.256942: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    62.256956: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    62.256960: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.256963: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    62.256970: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    62.256974: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.256976: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    62.256989: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    62.256993: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.256996: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    62.257006: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.301102: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    62.301138: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.330354: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.330381: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.330387: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24441 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.330390: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.330397: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.330401: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.330409: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.330426: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.330430: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.330433: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.330438: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24442 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.330464: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.372588: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
          <idle>-0     [003] d...    62.372723: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.372731: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24442 from (kthread+0x140/0x170) 
     irq/86-mmc1-80    [000] d...    62.372733: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] ....    62.372734: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.372758: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.372785: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.372797: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.375811: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.375826: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.375851: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.375889: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.375915: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.375945: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.375971: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.376069: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    62.376215: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    62.376219: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.376228: mutex_unlock <-n_tty_write
          <idle>-0     [000] d...    62.376245: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
            sshd-1224  [003] ....    62.376250: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
    kworker/u8:1-45    [000] ....    62.376253: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24443 from (kthread+0x140/0x170) 
            sshd-1224  [003] ....    62.376254: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
    kworker/u8:1-45    [000] ....    62.376256: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
            sshd-1224  [003] ....    62.376258: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    62.376262: mutex_unlock <-tty_write_unlock
    kworker/u8:1-45    [000] ....    62.376263: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.376266: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.376278: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] ....    62.376279: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    62.376283: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.376286: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
          <idle>-0     [002] d...    62.376295: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:1-45    [000] ....    62.376297: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    62.376301: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.376305: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    62.376310: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24444 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.376320: mutex_unlock <-n_tty_read
            sshd-1224  [003] d...    62.376326: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:1-45    [000] d...    62.376336: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            bash-1248  [002] ....    62.376340: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:2-130   [003] d...    62.376342: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24444 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.376344: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.376348: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    62.376349: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    62.376397: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    62.376400: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.376408: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    62.376423: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.376427: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    62.376429: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24444 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.376431: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.376433: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    62.376434: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    62.376437: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    62.376438: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.376441: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.376454: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    62.376455: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    62.376458: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.376461: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.376471: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    62.376475: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.376479: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    62.376484: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24445 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.376494: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    62.376498: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    62.376521: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    62.376539: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    62.376543: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.376546: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    62.376709: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.376716: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24445 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.376720: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.376771: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.376802: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.376818: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24446 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.376826: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.385665: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    62.385784: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.385789: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.385794: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24446 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.385797: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.385833: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.385860: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.385889: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.385915: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.385986: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.386014: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.386027: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24447 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.386034: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.398082: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.398094: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.398100: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24447 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.398103: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.398137: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24448 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.398161: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.418067: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.418088: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.418112: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.418128: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.418150: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.418166: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.418187: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.418199: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.424616: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=762 next_prio=120
          mysqld-762   [003] ....    62.424625: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    62.424629: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    62.424632: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    62.424649: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    62.424653: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    62.424656: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    62.424674: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    62.424678: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    62.424680: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    62.424695: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    62.424699: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    62.424702: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] ....    62.424709: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:0, current_process:ae520000
          mysqld-762   [003] ....    62.424712: mutex_lock: [+][fastpath] mutex_lock[0dfbb106] start.. owner:ae520000, current_process:ae520000
          mysqld-762   [003] ....    62.424714: mutex_unlock <-aio_read_events
          mysqld-762   [003] ....    62.424728: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5804f900
          mysqld-762   [003] ....    62.424749: mutex_unlock: [-] mutex_unlock[0dfbb106] start.. owner:0xae520000, current_process:ae520000
          mysqld-762   [003] ....    62.424752: mutex_unlock: [-] mutex_unlock[0dfbb106] end.. owner:0x0, current_process:ae520000
          mysqld-762   [003] d...    62.424762: sched_switch: prev_comm=mysqld prev_pid=762 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=763 next_prio=120
          mysqld-763   [003] ....    62.424769: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    62.424773: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    62.424776: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    62.424791: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    62.424795: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    62.424798: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    62.424812: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    62.424815: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    62.424817: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    62.424831: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    62.424835: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    62.424838: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] ....    62.424845: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:0, current_process:ae520f00
          mysqld-763   [003] ....    62.424848: mutex_lock: [+][fastpath] mutex_lock[a4ac83bf] start.. owner:ae520f00, current_process:ae520f00
          mysqld-763   [003] ....    62.424850: mutex_unlock <-aio_read_events
          mysqld-763   [003] ....    62.424864: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5784e900
          mysqld-763   [003] ....    62.424867: mutex_unlock: [-] mutex_unlock[a4ac83bf] start.. owner:0xae520f00, current_process:ae520f00
          mysqld-763   [003] ....    62.424871: mutex_unlock: [-] mutex_unlock[a4ac83bf] end.. owner:0x0, current_process:ae520f00
          mysqld-763   [003] d...    62.424898: sched_switch: prev_comm=mysqld prev_pid=763 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.424918: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=764 next_prio=120
          mysqld-764   [003] ....    62.424926: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    62.424930: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    62.424933: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    62.424948: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    62.424952: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    62.424955: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    62.424969: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    62.424972: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    62.424974: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    62.424988: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    62.424992: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    62.424995: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] ....    62.425002: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:0, current_process:ae521e00
          mysqld-764   [003] ....    62.425006: mutex_lock: [+][fastpath] mutex_lock[28cb6920] start.. owner:ae521e00, current_process:ae521e00
          mysqld-764   [003] ....    62.425008: mutex_unlock <-aio_read_events
          mysqld-764   [003] ....    62.425022: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5704d900
          mysqld-764   [003] ....    62.425040: mutex_unlock: [-] mutex_unlock[28cb6920] start.. owner:0xae521e00, current_process:ae521e00
          mysqld-764   [003] ....    62.425045: mutex_unlock: [-] mutex_unlock[28cb6920] end.. owner:0x0, current_process:ae521e00
          mysqld-764   [003] d...    62.425055: sched_switch: prev_comm=mysqld prev_pid=764 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=758 next_prio=120
          mysqld-758   [003] ....    62.425062: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    62.425066: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    62.425068: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    62.425083: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    62.425087: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    62.425090: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    62.425104: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    62.425107: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    62.425109: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    62.425123: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    62.425127: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    62.425130: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] ....    62.425136: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:0, current_process:ae56da00
          mysqld-758   [003] ....    62.425140: mutex_lock: [+][fastpath] mutex_lock[8883a612] start.. owner:ae56da00, current_process:ae56da00
          mysqld-758   [003] ....    62.425142: mutex_unlock <-aio_read_events
          mysqld-758   [003] ....    62.425156: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59852900
          mysqld-758   [003] ....    62.425159: mutex_unlock: [-] mutex_unlock[8883a612] start.. owner:0xae56da00, current_process:ae56da00
          mysqld-758   [003] ....    62.425162: mutex_unlock: [-] mutex_unlock[8883a612] end.. owner:0x0, current_process:ae56da00
          mysqld-758   [003] d...    62.425179: sched_switch: prev_comm=mysqld prev_pid=758 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.430507: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.430540: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.430547: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24448 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.430550: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.430555: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.430559: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.430568: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.430586: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.430590: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.430593: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.430598: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24449 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.430626: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.439814: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=768 next_prio=120
          mysqld-768   [000] ....    62.439823: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    62.439827: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    62.439829: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    62.439846: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    62.439849: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    62.439853: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    62.439868: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    62.439872: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    62.439873: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    62.439888: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    62.439892: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    62.439895: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] ....    62.439902: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:0, current_process:ae526900
          mysqld-768   [000] ....    62.439905: mutex_lock: [+][fastpath] mutex_lock[f60c562d] start.. owner:ae526900, current_process:ae526900
          mysqld-768   [000] ....    62.439907: mutex_unlock <-aio_read_events
          mysqld-768   [000] ....    62.439921: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x55049900
          mysqld-768   [000] ....    62.439941: mutex_unlock: [-] mutex_unlock[f60c562d] start.. owner:0xae526900, current_process:ae526900
          mysqld-768   [000] ....    62.439945: mutex_unlock: [-] mutex_unlock[f60c562d] end.. owner:0x0, current_process:ae526900
          mysqld-768   [000] d...    62.439955: sched_switch: prev_comm=mysqld prev_pid=768 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=761 next_prio=120
          mysqld-761   [000] ....    62.439963: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    62.439966: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    62.439969: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    62.439984: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    62.439987: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    62.439991: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    62.440004: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    62.440008: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    62.440010: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    62.440024: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    62.440028: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    62.440031: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] ....    62.440038: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:0, current_process:ae522d00
          mysqld-761   [000] ....    62.440041: mutex_lock: [+][fastpath] mutex_lock[af792c67] start.. owner:ae522d00, current_process:ae522d00
          mysqld-761   [000] ....    62.440043: mutex_unlock <-aio_read_events
          mysqld-761   [000] ....    62.440057: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x58850900
          mysqld-761   [000] ....    62.440060: mutex_unlock: [-] mutex_unlock[af792c67] start.. owner:0xae522d00, current_process:ae522d00
          mysqld-761   [000] ....    62.440063: mutex_unlock: [-] mutex_unlock[af792c67] end.. owner:0x0, current_process:ae522d00
          mysqld-761   [000] d...    62.440093: sched_switch: prev_comm=mysqld prev_pid=761 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.468978: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
            rngd-539   [002] d...    62.468994: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.469318: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd next_pid=1 next_prio=120
         systemd-1     [002] ....    62.469327: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    62.469330: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    62.469336: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    62.469353: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    62.469357: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    62.469360: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] ....    62.469527: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:0, current_process:b9e80000
         systemd-1     [002] ....    62.469531: mutex_lock: [+][fastpath] mutex_lock[b7bb42ef] start.. owner:b9e80000, current_process:b9e80000
         systemd-1     [002] ....    62.469535: mutex_unlock <-ep_scan_ready_list.constprop.0
         systemd-1     [002] ....    62.469551: <stack trace>
 => mutex_unlock
 => ep_scan_ready_list.constprop.0
 => do_epoll_wait
 => sys_epoll_wait
 => ret_fast_syscall
 => 0x7ed042e0
         systemd-1     [002] ....    62.469555: mutex_unlock: [-] mutex_unlock[b7bb42ef] start.. owner:0xb9e80000, current_process:b9e80000
         systemd-1     [002] ....    62.469558: mutex_unlock: [-] mutex_unlock[b7bb42ef] end.. owner:0x0, current_process:b9e80000
         systemd-1     [002] d...    62.469571: sched_switch: prev_comm=systemd prev_pid=1 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.530666: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.530696: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.530702: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24449 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.530706: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.530710: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.530714: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.530722: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.530740: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.530744: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.530747: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.530752: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24450 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.530781: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    62.558074: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:2H next_pid=92 next_prio=100
    kworker/1:2H-92    [001] ....    62.558083: worker_thread: [+] comm: kworker/1:2H, pid: 92, global_func_exe_times: 24450 from (kthread+0x140/0x170) 
    kworker/1:2H-92    [001] ....    62.558086: trace_function_dummy_call: [++] comm:kworker/1:2H, pid:92, from(worker_thread+0x18c/0x60c) 
    kworker/1:2H-92    [001] d...    62.558098: worker_thread: [-] comm: kworker/1:2H, pid: 92, global_func_exe_times: 24451 from (kthread+0x140/0x170) 
    kworker/1:2H-92    [001] d...    62.558107: sched_switch: prev_comm=kworker/1:2H prev_pid=92 prev_prio=100 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.630819: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.630844: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.630851: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24451 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.630854: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.630859: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.630862: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.630870: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.630887: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.630891: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.630894: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.630899: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24452 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.630920: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.630924: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    62.631045: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.631050: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.631059: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24452 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.631062: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.631084: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.631110: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.631122: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.634134: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.634150: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.634174: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.634210: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.634236: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.634264: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.634290: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.634377: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    62.634510: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    62.634514: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.634522: mutex_unlock <-n_tty_write
          <idle>-0     [000] d...    62.634538: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
            sshd-1224  [003] ....    62.634543: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
    kworker/u8:1-45    [000] ....    62.634545: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24453 from (kthread+0x140/0x170) 
            sshd-1224  [003] ....    62.634547: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
    kworker/u8:1-45    [000] ....    62.634551: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
            sshd-1224  [003] ....    62.634551: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    62.634554: mutex_unlock <-tty_write_unlock
    kworker/u8:1-45    [000] ....    62.634556: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.634560: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.634571: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] ....    62.634572: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    62.634575: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.634578: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
          <idle>-0     [002] d...    62.634587: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:1-45    [000] ....    62.634590: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:1-45    [000] ....    62.634594: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.634597: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    62.634602: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24454 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.634611: mutex_unlock <-n_tty_read
            sshd-1224  [003] d...    62.634619: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.634631: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:1-45    [000] d...    62.634631: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] d...    62.634634: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24454 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.634635: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.634639: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] d...    62.634641: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    62.635151: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    62.635156: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.635165: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    62.635180: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.635185: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
    kworker/u8:2-130   [003] ....    62.635186: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24454 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.635189: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.635189: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    62.635193: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.635195: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
            bash-1248  [002] ....    62.635196: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    62.635198: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.635213: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    62.635213: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b9168
            bash-1248  [002] ....    62.635217: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.635220: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.635230: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    62.635234: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.635238: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    62.635242: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24455 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.635252: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            bash-1248  [002] d...    62.635264: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            sshd-1224  [003] ....    62.635281: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    62.635299: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    62.635303: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.635307: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    62.635480: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.635487: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24455 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.635491: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.635545: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.635580: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.635597: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24456 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.635604: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.638086: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    62.638107: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.644040: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    62.644159: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.644165: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.644170: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24456 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.644174: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.644210: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.644237: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.644265: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.644291: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.644373: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.644399: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=539 next_prio=120
          <idle>-0     [003] d...    62.644406: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.644419: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24457 from (kthread+0x140/0x170) 
            rngd-539   [002] d...    62.644419: sched_switch: prev_comm=rngd prev_pid=539 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] d...    62.644426: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.658064: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [003] d...    62.658081: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
       rcu_sched-10    [002] d...    62.658089: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.658093: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.678064: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
          <idle>-0     [003] d...    62.678076: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
       rcu_sched-10    [002] d...    62.678094: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.678098: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.678125: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.678142: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.678166: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.678181: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.678205: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=266 next_prio=120
 brcmf_wdog/mmc1-266   [003] d...    62.678216: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=266 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.694531: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=674 next_prio=120
         apache2-674   [000] d...    62.694595: sched_switch: prev_comm=apache2 prev_pid=674 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.698068: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    62.698083: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.724551: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=765 next_prio=120
          mysqld-765   [003] ....    62.724561: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    62.724564: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.724567: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    62.724584: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    62.724588: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.724591: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    62.724615: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    62.724618: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.724620: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    62.724635: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    62.724639: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.724642: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] ....    62.724650: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:0, current_process:ae523c00
          mysqld-765   [003] ....    62.724653: mutex_lock: [+][fastpath] mutex_lock[68319f49] start.. owner:ae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.724655: mutex_unlock <-aio_read_events
          mysqld-765   [003] ....    62.724669: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5684c900
          mysqld-765   [003] ....    62.724673: mutex_unlock: [-] mutex_unlock[68319f49] start.. owner:0xae523c00, current_process:ae523c00
          mysqld-765   [003] ....    62.724676: mutex_unlock: [-] mutex_unlock[68319f49] end.. owner:0x0, current_process:ae523c00
          mysqld-765   [003] d...    62.724706: sched_switch: prev_comm=mysqld prev_pid=765 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.730972: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mosquitto next_pid=465 next_prio=120
       mosquitto-465   [002] d...    62.731010: sched_switch: prev_comm=mosquitto prev_pid=465 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=98 next_prio=120
     kworker/2:2-98    [002] ....    62.731018: worker_thread: [+] comm: kworker/2:2, pid: 98, global_func_exe_times: 24457 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] ....    62.731021: trace_function_dummy_call: [++] comm:kworker/2:2, pid:98, from(worker_thread+0x18c/0x60c) 
     kworker/2:2-98    [002] ....    62.731026: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:0, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.731030: mutex_lock: [+][fastpath] mutex_lock[e97aa155] start.. owner:b91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.731041: mutex_unlock <-dbs_work_handler
     kworker/2:2-98    [002] ....    62.731060: <stack trace>
 => mutex_unlock
 => dbs_work_handler
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
     kworker/2:2-98    [002] ....    62.731064: mutex_unlock: [-] mutex_unlock[e97aa155] start.. owner:0xb91f5a00, current_process:b91f5a00
     kworker/2:2-98    [002] ....    62.731067: mutex_unlock: [-] mutex_unlock[e97aa155] end.. owner:0x0, current_process:b91f5a00
     kworker/2:2-98    [002] d...    62.731072: worker_thread: [-] comm: kworker/2:2, pid: 98, global_func_exe_times: 24458 from (kthread+0x140/0x170) 
     kworker/2:2-98    [002] d...    62.731103: sched_switch: prev_comm=kworker/2:2 prev_pid=98 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0     [001] d...    62.738515: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=767 next_prio=120
          mysqld-767   [001] ....    62.738523: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    62.738527: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.738530: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    62.738546: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    62.738550: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.738553: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    62.738570: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    62.738573: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.738575: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    62.738590: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    62.738593: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.738597: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] ....    62.738603: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:0, current_process:ae525a00
          mysqld-767   [001] ....    62.738607: mutex_lock: [+][fastpath] mutex_lock[61739ec8] start.. owner:ae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.738609: mutex_unlock <-aio_read_events
          mysqld-767   [001] ....    62.738622: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5584a900
          mysqld-767   [001] ....    62.738642: mutex_unlock: [-] mutex_unlock[61739ec8] start.. owner:0xae525a00, current_process:ae525a00
          mysqld-767   [001] ....    62.738645: mutex_unlock: [-] mutex_unlock[61739ec8] end.. owner:0x0, current_process:ae525a00
          mysqld-767   [001] d...    62.738655: sched_switch: prev_comm=mysqld prev_pid=767 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=766 next_prio=120
          mysqld-766   [001] ....    62.738662: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    62.738666: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.738668: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    62.738684: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    62.738689: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.738692: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    62.738705: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    62.738709: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.738710: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    62.738724: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    62.738728: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.738732: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] ....    62.738738: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:0, current_process:ae524b00
          mysqld-766   [001] ....    62.738741: mutex_lock: [+][fastpath] mutex_lock[8be40012] start.. owner:ae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.738743: mutex_unlock <-aio_read_events
          mysqld-766   [001] ....    62.738757: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x5604b900
          mysqld-766   [001] ....    62.738760: mutex_unlock: [-] mutex_unlock[8be40012] start.. owner:0xae524b00, current_process:ae524b00
          mysqld-766   [001] ....    62.738763: mutex_unlock: [-] mutex_unlock[8be40012] end.. owner:0x0, current_process:ae524b00
          mysqld-766   [001] d...    62.738791: sched_switch: prev_comm=mysqld prev_pid=766 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.750982: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=985 next_prio=120
         lxpanel-985   [000] ....    62.751059: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    62.751063: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.751066: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    62.751090: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5a0
         lxpanel-985   [000] ....    62.751094: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.751097: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] ....    62.751110: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:0, current_process:a4915a00
         lxpanel-985   [000] ....    62.751113: mutex_lock: [+][fastpath] mutex_lock[59993138] start.. owner:a4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.751115: mutex_unlock <-unix_stream_read_generic
         lxpanel-985   [000] ....    62.751133: <stack trace>
 => mutex_unlock
 => unix_stream_read_generic
 => unix_stream_recvmsg
 => sock_recvmsg
 => ___sys_recvmsg
 => __sys_recvmsg
 => sys_recvmsg
 => ret_fast_syscall
 => 0x7ee5e5c0
         lxpanel-985   [000] ....    62.751137: mutex_unlock: [-] mutex_unlock[59993138] start.. owner:0xa4915a00, current_process:a4915a00
         lxpanel-985   [000] ....    62.751140: mutex_unlock: [-] mutex_unlock[59993138] end.. owner:0x0, current_process:a4915a00
         lxpanel-985   [000] d...    62.751179: sched_switch: prev_comm=lxpanel prev_pid=985 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.757050: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=759 next_prio=120
          mysqld-759   [000] ....    62.757058: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    62.757062: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.757065: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    62.757080: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    62.757097: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.757100: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    62.757116: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    62.757119: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.757121: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    62.757135: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    62.757139: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.757143: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] ....    62.757149: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:0, current_process:ae56cb00
          mysqld-759   [000] ....    62.757152: mutex_lock: [+][fastpath] mutex_lock[b57efa43] start.. owner:ae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.757154: mutex_unlock <-aio_read_events
          mysqld-759   [000] ....    62.757168: <stack trace>
 => mutex_unlock
 => aio_read_events
 => do_io_getevents
 => sys_io_getevents
 => __sys_trace_return
 => 0x59051900
          mysqld-759   [000] ....    62.757172: mutex_unlock: [-] mutex_unlock[b57efa43] start.. owner:0xae56cb00, current_process:ae56cb00
          mysqld-759   [000] ....    62.757175: mutex_unlock: [-] mutex_unlock[b57efa43] end.. owner:0x0, current_process:ae56cb00
          mysqld-759   [000] d...    62.757185: sched_switch: prev_comm=mysqld prev_pid=759 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.768781: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    62.768905: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.768911: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.768917: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24458 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.768920: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.768941: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.768967: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.768979: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.771993: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.772007: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.772033: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.772067: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.772093: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.772121: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.772147: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.772231: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    62.772357: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:0, current_process:9ed28000
            sshd-1224  [003] ....    62.772361: mutex_lock: [+][fastpath] mutex_lock[c907db2b] start.. owner:9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.772369: mutex_unlock <-n_tty_write
          <idle>-0     [000] d...    62.772385: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:1 next_pid=45 next_prio=120
            sshd-1224  [003] ....    62.772390: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
    kworker/u8:1-45    [000] ....    62.772392: worker_thread: [+] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24459 from (kthread+0x140/0x170) 
            sshd-1224  [003] ....    62.772394: mutex_unlock: [-] mutex_unlock[c907db2b] start.. owner:0x9ed28000, current_process:9ed28000
    kworker/u8:1-45    [000] ....    62.772396: trace_function_dummy_call: [++] comm:kworker/u8:1, pid:45, from(worker_thread+0x18c/0x60c) 
            sshd-1224  [003] ....    62.772398: mutex_unlock: [-] mutex_unlock[c907db2b] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] ....    62.772401: mutex_unlock <-tty_write_unlock
    kworker/u8:1-45    [000] ....    62.772402: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:0, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.772405: mutex_lock: [+][fastpath] mutex_lock[1d5e8160] start.. owner:b9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.772416: mutex_unlock <-flush_to_ldisc
            sshd-1224  [003] ....    62.772419: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7ee4c220
            sshd-1224  [003] ....    62.772422: mutex_unlock: [-] mutex_unlock[304aee79] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.772425: mutex_unlock: [-] mutex_unlock[304aee79] end.. owner:0x0, current_process:9ed28000
    kworker/u8:1-45    [000] ....    62.772434: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
          <idle>-0     [002] d...    62.772435: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1248 next_prio=120
    kworker/u8:1-45    [000] ....    62.772439: mutex_unlock: [-] mutex_unlock[1d5e8160] start.. owner:0xb9746900, current_process:b9746900
    kworker/u8:1-45    [000] ....    62.772442: mutex_unlock: [-] mutex_unlock[1d5e8160] end.. owner:0x0, current_process:b9746900
    kworker/u8:1-45    [000] d...    62.772447: worker_thread: [-] comm: kworker/u8:1, pid: 45, global_func_exe_times: 24460 from (kthread+0x140/0x170) 
            sshd-1224  [003] d...    62.772456: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.772458: mutex_unlock <-n_tty_read
    kworker/u8:2-130   [003] d...    62.772470: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24460 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.772477: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b9180
    kworker/u8:1-45    [000] d...    62.772480: sched_switch: prev_comm=kworker/u8:1 prev_pid=45 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
    kworker/u8:2-130   [003] d...    62.772480: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1248  [002] ....    62.772482: mutex_unlock: [-] mutex_unlock[82aaf953] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.772486: mutex_unlock: [-] mutex_unlock[82aaf953] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    62.772502: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    62.772505: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.772508: mutex_unlock <-n_tty_write
            bash-1248  [002] ....    62.772526: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
            bash-1248  [002] ....    62.772529: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.772532: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    62.772536: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:0, current_process:a0e98000
            bash-1248  [002] ....    62.772539: mutex_lock: [+][fastpath] mutex_lock[e49fa59d] start.. owner:a0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.772547: mutex_unlock <-n_tty_write
          <idle>-0     [003] d...    62.772561: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1248  [002] ....    62.772564: <stack trace>
 => mutex_unlock
 => n_tty_write
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
    kworker/u8:2-130   [003] ....    62.772567: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24460 from (kthread+0x140/0x170) 
            bash-1248  [002] ....    62.772568: mutex_unlock: [-] mutex_unlock[e49fa59d] start.. owner:0xa0e98000, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.772571: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
            bash-1248  [002] ....    62.772571: mutex_unlock: [-] mutex_unlock[e49fa59d] end.. owner:0x0, current_process:a0e98000
            bash-1248  [002] ....    62.772574: mutex_unlock <-tty_write_unlock
    kworker/u8:2-130   [003] ....    62.772576: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:0, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.772579: mutex_lock: [+][fastpath] mutex_lock[cf9667cb] start.. owner:b8280000, current_process:b8280000
            bash-1248  [002] ....    62.772591: <stack trace>
 => mutex_unlock
 => tty_write_unlock
 => tty_write
 => __vfs_write
 => vfs_write
 => ksys_write
 => sys_write
 => ret_fast_syscall
 => 0x7e9b91a8
    kworker/u8:2-130   [003] ....    62.772592: mutex_unlock <-flush_to_ldisc
            bash-1248  [002] ....    62.772595: mutex_unlock: [-] mutex_unlock[38105917] start.. owner:0xa0e98000, current_process:a0e98000
            bash-1248  [002] ....    62.772598: mutex_unlock: [-] mutex_unlock[38105917] end.. owner:0x0, current_process:a0e98000
    kworker/u8:2-130   [003] ....    62.772609: <stack trace>
 => mutex_unlock
 => flush_to_ldisc
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/u8:2-130   [003] ....    62.772613: mutex_unlock: [-] mutex_unlock[cf9667cb] start.. owner:0xb8280000, current_process:b8280000
    kworker/u8:2-130   [003] ....    62.772616: mutex_unlock: [-] mutex_unlock[cf9667cb] end.. owner:0x0, current_process:b8280000
    kworker/u8:2-130   [003] d...    62.772620: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24461 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.772629: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1224 next_prio=120
            sshd-1224  [003] ....    62.772656: mutex_unlock <-n_tty_read
            sshd-1224  [003] ....    62.772674: <stack trace>
 => mutex_unlock
 => n_tty_read
 => tty_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7ee48200
            sshd-1224  [003] ....    62.772678: mutex_unlock: [-] mutex_unlock[136d9518] start.. owner:0x9ed28000, current_process:9ed28000
            sshd-1224  [003] ....    62.772682: mutex_unlock: [-] mutex_unlock[136d9518] end.. owner:0x0, current_process:9ed28000
            sshd-1224  [003] d...    62.772849: sched_switch: prev_comm=sshd prev_pid=1224 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.772857: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24461 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.772860: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.772916: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.772954: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.772973: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24462 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] d...    62.772980: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [001] d...    62.773459: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1279 next_prio=120
            bash-1248  [002] d...    62.773883: sched_switch: prev_comm=bash prev_pid=1248 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-1279  [001] ....    62.773992: mutex_lock: [+][fastpath] mutex_lock[6071e632] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.773996: mutex_lock: [+][fastpath] mutex_lock[6071e632] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.774002: mutex_unlock <-pipe_release
            bash-1279  [001] ....    62.774026: <stack trace>
 => mutex_unlock
 => pipe_release
 => __fput
 => ____fput
 => task_work_run
 => do_work_pending
 => slow_work_pending
 => 0x76e896bc
            bash-1279  [001] ....    62.774031: mutex_unlock: [-] mutex_unlock[6071e632] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.774034: mutex_unlock: [-] mutex_unlock[6071e632] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.774049: mutex_lock: [+][fastpath] mutex_lock[6071e632] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.774052: mutex_lock: [+][fastpath] mutex_lock[6071e632] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.774055: mutex_unlock <-pipe_read
            bash-1279  [001] ....    62.774074: <stack trace>
 => mutex_unlock
 => pipe_read
 => __vfs_read
 => vfs_read
 => ksys_read
 => sys_read
 => ret_fast_syscall
 => 0x7e9b98d8
            bash-1279  [001] ....    62.774078: mutex_unlock: [-] mutex_unlock[6071e632] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.774081: mutex_unlock: [-] mutex_unlock[6071e632] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.774127: mutex_lock: [+][fastpath] mutex_lock[6071e632] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.774131: mutex_lock: [+][fastpath] mutex_lock[6071e632] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.774133: mutex_unlock <-pipe_release
            bash-1279  [001] ....    62.774150: <stack trace>
 => mutex_unlock
 => pipe_release
 => __fput
 => ____fput
 => task_work_run
 => do_work_pending
 => slow_work_pending
 => 0x76e896bc
            bash-1279  [001] ....    62.774154: mutex_unlock: [-] mutex_unlock[6071e632] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.774157: mutex_unlock: [-] mutex_unlock[6071e632] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] d...    62.774923: sched_switch: prev_comm=bash prev_pid=1279 prev_prio=120 prev_state=D ==> next_comm=kworker/1:2H next_pid=92 next_prio=100
    kworker/1:2H-92    [001] ....    62.774931: worker_thread: [+] comm: kworker/1:2H, pid: 92, global_func_exe_times: 24462 from (kthread+0x140/0x170) 
    kworker/1:2H-92    [001] ....    62.774935: trace_function_dummy_call: [++] comm:kworker/1:2H, pid:92, from(worker_thread+0x18c/0x60c) 
    kworker/1:2H-92    [001] ....    62.774980: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:0, current_process:b8d56900
    kworker/1:2H-92    [001] ....    62.774984: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:b8d56900, current_process:b8d56900
    kworker/1:2H-92    [001] ....    62.774986: mutex_unlock <-mmc_blk_mq_complete_prev_req.part.0
    kworker/1:2H-92    [001] ....    62.775020: <stack trace>
 => mutex_unlock
 => mmc_blk_mq_complete_prev_req.part.0
 => mmc_blk_rw_wait
 => mmc_blk_mq_issue_rq
 => mmc_mq_queue_rq
 => blk_mq_dispatch_rq_list
 => blk_mq_do_dispatch_sched
 => blk_mq_sched_dispatch_requests
 => __blk_mq_run_hw_queue
 => blk_mq_run_work_fn
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/1:2H-92    [001] ....    62.775024: mutex_unlock: [-] mutex_unlock[ee76c60f] start.. owner:0xb8d56900, current_process:b8d56900
    kworker/1:2H-92    [001] ....    62.775027: mutex_unlock: [-] mutex_unlock[ee76c60f] end.. owner:0x0, current_process:b8d56900
    kworker/1:2H-92    [001] d...    62.775093: worker_thread: [-] comm: kworker/1:2H, pid: 92, global_func_exe_times: 24463 from (kthread+0x140/0x170) 
    kworker/1:2H-92    [001] d...    62.775104: sched_switch: prev_comm=kworker/1:2H prev_pid=92 prev_prio=100 prev_state=I ==> next_comm=kworker/1:2 next_pid=74 next_prio=120
     kworker/1:2-74    [001] ....    62.775111: worker_thread: [+] comm: kworker/1:2, pid: 74, global_func_exe_times: 24463 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] ....    62.775114: trace_function_dummy_call: [++] comm:kworker/1:2, pid:74, from(worker_thread+0x18c/0x60c) 
     kworker/1:2-74    [001] d...    62.775123: worker_thread: [-] comm: kworker/1:2, pid: 74, global_func_exe_times: 24464 from (kthread+0x140/0x170) 
     kworker/1:2-74    [001] d...    62.775151: sched_switch: prev_comm=kworker/1:2 prev_pid=74 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0     [000] d...    62.777736: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:3 next_pid=467 next_prio=120
     kworker/0:3-467   [000] ....    62.777746: worker_thread: [+] comm: kworker/0:3, pid: 467, global_func_exe_times: 24464 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] ....    62.777749: trace_function_dummy_call: [++] comm:kworker/0:3, pid:467, from(worker_thread+0x18c/0x60c) 
     kworker/0:3-467   [000] d...    62.777756: worker_thread: [-] comm: kworker/0:3, pid: 467, global_func_exe_times: 24465 from (kthread+0x140/0x170) 
     kworker/0:3-467   [000] d...    62.777766: sched_switch: prev_comm=kworker/0:3 prev_pid=467 prev_prio=120 prev_state=I ==> next_comm=kworker/0:2H next_pid=101 next_prio=100
    kworker/0:2H-101   [000] ....    62.777772: worker_thread: [+] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24465 from (kthread+0x140/0x170) 
    kworker/0:2H-101   [000] ....    62.777776: trace_function_dummy_call: [++] comm:kworker/0:2H, pid:101, from(worker_thread+0x18c/0x60c) 
    kworker/0:2H-101   [000] ....    62.777781: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:0, current_process:b8260000
    kworker/0:2H-101   [000] ....    62.777784: mutex_lock: [+][fastpath] mutex_lock[ee76c60f] start.. owner:b8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    62.777799: mutex_unlock <-mmc_blk_mq_complete_prev_req.part.0
    kworker/0:2H-101   [000] ....    62.777817: <stack trace>
 => mutex_unlock
 => mmc_blk_mq_complete_prev_req.part.0
 => mmc_blk_mq_complete_work
 => process_one_work
 => worker_thread
 => kthread
 => ret_from_fork
 => 0
    kworker/0:2H-101   [000] ....    62.777821: mutex_unlock: [-] mutex_unlock[ee76c60f] start.. owner:0xb8260000, current_process:b8260000
    kworker/0:2H-101   [000] ....    62.777825: mutex_unlock: [-] mutex_unlock[ee76c60f] end.. owner:0x0, current_process:b8260000
    kworker/0:2H-101   [000] d...    62.777829: worker_thread: [-] comm: kworker/0:2H, pid: 101, global_func_exe_times: 24466 from (kthread+0x140/0x170) 
          <idle>-0     [001] d...    62.777835: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1279 next_prio=120
    kworker/0:2H-101   [000] d...    62.777853: sched_switch: prev_comm=kworker/0:2H prev_pid=101 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [002] d...    62.778119: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120
       rcu_sched-10    [002] d...    62.778144: sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-1279  [001] ....    62.778729: mutex_unlock <-install_exec_creds
            bash-1279  [001] ....    62.778754: <stack trace>
 => mutex_unlock
 => install_exec_creds
 => load_elf_binary
 => search_binary_handler.part.0
 => search_binary_handler
 => load_script
 => search_binary_handler.part.0
 => __do_execve_file
 => sys_execve
 => ret_fast_syscall
 => 0x7e9b9974
            bash-1279  [001] ....    62.778760: mutex_unlock: [-] mutex_unlock[f4ab95bd] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.778764: mutex_unlock: [-] mutex_unlock[f4ab95bd] end.. owner:0x0, current_process:9ed2bc00
          <idle>-0     [000] d...    62.781306: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=80 next_prio=49
     irq/86-mmc1-80    [000] d...    62.781482: sched_switch: prev_comm=irq/86-mmc1 prev_pid=80 prev_prio=49 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.781501: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] ....    62.781513: worker_thread: [+] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24466 from (kthread+0x140/0x170) 
    kworker/u8:2-130   [003] ....    62.781518: trace_function_dummy_call: [++] comm:kworker/u8:2, pid:130, from(worker_thread+0x18c/0x60c) 
    kworker/u8:2-130   [003] d...    62.781584: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.781626: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.781668: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.781703: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
    kworker/u8:2-130   [003] d...    62.781836: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0     [003] d...    62.781870: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=130 next_prio=120
            bash-1279  [001] ....    62.781878: mutex_lock: [+][fastpath] mutex_lock[f14907a7] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.781884: mutex_lock: [+][fastpath] mutex_lock[f14907a7] start.. owner:9ed2bc00, current_process:9ed2bc00
    kworker/u8:2-130   [003] d...    62.781886: worker_thread: [-] comm: kworker/u8:2, pid: 130, global_func_exe_times: 24467 from (kthread+0x140/0x170) 
            bash-1279  [001] ....    62.781893: mutex_unlock <-tty_unlock
    kworker/u8:2-130   [003] d...    62.781896: sched_switch: prev_comm=kworker/u8:2 prev_pid=130 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
            bash-1279  [001] ....    62.781929: <stack trace>
 => mutex_unlock
 => tty_unlock
 => tty_open
 => chrdev_open
 => do_dentry_open
 => vfs_open
 => path_openat
 => do_filp_open
 => do_sys_open
 => sys_openat
 => ret_fast_syscall
 => 0x7ed8ba60
            bash-1279  [001] ....    62.781934: mutex_unlock: [-] mutex_unlock[f14907a7] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.781939: mutex_unlock: [-] mutex_unlock[f14907a7] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.781958: mutex_lock: [+][fastpath] mutex_lock[f14907a7] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.781962: mutex_lock: [+][fastpath] mutex_lock[f14907a7] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.781968: mutex_unlock <-tty_unlock
            bash-1279  [001] ....    62.781989: <stack trace>
 => mutex_unlock
 => tty_unlock
 => tty_release
 => __fput
 => ____fput
 => task_work_run
 => do_work_pending
 => slow_work_pending
 => 0x76e3a6bc
            bash-1279  [001] ....    62.781993: mutex_unlock: [-] mutex_unlock[f14907a7] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.781996: mutex_unlock: [-] mutex_unlock[f14907a7] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784681: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784689: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784693: mutex_unlock <-kernfs_iop_permission
            bash-1279  [001] ....    62.784722: <stack trace>
 => mutex_unlock
 => kernfs_iop_permission
 => inode_permission
 => link_path_walk.part.0
 => path_openat
 => do_filp_open
 => do_sys_open
 => sys_openat
 => ret_fast_syscall
 => 0x7ed8b7b8
            bash-1279  [001] ....    62.784727: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784731: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784736: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784740: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784743: mutex_unlock <-kernfs_dop_revalidate
            bash-1279  [001] ....    62.784763: <stack trace>
 => mutex_unlock
 => kernfs_dop_revalidate
 => lookup_fast
 => walk_component
 => link_path_walk.part.0
 => path_openat
 => do_filp_open
 => do_sys_open
 => sys_openat
 => ret_fast_syscall
 => 0x7ed8b7b8
            bash-1279  [001] ....    62.784767: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784770: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784775: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784778: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784780: mutex_unlock <-kernfs_iop_permission
            bash-1279  [001] ....    62.784798: <stack trace>
 => mutex_unlock
 => kernfs_iop_permission
 => inode_permission
 => link_path_walk.part.0
 => path_openat
 => do_filp_open
 => do_sys_open
 => sys_openat
 => ret_fast_syscall
 => 0x7ed8b7b8
            bash-1279  [001] ....    62.784801: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784805: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784810: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784814: mutex_lock: [+][fastpath] mutex_lock[d6842711] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784816: mutex_unlock <-kernfs_dop_revalidate
            bash-1279  [001] ....    62.784835: <stack trace>
 => mutex_unlock
 => kernfs_dop_revalidate
 => lookup_fast
 => walk_component
 => link_path_walk.part.0
 => path_openat
 => do_filp_open
 => do_sys_open
 => sys_openat
 => ret_fast_syscall
 => 0x7ed8b7b8
            bash-1279  [001] ....    62.784839: mutex_unlock: [-] mutex_unlock[d6842711] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784842: mutex_unlock: [-] mutex_unlock[d6842711] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784864: mutex_lock: [+][fastpath] mutex_lock[27083695] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.784867: mutex_lock: [+][fastpath] mutex_lock[27083695] start.. owner:9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784869: mutex_unlock <-trace_array_get
            bash-1279  [001] ....    62.784890: <stack trace>
 => mutex_unlock
 => trace_array_get
 => tracing_open_generic_tr
 => do_dentry_open
 => vfs_open
 => path_openat
 => do_filp_open
 => do_sys_open
 => sys_openat
 => ret_fast_syscall
 => 0x7ed8b7b8
            bash-1279  [001] ....    62.784893: mutex_unlock: [-] mutex_unlock[27083695] start.. owner:0x9ed2bc00, current_process:9ed2bc00
            bash-1279  [001] ....    62.784897: mutex_unlock: [-] mutex_unlock[27083695] end.. owner:0x0, current_process:9ed2bc00
            bash-1279  [001] ....    62.785041: mutex_lock: [+][fastpath] mutex_lock[27083695] start.. owner:0, current_process:9ed2bc00
            bash-1279  [001] ....    62.785045: mutex_lock: [+][fastpath] mutex_lock[27083695] start.. owner:9ed2bc00, current_process:9ed2bc00
