# tracer: function
#
# entries-in-buffer/entries-written: 624/4397   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [002] d.h.  5015.716384: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.716434: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.716439: do_timer: [+] jiffies_64: 4295438862, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.716442: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.726381: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.726420: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.726425: do_timer: [+] jiffies_64: 4295438863, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.726427: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.736379: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.736410: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.736414: do_timer: [+] jiffies_64: 4295438864, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.736417: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.746380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.746411: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.746415: do_timer: [+] jiffies_64: 4295438865, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.746417: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.756381: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.756416: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.756420: do_timer: [+] jiffies_64: 4295438866, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.756423: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
 brcmf_wdog/mmc1-249   [002] d...  5015.756545: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472571 [timeout=1000] cpu=2 idx=152 flags=
 brcmf_wdog/mmc1-249   [002] d...  5015.756593: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472571 [timeout=1000] cpu=2 idx=152 flags=
 brcmf_wdog/mmc1-249   [002] d...  5015.756630: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472571 [timeout=1000] cpu=2 idx=152 flags=
          <idle>-0     [002] d.h.  5015.766380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.766412: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.766416: do_timer: [+] jiffies_64: 4295438867, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.766419: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.776380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.776410: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.776414: do_timer: [+] jiffies_64: 4295438868, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.776417: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.786380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.786409: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.786413: do_timer: [+] jiffies_64: 4295438869, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.786416: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.796380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.796409: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.796413: do_timer: [+] jiffies_64: 4295438870, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.796416: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
##### CPU 3 buffer started ####
          <idle>-0     [003] ..s.  5015.806432: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471576
          <idle>-0     [003] d.s.  5015.806438: timer_start: timer=afff5958 function=rh_timer_func expires=471600 [timeout=24] cpu=3 idx=24 flags=
          <idle>-0     [003] ..s.  5015.806441: timer_expire_exit: timer=afff5958
          <idle>-0     [002] d.h.  5015.816380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.816410: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.816413: do_timer: [+] jiffies_64: 4295438872, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.816416: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5015.836380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5015.836411: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5015.836415: do_timer: [+] jiffies_64: 4295438874, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5015.836418: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d...  5016.056380: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5016.056408: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5016.056413: do_timer: [+] jiffies_64: 4295438896, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5016.056415: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5016.056433: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471601
          <idle>-0     [003] d.s.  5016.056438: timer_start: timer=afff5958 function=rh_timer_func expires=471625 [timeout=24] cpu=3 idx=49 flags=
          <idle>-0     [003] ..s.  5016.056441: timer_expire_exit: timer=afff5958
          <idle>-0     [003] d.s.  5016.056446: timer_expire_entry: timer=279d6f5e function=delayed_work_timer_fn now=471601
          <idle>-0     [003] dns.  5016.056456: timer_expire_exit: timer=279d6f5e
          <idle>-0     [003] d.h.  5016.306384: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5016.306417: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5016.306421: do_timer: [+] jiffies_64: 4295438921, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5016.306424: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5016.306438: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471626
          <idle>-0     [003] d.s.  5016.306445: timer_start: timer=afff5958 function=rh_timer_func expires=471650 [timeout=24] cpu=3 idx=10 flags=
          <idle>-0     [003] ..s.  5016.306447: timer_expire_exit: timer=afff5958
 brcmf_wdog/mmc1-249   [002] d...  5016.476437: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472643 [timeout=1000] cpu=2 idx=153 flags=
 brcmf_wdog/mmc1-249   [002] d...  5016.476490: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472643 [timeout=1000] cpu=2 idx=154 flags=
 brcmf_wdog/mmc1-249   [002] d...  5016.476561: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472643 [timeout=1000] cpu=2 idx=154 flags=
          <idle>-0     [003] d...  5016.511454: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5016.511478: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5016.511482: do_timer: [+] jiffies_64: 4295438941, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5016.511485: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d...  5016.556387: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5016.556413: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5016.556417: do_timer: [+] jiffies_64: 4295438946, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5016.556419: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5016.556436: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471651
          <idle>-0     [003] d.s.  5016.556441: timer_start: timer=afff5958 function=rh_timer_func expires=471675 [timeout=24] cpu=3 idx=35 flags=
          <idle>-0     [003] ..s.  5016.556444: timer_expire_exit: timer=afff5958
          <idle>-0     [002] d...  5016.606386: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5016.606414: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5016.606419: do_timer: [+] jiffies_64: 4295438951, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5016.606421: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.s.  5016.606440: timer_expire_entry: timer=82913086 function=delayed_work_timer_fn now=471656
          <idle>-0     [002] d.s.  5016.606447: timer_expire_exit: timer=82913086
          <idle>-0     [003] d.h.  5016.686389: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5016.686421: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5016.686425: do_timer: [+] jiffies_64: 4295438959, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5016.686427: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d.s.  5016.686441: timer_expire_entry: timer=5486e300 function=delayed_work_timer_fn now=471664
          <idle>-0     [003] dns.  5016.686451: timer_expire_exit: timer=5486e300
     kworker/3:0-1692  [003] d...  5016.686495: timer_start: timer=c3a74df7 function=bcm2835_sdhost_timeout expires=472664 [timeout=1000] cpu=3 idx=152 flags=
     kworker/3:0-1692  [003] d...  5016.686578: timer_start: timer=5486e300 function=delayed_work_timer_fn expires=471764 [timeout=100] cpu=3 idx=78 flags=I
          <idle>-0     [002] d...  5016.747645: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5016.747672: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5016.747676: do_timer: [+] jiffies_64: 4295438965, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5016.747678: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d...  5016.806389: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5016.806415: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5016.806419: do_timer: [+] jiffies_64: 4295438971, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5016.806422: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5016.806438: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471676
          <idle>-0     [003] d.s.  5016.806443: timer_start: timer=afff5958 function=rh_timer_func expires=471700 [timeout=24] cpu=3 idx=60 flags=
          <idle>-0     [003] ..s.  5016.806445: timer_expire_exit: timer=afff5958
          <idle>-0     [003] d.h.  5017.006395: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5017.006429: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5017.006434: do_timer: [+] jiffies_64: 4295438991, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5017.006436: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5017.006450: timer_expire_entry: timer=7c52097c function=pm_suspend_timer_fn now=471696
          <idle>-0     [003] d.s.  5017.006456: timer_start: timer=7c52097c function=pm_suspend_timer_fn expires=471991 [timeout=295] cpu=3 idx=82 flags=
          <idle>-0     [003] ..s.  5017.006459: timer_expire_exit: timer=7c52097c
          <idle>-0     [003] d...  5017.056393: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5017.056419: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5017.056423: do_timer: [+] jiffies_64: 4295438996, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5017.056426: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5017.056442: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471701
          <idle>-0     [003] d.s.  5017.056447: timer_start: timer=afff5958 function=rh_timer_func expires=471725 [timeout=24] cpu=3 idx=21 flags=
          <idle>-0     [003] ..s.  5017.056450: timer_expire_exit: timer=afff5958
 brcmf_wdog/mmc1-249   [002] d...  5017.146440: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472710 [timeout=1000] cpu=2 idx=155 flags=
 brcmf_wdog/mmc1-249   [002] d...  5017.146499: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472710 [timeout=1000] cpu=2 idx=155 flags=
 brcmf_wdog/mmc1-249   [002] d...  5017.146538: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472710 [timeout=1000] cpu=2 idx=155 flags=
