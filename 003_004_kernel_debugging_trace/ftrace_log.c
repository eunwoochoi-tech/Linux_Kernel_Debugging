# tracer: function
#
# entries-in-buffer/entries-written: 62/62   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
 get_whoami_cat.-3551  [001] .... 33344.061037: do_exit+0x14/0xbd4 <-do_group_exit+0x50/0xe8
 get_whoami_cat.-3551  [001] .... 33344.061068: <stack trace>
 => do_exit+0x18/0xbd4
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7eace3d8
 get_whoami_cat.-3551  [001] .... 33344.061810: sched_process_exit: comm=get_whoami_cat. pid=3551 prio=120
          <idle>-0     [000] ..s. 33344.100272: sched_process_free: comm=get_whoami_cat. pid=3551 prio=120
   kworker/dying-3354  [001] .... 33344.940309: do_exit+0x14/0xbd4 <-kthread+0x114/0x170
   kworker/dying-3354  [001] .... 33344.940341: <stack trace>
 => do_exit+0x18/0xbd4
 => kthread+0x114/0x170
 => ret_from_fork+0x14/0x28
 => 0
   kworker/dying-3354  [001] .... 33344.940356: sched_process_exit: comm=kworker/dying pid=3354 prio=100
          <idle>-0     [001] ..s. 33344.980287: sched_process_free: comm=kworker/dying pid=3354 prio=100
            bash-3152  [000] .... 33346.183195: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-3152  [000] .... 33346.183224: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33346.183228: copy_process.part.0+0x14/0x1ad8 <-_do_fork+0xc4/0x470
            bash-3152  [000] .... 33346.183241: <stack trace>
 => copy_process.part.0+0x18/0x1ad8
 => _do_fork+0xc4/0x470
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33346.183869: sched_process_fork: comm=bash pid=3152 child_comm=bash child_pid=3562
          whoami-3562  [002] .... 33346.191714: sched_process_exec: filename=/usr/bin/whoami pid=3562 old_pid=3562
          whoami-3562  [002] .... 33346.195451: do_exit+0x14/0xbd4 <-do_group_exit+0x50/0xe8
          whoami-3562  [002] .... 33346.195483: <stack trace>
 => do_exit+0x18/0xbd4
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ee35528
          whoami-3562  [002] .... 33346.195874: sched_process_exit: comm=whoami pid=3562 prio=120
          <idle>-0     [000] ..s. 33346.260329: sched_process_free: comm=whoami pid=3562 prio=120
            bash-3152  [000] .... 33350.829906: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-3152  [000] .... 33350.829935: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33350.829939: copy_process.part.0+0x14/0x1ad8 <-_do_fork+0xc4/0x470
            bash-3152  [000] .... 33350.829952: <stack trace>
 => copy_process.part.0+0x18/0x1ad8
 => _do_fork+0xc4/0x470
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33350.830656: sched_process_fork: comm=bash pid=3152 child_comm=bash child_pid=3563
             cat-3563  [002] .... 33350.832717: sched_process_exec: filename=/usr/bin/cat pid=3563 old_pid=3563
             cat-3563  [002] d... 33350.835035: rpi_get_interrupt_info+0x24/0x6c: [cat] 17: 3f00b880.mailbox, irq_handler : bcm2835_mbox_irq+0x0/0x94 
             cat-3563  [002] d... 33350.835053: rpi_get_interrupt_info+0x24/0x6c: [cat] 18: VCHIQ doorbell, irq_handler : vchiq_doorbell_irq+0x0/0x40 
             cat-3563  [002] d... 33350.835082: rpi_get_interrupt_info+0x24/0x6c: [cat] 40: bcm2708_fb DMA, irq_handler : bcm2708_fb_dma_irq+0x0/0x40 
             cat-3563  [002] d... 33350.835097: rpi_get_interrupt_info+0x24/0x6c: [cat] 42: DMA IRQ, irq_handler : bcm2835_dma_callback+0x0/0x128 
             cat-3563  [002] d... 33350.835110: rpi_get_interrupt_info+0x24/0x6c: [cat] 44: DMA IRQ, irq_handler : bcm2835_dma_callback+0x0/0x128 
             cat-3563  [002] d... 33350.835130: rpi_get_interrupt_info+0x24/0x6c: [cat] 53: ttyS0, irq_handler : serial8250_interrupt+0x0/0xd0 
             cat-3563  [002] d... 33350.835144: rpi_get_interrupt_info+0x24/0x6c: [cat] 56: dwc_otg, irq_handler : dwc_otg_common_irq+0x0/0x28 
             cat-3563  [002] d... 33350.835176: rpi_get_interrupt_info+0x24/0x6c: [cat] 80: mmc0, irq_handler : bcm2835_sdhost_irq+0x0/0x44c 
             cat-3563  [002] d... 33350.835189: rpi_get_interrupt_info+0x24/0x6c: [cat] 81: uart-pl011, irq_handler : pl011_int+0x0/0x470 
             cat-3563  [002] d... 33350.835206: rpi_get_interrupt_info+0x24/0x6c: [cat] 86: mmc1, irq_handler : bcm2835_mmc_irq+0x0/0x6ec 
             cat-3563  [002] d... 33350.835272: rpi_get_interrupt_info+0x24/0x6c: [cat] 161: arch_timer, irq_handler : arch_timer_handler_phys+0x0/0x40 
             cat-3563  [002] d... 33350.835285: rpi_get_interrupt_info+0x24/0x6c: [cat] 162: arch_timer, irq_handler : arch_timer_handler_phys+0x0/0x40 
             cat-3563  [002] d... 33350.835301: rpi_get_interrupt_info+0x24/0x6c: [cat] 165: arm-pmu, irq_handler : armpmu_dispatch_irq+0x0/0x88 
        kthreadd-2     [002] .... 33350.835531: copy_process.part.0+0x14/0x1ad8 <-_do_fork+0xc4/0x470
        kthreadd-2     [002] .... 33350.835566: <stack trace>
 => copy_process.part.0+0x18/0x1ad8
 => _do_fork+0xc4/0x470
 => kernel_thread+0x3c/0x44
 => kthreadd+0x1dc/0x27c
 => ret_from_fork+0x14/0x28
 => 0
        kthreadd-2     [002] .... 33350.835863: sched_process_fork: comm=kthreadd pid=2 child_comm=kthreadd child_pid=3564
             cat-3563  [002] .... 33350.836216: do_exit+0x14/0xbd4 <-do_group_exit+0x50/0xe8
             cat-3563  [002] .... 33350.836238: <stack trace>
 => do_exit+0x18/0xbd4
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7ee5f518
             cat-3563  [002] .... 33350.836567: sched_process_exit: comm=cat pid=3563 prio=120
          <idle>-0     [000] ..s. 33350.900364: sched_process_free: comm=cat pid=3563 prio=120
            bash-3152  [000] .... 33352.838175: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-3152  [000] .... 33352.838205: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33352.838208: copy_process.part.0+0x14/0x1ad8 <-_do_fork+0xc4/0x470
            bash-3152  [000] .... 33352.838221: <stack trace>
 => copy_process.part.0+0x18/0x1ad8
 => _do_fork+0xc4/0x470
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33352.838820: sched_process_fork: comm=bash pid=3152 child_comm=bash child_pid=3565
              ls-3565  [002] .... 33352.841117: sched_process_exec: filename=/usr/bin/ls pid=3565 old_pid=3565
              ls-3565  [002] .... 33352.848608: do_exit+0x14/0xbd4 <-do_group_exit+0x50/0xe8
              ls-3565  [002] .... 33352.848640: <stack trace>
 => do_exit+0x18/0xbd4
 => do_group_exit+0x50/0xe8
 => __wake_up_parent+0x0/0x30
 => ret_fast_syscall+0x0/0x28
 => 0x7e817508
              ls-3565  [002] .... 33352.849249: sched_process_exit: comm=ls pid=3565 prio=120
          <idle>-0     [000] ..s. 33352.890420: sched_process_free: comm=ls pid=3565 prio=120
            bash-3152  [000] .... 33355.725123: sys_clone+0x14/0x3c <-ret_fast_syscall+0x0/0x28
            bash-3152  [000] .... 33355.725152: <stack trace>
 => sys_clone+0x18/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33355.725156: copy_process.part.0+0x14/0x1ad8 <-_do_fork+0xc4/0x470
            bash-3152  [000] .... 33355.725169: <stack trace>
 => copy_process.part.0+0x18/0x1ad8
 => _do_fork+0xc4/0x470
 => sys_clone+0x34/0x3c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec77210
            bash-3152  [000] .... 33355.725771: sched_process_fork: comm=bash pid=3152 child_comm=bash child_pid=3566
           <...>-3566  [002] .... 33355.730649: search_binary_handler+0x10/0x30 <-load_script+0x248/0x2d0
           <...>-3566  [002] .... 33355.730689: <stack trace>
 => search_binary_handler+0x14/0x30
 => load_script+0x248/0x2d0
 => search_binary_handler.part.0+0xac/0x24c
 => __do_execve_file+0x590/0x7d0
 => sys_execve+0x44/0x4c
 => ret_fast_syscall+0x0/0x28
 => 0x7ec772b4
           <...>-3566  [002] .... 33355.731559: sched_process_exec: filename=./get_ftrace.sh pid=3566 old_pid=3566