##### CPU 1 buffer started ####
          <idle>-0     [001] d.h.  5017.166432: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.166436: do_timer: [+] jiffies_64: 4295439007, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.166439: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] ..s.  5017.166452: timer_expire_entry: timer=c492317f function=process_timeout now=471712
          <idle>-0     [001] .ns.  5017.166461: timer_expire_exit: timer=c492317f
          <idle>-0     [001] .ns.  5017.166465: timer_expire_entry: timer=49d81489 function=writeout_period now=471712
          <idle>-0     [001] dns.  5017.166471: timer_start: timer=49d81489 function=writeout_period expires=472006 [timeout=294] cpu=1 idx=84 flags=D
          <idle>-0     [001] .ns.  5017.166473: timer_expire_exit: timer=49d81489
     irq/86-mmc1-80    [001] d...  5017.202350: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472715 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.202408: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472715 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.202457: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472715 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.210670: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472716 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.210718: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472716 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.210765: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472716 [timeout=1000] cpu=1 idx=155 flags=
          <idle>-0     [001] d.h.  5017.216401: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.216446: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.216451: do_timer: [+] jiffies_64: 4295439012, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.216454: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
       rcu_sched-10    [001] ....  5017.216536: timer_init: timer=c492317f
       rcu_sched-10    [001] d...  5017.216540: timer_start: timer=c492317f function=process_timeout expires=471718 [timeout=1] cpu=1 idx=0 flags=
          <idle>-0     [001] d.h.  5017.226400: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.226445: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.226450: do_timer: [+] jiffies_64: 4295439013, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.226452: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.h.  5017.236398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.236429: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.236433: do_timer: [+] jiffies_64: 4295439014, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.236436: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] ..s.  5017.236449: timer_expire_entry: timer=c492317f function=process_timeout now=471719
          <idle>-0     [001] .ns.  5017.236460: timer_expire_exit: timer=c492317f
       rcu_sched-10    [001] ....  5017.236500: timer_init: timer=c492317f
       rcu_sched-10    [001] d...  5017.236504: timer_start: timer=c492317f function=process_timeout expires=471720 [timeout=1] cpu=1 idx=0 flags=
          <idle>-0     [001] d.h.  5017.246398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.246429: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.246433: do_timer: [+] jiffies_64: 4295439015, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.246435: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.h.  5017.256399: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.256430: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.256434: do_timer: [+] jiffies_64: 4295439016, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.256437: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
 brcmf_wdog/mmc1-249   [002] d...  5017.256439: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472720 [timeout=999] cpu=2 idx=155 flags=
          <idle>-0     [001] ..s.  5017.256451: timer_expire_entry: timer=c492317f function=process_timeout now=471721
          <idle>-0     [001] .ns.  5017.256459: timer_expire_exit: timer=c492317f
       rcu_sched-10    [001] ....  5017.256488: timer_init: timer=c492317f
       rcu_sched-10    [001] d...  5017.256491: timer_start: timer=c492317f function=process_timeout expires=471722 [timeout=1] cpu=1 idx=0 flags=
 brcmf_wdog/mmc1-249   [002] d...  5017.256491: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472721 [timeout=1000] cpu=2 idx=155 flags=
 brcmf_wdog/mmc1-249   [002] d...  5017.256537: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472721 [timeout=1000] cpu=2 idx=155 flags=
          <idle>-0     [001] d.h.  5017.266398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.266430: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.266435: do_timer: [+] jiffies_64: 4295439017, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.266437: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.h.  5017.276398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.276428: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.276432: do_timer: [+] jiffies_64: 4295439018, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.276434: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] ..s.  5017.276446: timer_expire_entry: timer=c492317f function=process_timeout now=471723
          <idle>-0     [001] .ns.  5017.276455: timer_expire_exit: timer=c492317f
       rcu_sched-10    [001] ....  5017.276488: timer_init: timer=c492317f
       rcu_sched-10    [001] d...  5017.276490: timer_start: timer=c492317f function=process_timeout expires=471724 [timeout=1] cpu=1 idx=0 flags=
          <idle>-0     [001] d.h.  5017.286398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.286429: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.286433: do_timer: [+] jiffies_64: 4295439019, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.286435: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.h.  5017.296398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.296428: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.296432: do_timer: [+] jiffies_64: 4295439020, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.296434: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] ..s.  5017.296446: timer_expire_entry: timer=c492317f function=process_timeout now=471725
          <idle>-0     [001] .ns.  5017.296455: timer_expire_exit: timer=c492317f
          <idle>-0     [003] d.h.  5017.306397: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5017.306430: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5017.306435: do_timer: [+] jiffies_64: 4295439021, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5017.306437: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5017.306452: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471726
          <idle>-0     [003] d.s.  5017.306458: timer_start: timer=afff5958 function=rh_timer_func expires=471750 [timeout=24] cpu=3 idx=46 flags=
          <idle>-0     [003] ..s.  5017.306460: timer_expire_exit: timer=afff5958
     irq/86-mmc1-80    [001] d...  5017.405222: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472735 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.405272: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472735 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.405320: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472735 [timeout=1000] cpu=1 idx=155 flags=
          <idle>-0     [001] d.h.  5017.406400: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.406433: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.406437: do_timer: [+] jiffies_64: 4295439031, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.406440: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
     irq/86-mmc1-80    [001] d...  5017.414065: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472736 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.414106: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472736 [timeout=1000] cpu=1 idx=155 flags=
     irq/86-mmc1-80    [001] d...  5017.414162: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472736 [timeout=1000] cpu=1 idx=155 flags=
          <idle>-0     [001] d.h.  5017.416403: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.s.  5017.416422: timer_expire_entry: timer=7308e2a5 function=delayed_work_timer_fn now=471736
          <idle>-0     [002] dns.  5017.416435: timer_expire_exit: timer=7308e2a5
          <idle>-0     [002] dns.  5017.416440: timer_expire_entry: timer=1850b75b function=delayed_work_timer_fn now=471736
          <idle>-0     [002] dns.  5017.416443: timer_expire_exit: timer=1850b75b
          <idle>-0     [001] d.h.  5017.416451: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.416457: do_timer: [+] jiffies_64: 4295439032, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.416459: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
     kworker/2:3-569   [002] d...  5017.416492: timer_start: timer=7308e2a5 function=delayed_work_timer_fn expires=473237 [timeout=1500] cpu=2 idx=138 flags=D|I
       rcu_sched-10    [002] ....  5017.416553: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5017.416556: timer_start: timer=c492317f function=process_timeout expires=471738 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [001] d.h.  5017.426404: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.426451: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.426456: do_timer: [+] jiffies_64: 4295439033, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.426459: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.h.  5017.436401: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.436435: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.436440: do_timer: [+] jiffies_64: 4295439034, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.436443: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.h.  5017.446400: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] ..s.  5017.446407: timer_expire_entry: timer=c492317f function=process_timeout now=471739
          <idle>-0     [002] .ns.  5017.446417: timer_expire_exit: timer=c492317f
          <idle>-0     [001] d.h.  5017.446433: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.446437: do_timer: [+] jiffies_64: 4295439035, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.446440: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
       rcu_sched-10    [002] ....  5017.446456: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5017.446459: timer_start: timer=c492317f function=process_timeout expires=471741 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [001] d.h.  5017.456400: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.456431: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.456435: do_timer: [+] jiffies_64: 4295439036, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.456437: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
 brcmf_wdog/mmc1-249   [002] d...  5017.456455: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472741 [timeout=1000] cpu=2 idx=155 flags=
 brcmf_wdog/mmc1-249   [002] d...  5017.456501: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472741 [timeout=1000] cpu=2 idx=155 flags=
 brcmf_wdog/mmc1-249   [002] d...  5017.456537: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472741 [timeout=1000] cpu=2 idx=155 flags=
          <idle>-0     [001] d.h.  5017.466400: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5017.466433: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.466437: do_timer: [+] jiffies_64: 4295439037, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.466440: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.h.  5017.476400: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] ..s.  5017.476406: timer_expire_entry: timer=c492317f function=process_timeout now=471742
          <idle>-0     [002] .ns.  5017.476415: timer_expire_exit: timer=c492317f
          <idle>-0     [001] d.h.  5017.476431: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5017.476435: do_timer: [+] jiffies_64: 4295439038, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5017.476437: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
       rcu_sched-10    [002] ....  5017.476445: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5017.476447: timer_start: timer=c492317f function=process_timeout expires=471744 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [002] d...  5017.496398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5017.496426: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5017.496431: do_timer: [+] jiffies_64: 4295439040, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5017.496434: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5017.496450: timer_expire_entry: timer=c492317f function=process_timeout now=471745
          <idle>-0     [002] .ns.  5017.496458: timer_expire_exit: timer=c492317f
       rcu_sched-10    [002] ....  5017.496492: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5017.496495: timer_start: timer=c492317f function=process_timeout expires=471746 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [002] d...  5017.516398: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5017.516425: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5017.516429: do_timer: [+] jiffies_64: 4295439042, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5017.516432: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5017.516446: timer_expire_entry: timer=c492317f function=process_timeout now=471747
          <idle>-0     [002] .ns.  5017.516455: timer_expire_exit: timer=c492317f
          <idle>-0     [003] d.h.  5017.556399: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5017.556430: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5017.556435: do_timer: [+] jiffies_64: 4295439046, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5017.556437: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5017.556451: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471751
          <idle>-0     [003] d.s.  5017.556456: timer_start: timer=afff5958 function=rh_timer_func expires=471775 [timeout=24] cpu=3 idx=7 flags=
          <idle>-0     [003] ..s.  5017.556458: timer_expire_exit: timer=afff5958
          <idle>-0     [003] d...  5017.566399: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5017.566423: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5017.566427: do_timer: [+] jiffies_64: 4295439047, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5017.566430: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d.s.  5017.566443: timer_expire_entry: timer=040c946c function=delayed_work_timer_fn now=471752
          <idle>-0     [003] dns.  5017.566455: timer_expire_exit: timer=040c946c
     kworker/3:0-1692  [003] ....  5017.566514: timer_init: timer=695447ef
     kworker/3:0-1692  [003] d...  5017.566517: timer_start: timer=695447ef function=process_timeout expires=472252 [timeout=500] cpu=3 idx=0 flags=
     kworker/3:0-1692  [003] ....  5017.566637: timer_init: timer=8e3156d1
     kworker/3:0-1692  [003] d...  5017.566640: timer_start: timer=8e3156d1 function=process_timeout expires=472252 [timeout=500] cpu=3 idx=0 flags=
     kworker/3:0-1692  [003] ....  5017.566744: timer_init: timer=695447ef
     kworker/3:0-1692  [003] d...  5017.566747: timer_start: timer=695447ef function=process_timeout expires=472252 [timeout=500] cpu=3 idx=0 flags=
     kworker/3:0-1692  [003] ....  5017.566850: timer_init: timer=8e3156d1
     kworker/3:0-1692  [003] d...  5017.566853: timer_start: timer=8e3156d1 function=process_timeout expires=472252 [timeout=500] cpu=3 idx=0 flags=
     kworker/3:0-1692  [003] d...  5017.566946: timer_start: timer=040c946c function=delayed_work_timer_fn expires=471952 [timeout=200] cpu=3 idx=89 flags=I
          <idle>-0     [003] d...  5017.726401: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5017.726429: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5017.726433: do_timer: [+] jiffies_64: 4295439063, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5017.726436: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d.s.  5017.726452: timer_expire_entry: timer=5486e300 function=delayed_work_timer_fn now=471768
          <idle>-0     [003] dns.  5017.726461: timer_expire_exit: timer=5486e300
     kworker/3:0-1692  [003] d...  5017.726507: timer_start: timer=c3a74df7 function=bcm2835_sdhost_timeout expires=472768 [timeout=1000] cpu=3 idx=154 flags=
     kworker/3:0-1692  [003] d...  5017.726590: timer_start: timer=5486e300 function=delayed_work_timer_fn expires=471868 [timeout=100] cpu=3 idx=91 flags=I
          <idle>-0     [002] d.h.  5017.736404: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5017.736439: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5017.736443: do_timer: [+] jiffies_64: 4295439064, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5017.736446: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
       rcu_sched-10    [002] ....  5017.736501: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5017.736504: timer_start: timer=c492317f function=process_timeout expires=471770 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [002] d.h.  5017.746404: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5017.746435: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5017.746439: do_timer: [+] jiffies_64: 4295439065, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5017.746442: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5017.756404: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5017.756438: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5017.756442: do_timer: [+] jiffies_64: 4295439066, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5017.756446: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5017.756461: timer_expire_entry: timer=c492317f function=process_timeout now=471771
          <idle>-0     [002] .ns.  5017.756470: timer_expire_exit: timer=c492317f
       rcu_sched-10    [002] ....  5017.756504: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5017.756506: timer_start: timer=c492317f function=process_timeout expires=471772 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [002] d.h.  5017.766404: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5017.766435: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5017.766439: do_timer: [+] jiffies_64: 4295439067, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5017.766442: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d.h.  5017.776404: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5017.776435: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5017.776438: do_timer: [+] jiffies_64: 4295439068, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5017.776441: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5017.776453: timer_expire_entry: timer=c492317f function=process_timeout now=471773
          <idle>-0     [002] .ns.  5017.776462: timer_expire_exit: timer=c492317f
       rcu_sched-10    [002] ....  5017.776488: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5017.776490: timer_start: timer=c492317f function=process_timeout expires=471774 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [002] d...  5017.796402: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5017.796427: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5017.796431: do_timer: [+] jiffies_64: 4295439070, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5017.796433: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5017.796448: timer_expire_entry: timer=c492317f function=process_timeout now=471775
          <idle>-0     [002] .ns.  5017.796456: timer_expire_exit: timer=c492317f
          <idle>-0     [003] d...  5017.806402: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5017.806428: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5017.806432: do_timer: [+] jiffies_64: 4295439071, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5017.806435: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5017.806452: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471776
          <idle>-0     [003] d.s.  5017.806458: timer_start: timer=afff5958 function=rh_timer_func expires=471800 [timeout=24] cpu=3 idx=32 flags=
          <idle>-0     [003] ..s.  5017.806460: timer_expire_exit: timer=afff5958
          <idle>-0     [001] d...  5017.916999: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d...  5017.917028: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d...  5017.917032: do_timer: [+] jiffies_64: 4295439082, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d...  5017.917035: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d...  5017.927653: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5017.927680: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5017.927684: do_timer: [+] jiffies_64: 4295439083, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5017.927687: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d.h.  5018.056405: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5018.056436: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5018.056440: do_timer: [+] jiffies_64: 4295439096, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5018.056443: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5018.056456: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471801
          <idle>-0     [003] d.s.  5018.056461: timer_start: timer=afff5958 function=rh_timer_func expires=471825 [timeout=24] cpu=3 idx=57 flags=
          <idle>-0     [003] ..s.  5018.056463: timer_expire_exit: timer=afff5958
          <idle>-0     [001] d...  5018.206409: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d...  5018.206436: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d...  5018.206441: do_timer: [+] jiffies_64: 4295439111, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d...  5018.206443: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d.s.  5018.206460: timer_expire_entry: timer=8f21cb41 function=delayed_work_timer_fn now=471816
          <idle>-0     [001] dns.  5018.206470: timer_expire_exit: timer=8f21cb41
     kworker/1:1-1696  [001] d...  5018.206575: timer_start: timer=8f21cb41 function=delayed_work_timer_fn expires=472016 [timeout=200] cpu=1 idx=97 flags=I
          <idle>-0     [001] d.h.  5018.226414: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5018.226456: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5018.226461: do_timer: [+] jiffies_64: 4295439113, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5018.226464: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
       rcu_sched-10    [002] ....  5018.226552: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5018.226558: timer_start: timer=c492317f function=process_timeout expires=471819 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [001] d.h.  5018.236410: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5018.236442: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5018.236446: do_timer: [+] jiffies_64: 4295439114, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5018.236448: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d...  5018.246408: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.246434: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.246439: do_timer: [+] jiffies_64: 4295439115, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.246441: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5018.246458: timer_expire_entry: timer=c492317f function=process_timeout now=471820
          <idle>-0     [002] .ns.  5018.246468: timer_expire_exit: timer=c492317f
       rcu_sched-10    [002] ....  5018.246513: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5018.246515: timer_start: timer=c492317f function=process_timeout expires=471821 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [001] d.h.  5018.256411: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5018.256442: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5018.256446: do_timer: [+] jiffies_64: 4295439116, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5018.256449: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d...  5018.266408: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.266433: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.266437: do_timer: [+] jiffies_64: 4295439117, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.266440: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5018.266455: timer_expire_entry: timer=c492317f function=process_timeout now=471822
          <idle>-0     [002] .ns.  5018.266463: timer_expire_exit: timer=c492317f
          <idle>-0     [003] d.h.  5018.306408: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5018.306438: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5018.306442: do_timer: [+] jiffies_64: 4295439121, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5018.306445: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5018.306458: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471826
          <idle>-0     [003] d.s.  5018.306464: timer_start: timer=afff5958 function=rh_timer_func expires=471850 [timeout=24] cpu=3 idx=18 flags=
          <idle>-0     [003] ..s.  5018.306467: timer_expire_exit: timer=afff5958
          <idle>-0     [001] d.h.  5018.336415: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5018.336455: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5018.336460: do_timer: [+] jiffies_64: 4295439124, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5018.336462: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
       rcu_sched-10    [002] ....  5018.336538: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5018.336543: timer_start: timer=c492317f function=process_timeout expires=471830 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [001] d.h.  5018.346412: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5018.346444: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5018.346448: do_timer: [+] jiffies_64: 4295439125, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5018.346450: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d...  5018.356409: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.356435: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.356439: do_timer: [+] jiffies_64: 4295439126, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.356441: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5018.356457: timer_expire_entry: timer=c492317f function=process_timeout now=471831
          <idle>-0     [002] .ns.  5018.356466: timer_expire_exit: timer=c492317f
       rcu_sched-10    [002] ....  5018.356505: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5018.356507: timer_start: timer=c492317f function=process_timeout expires=471832 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [001] d.h.  5018.366411: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d.h.  5018.366444: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d.h.  5018.366448: do_timer: [+] jiffies_64: 4295439127, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d.h.  5018.366451: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d...  5018.376409: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.376434: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.376438: do_timer: [+] jiffies_64: 4295439128, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.376440: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5018.376454: timer_expire_entry: timer=c492317f function=process_timeout now=471833
          <idle>-0     [002] .ns.  5018.376463: timer_expire_exit: timer=c492317f
       rcu_sched-10    [002] ....  5018.376493: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5018.376495: timer_start: timer=c492317f function=process_timeout expires=471834 [timeout=1] cpu=2 idx=0 flags=
          <idle>-0     [002] d...  5018.396409: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.396434: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.396438: do_timer: [+] jiffies_64: 4295439130, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.396440: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] ..s.  5018.396455: timer_expire_entry: timer=c492317f function=process_timeout now=471835
          <idle>-0     [002] .ns.  5018.396463: timer_expire_exit: timer=c492317f
          <idle>-0     [002] d.h.  5018.416417: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5018.416452: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => finish_task_switch
 => finish_task_switch
 => __schedule
 => schedule_idle
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5018.416456: do_timer: [+] jiffies_64: 4295439132, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5018.416458: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d...  5018.427788: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.427813: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.427817: do_timer: [+] jiffies_64: 4295439133, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.427820: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [001] d...  5018.437750: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [001] d...  5018.437777: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [001] d...  5018.437781: do_timer: [+] jiffies_64: 4295439134, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [001] d...  5018.437784: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d.h.  5018.556412: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d.h.  5018.556446: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d.h.  5018.556450: do_timer: [+] jiffies_64: 4295439146, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d.h.  5018.556453: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5018.556470: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471851
          <idle>-0     [003] d.s.  5018.556478: timer_start: timer=afff5958 function=rh_timer_func expires=471875 [timeout=24] cpu=3 idx=43 flags=
          <idle>-0     [003] ..s.  5018.556481: timer_expire_exit: timer=afff5958
          <idle>-0     [003] d...  5018.709549: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5018.709574: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5018.709578: do_timer: [+] jiffies_64: 4295439161, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5018.709581: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [002] d...  5018.748052: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.748079: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.748084: do_timer: [+] jiffies_64: 4295439165, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.748086: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d...  5018.766413: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5018.766440: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5018.766444: do_timer: [+] jiffies_64: 4295439167, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5018.766446: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] d.s.  5018.766464: timer_expire_entry: timer=5486e300 function=delayed_work_timer_fn now=471872
          <idle>-0     [003] dns.  5018.766475: timer_expire_exit: timer=5486e300
     kworker/3:0-1692  [003] d...  5018.766525: timer_start: timer=c3a74df7 function=bcm2835_sdhost_timeout expires=472872 [timeout=1000] cpu=3 idx=156 flags=
     kworker/3:0-1692  [003] d...  5018.766612: timer_start: timer=5486e300 function=delayed_work_timer_fn expires=471972 [timeout=100] cpu=3 idx=104 flags=I
          <idle>-0     [003] d...  5018.806414: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [003] d...  5018.806440: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [003] d...  5018.806445: do_timer: [+] jiffies_64: 4295439171, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [003] d...  5018.806447: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [003] ..s.  5018.806464: timer_expire_entry: timer=afff5958 function=rh_timer_func now=471876
          <idle>-0     [003] d.s.  5018.806468: timer_start: timer=afff5958 function=rh_timer_func expires=471900 [timeout=24] cpu=3 idx=4 flags=
          <idle>-0     [003] ..s.  5018.806471: timer_expire_exit: timer=afff5958
          <idle>-0     [002] d.h.  5018.816432: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d.h.  5018.816467: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => finish_task_switch
 => finish_task_switch
 => __schedule
 => schedule_idle
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d.h.  5018.816471: do_timer: [+] jiffies_64: 4295439172, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d.h.  5018.816474: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
##### CPU 0 buffer started ####
          <idle>-0     [000] d.h.  5018.848403: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.848406: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.848490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.848495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.848498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.856363: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.856368: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.856371: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d...  5018.856487: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [000] d...  5018.856511: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
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
          <idle>-0     [000] d...  5018.856514: do_timer: [+] jiffies_64: 4295439176, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [000] d...  5018.856517: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [000] d.h.  5018.856524: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.856529: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.856532: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.864363: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.864368: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.864371: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.864490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.864495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.864498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d...  5018.872361: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [000] d...  5018.872384: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
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
          <idle>-0     [000] d...  5018.872387: do_timer: [+] jiffies_64: 4295439177, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [000] d...  5018.872390: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [000] d.h.  5018.872397: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.872401: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.872405: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.872490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.872495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.872498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d...  5018.880360: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [000] d...  5018.880384: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
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
          <idle>-0     [000] d...  5018.880387: do_timer: [+] jiffies_64: 4295439178, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [000] d...  5018.880390: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [000] d.h.  5018.880397: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.880401: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.880405: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.880490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.880495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.880498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d...  5018.888360: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [000] d...  5018.888384: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
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
          <idle>-0     [000] d...  5018.888387: do_timer: [+] jiffies_64: 4295439179, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [000] d...  5018.888390: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [000] d.h.  5018.888397: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.888401: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.888404: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.888490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.888495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.888498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.896363: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.896368: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.896371: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d...  5018.896487: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [000] d...  5018.896511: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
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
          <idle>-0     [000] d...  5018.896514: do_timer: [+] jiffies_64: 4295439180, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [000] d...  5018.896517: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [000] d.h.  5018.896524: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.896528: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.896531: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.904363: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.904368: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.904371: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.904490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.904495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.904498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d...  5018.912360: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [000] d...  5018.912384: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
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
          <idle>-0     [000] d...  5018.912387: do_timer: [+] jiffies_64: 4295439181, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [000] d...  5018.912390: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [000] d.h.  5018.912397: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.912401: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.912404: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.912490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.912495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.912498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [002] d...  5018.916461: do_timer <-tick_do_update_jiffies64.part.0
          <idle>-0     [002] d...  5018.916486: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_irq_enter
 => irq_enter
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => arch_cpu_idle
 => arch_cpu_idle
 => default_idle_call
 => do_idle
 => cpu_startup_entry
 => secondary_start_kernel
 => 0x001026ec
          <idle>-0     [002] d...  5018.916490: do_timer: [+] jiffies_64: 4295439182, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
          <idle>-0     [002] d...  5018.916492: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
          <idle>-0     [000] d.h.  5018.919091: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
     irq/86-mmc1-80    [001] d...  5018.919213: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=1 idx=155 flags=
          <idle>-0     [000] d.h.  5018.919226: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
     irq/86-mmc1-80    [001] d...  5018.919261: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=1 idx=157 flags=
          <idle>-0     [000] d.h.  5018.919280: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
     irq/86-mmc1-80    [001] d...  5018.919312: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=1 idx=157 flags=
          <idle>-0     [000] d.h.  5018.919329: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.919337: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d...  5018.919399: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.919411: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.920364: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.920369: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.920373: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.920490: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.920495: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.920498: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d...  5018.922455: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.922466: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d...  5018.922485: timer_start: timer=a787416c function=brcmf_sdio_watchdog [brcmfmac] expires=471888 [timeout=1] cpu=0 idx=62 flags=
    kworker/u8:0-1599  [000] d...  5018.922504: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.922521: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d...  5018.922556: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.922573: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d.s.  5018.922675: timer_start: timer=4ccf3b56 function=tcp_delack_timer expires=471891 [timeout=4] cpu=0 idx=61 flags=
    kworker/u8:0-1599  [000] d...  5018.922691: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.922709: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
            sshd-1243  [000] d...  5018.923207: timer_start: timer=c2892743 function=tcp_write_timer expires=471910 [timeout=23] cpu=0 idx=16 flags=
    kworker/u8:0-1599  [000] d...  5018.923271: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472887 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.923293: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.923331: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
           <...>-1717  [003] d.h.  5018.926429: do_timer <-tick_do_update_jiffies64.part.0
           <...>-1717  [003] d.h.  5018.926490: <stack trace>
 => do_timer
 => tick_do_update_jiffies64.part.0
 => tick_sched_do_timer
 => tick_sched_timer
 => __hrtimer_run_queues
 => hrtimer_interrupt
 => arch_timer_handler_phys
 => handle_percpu_devid_irq
 => generic_handle_irq
 => __handle_domain_irq
 => bcm2836_arm_irqchip_handle_irq
 => __irq_svc
 => filemap_map_pages
 => filemap_map_pages
 => handle_mm_fault
 => do_page_fault
 => do_DataAbort
 => __dabt_usr
 => 0x76f42d80
           <...>-1717  [003] d.h.  5018.926499: do_timer: [+] jiffies_64: 4295439183, caller: tick_do_update_jiffies64.part.0+0xb8/0x19c
           <...>-1717  [003] d.h.  5018.926503: do_timer: [+] MAX_JIFFY_OFFSET : 1073741822 
       rcu_sched-10    [002] ....  5018.926590: timer_init: timer=c492317f
       rcu_sched-10    [002] d...  5018.926601: timer_start: timer=c492317f function=process_timeout expires=471889 [timeout=1] cpu=2 idx=0 flags=
    kworker/0:1H-84    [000] d...  5018.927643: timer_start: timer=c3a74df7 function=bcm2835_sdhost_timeout expires=472888 [timeout=1000] cpu=0 idx=157 flags=
    kworker/0:1H-84    [000] d.h.  5018.927677: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
   rs:main Q:Reg-422   [000] d...  5018.927758: timer_start: timer=ba65f256 function=commit_timeout expires=472400 [timeout=512] cpu=0 idx=142 flags=
     irq/86-mmc1-80    [001] d...  5018.927830: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472888 [timeout=1000] cpu=1 idx=157 flags=
          <idle>-0     [000] d.h.  5018.927860: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
     irq/86-mmc1-80    [001] d...  5018.927910: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472888 [timeout=1000] cpu=1 idx=157 flags=
          <idle>-0     [000] d.h.  5018.927932: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
     irq/86-mmc1-80    [001] d...  5018.927968: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472888 [timeout=1000] cpu=1 idx=157 flags=
          <idle>-0     [000] d.h.  5018.927986: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.927995: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d...  5018.928085: timer_start: timer=a787416c function=brcmf_sdio_watchdog [brcmfmac] expires=471889 [timeout=1] cpu=0 idx=17 flags=
    kworker/u8:0-1599  [000] d...  5018.928105: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472888 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.928124: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d...  5018.928162: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472888 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.928180: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
    kworker/u8:0-1599  [000] d...  5018.928301: timer_start: timer=2e3415dd function=bcm2835_mmc_timeout_timer expires=472888 [timeout=1000] cpu=0 idx=157 flags=
    kworker/u8:0-1599  [000] d.h.  5018.928320: __handle_irq_event_percpu: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.928380: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.928389: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.928394: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.928492: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.928498: __handle_irq_event_percpu: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.928506: __handle_irq_event_percpu: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.930622: __handle_irq_event_percpu: [+] irq: [44] handler: bcm2835_dma_callback+0x0/0x128 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.  5018.931531: __handle_irq_event_percpu: [+] irq: [80] handler: bcm2835_sdhost_irq+0x0/0x474 caller: (handle_irq_event_percpu) 
    kworker/0:1H-84    [000] d...  5018.931701: timer_start: timer=c3a74df7 function=bcm2835_sdhost_timeout expires=472888 [timeout=1000] cpu=0 idx=157 flags=
    kworker/0:1H-84    [000] d...  5018.932015: timer_start: timer=c3a74df7 function=bcm2835_sdhost_timeout expires=472888 [timeout=1000] cpu=0 idx=157 flags=
