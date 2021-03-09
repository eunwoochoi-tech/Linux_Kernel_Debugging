# tracer: function_graph
#
# CPU  DURATION                  FUNCTION CALLS
# |     |   |                     |   |   |   |
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 2)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=002 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.719 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 2)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=D ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   sshd-1213    =>  kworker-1488 
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 2)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 1)               |  /* sched_wakeup: comm=bash pid=1260 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=irq_timer_trace prev_pid=1668 prev_prio=120 prev_state=Z ==> next_comm=bash next_pid=1260 next_prio=120 */
 ------------------------------------------
 2)   sshd-1213    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 1)  irq_tim-1668  =>   bash-1260   
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=bash prev_pid=1260 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.604 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 12.656 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000 */
 ------------------------------------------
 2)   sshd-1213    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.928 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 ------------------------------------------
 2)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 0)   4.583 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=574 next_prio=120 */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>   ksoftir-9   
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)   ksoftir-9    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 1)   bash-1260    =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 1)               |  /* sched_wakeup: comm=kworker/1:1 pid=1643 prio=120 target_cpu=001 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1643 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 ------------------------------------------
 1)    <idle>-0    =>  kworker-1643 
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=kworker/1:1 prev_pid=1643 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)  rs:main-424   =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 1)  kworker-1643  =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=775 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=mysqld pid=772 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=mysqld pid=781 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-775  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120 */
 ------------------------------------------
 1)   mysqld-775   =>   mysqld-772  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=781 next_prio=120 */
 ------------------------------------------
 1)   mysqld-772   =>   mysqld-781  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=781 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 1)   mysqld-781   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=777 prio=120 target_cpu=002 */
 2)               |  /* sched_wakeup: comm=mysqld pid=776 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-777  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120 */
 ------------------------------------------
 2)   mysqld-777   =>   mysqld-776  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.052 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   mysqld-776   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.198 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.271 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.573 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.271 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 261.771 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.156 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.282 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.739 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=774 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=774 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-774  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 1)   mysqld-774   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=mysqld pid=804 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=804 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   mysqld-804  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=804 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.114 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.792 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.688 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=819 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=819 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-819  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=819 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)   mysqld-819   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_wakeup: comm=kworker/1:1 pid=1643 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1643 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 ------------------------------------------
 1)    <idle>-0    =>  kworker-1643 
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=kworker/1:1 prev_pid=1643 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=574 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)    <idle>-0    =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)  kworker-1643  =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=kworker/1:1 pid=1643 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1643 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 ------------------------------------------
 1)    <idle>-0    =>  kworker-1643 
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=kworker/1:1 prev_pid=1643 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)  kworker-1643  =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=kworker/1:1 pid=1643 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1643 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 ------------------------------------------
 1)    <idle>-0    =>  kworker-1643 
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=kworker/1:1 prev_pid=1643 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)  kworker-1643  =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=kworker/1:1 pid=1643 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1643 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 ------------------------------------------
 1)    <idle>-0    =>  kworker-1643 
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=kworker/1:1 prev_pid=1643 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)  kworker-1643  =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=kworker/1:1 pid=1643 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:1 next_pid=1643 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>  kworker-1643 
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=kworker/1:1 prev_pid=1643 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 3)   mysqld-804   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=lxpanel pid=1030 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=1030 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>  lxpanel-1030 
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=lxpanel prev_pid=1030 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 3)  lxpanel-1030  =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=mysqld pid=811 prio=120 target_cpu=003 */
 3)               |  /* sched_wakeup: comm=mysqld pid=782 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=782 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   mysqld-782  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=782 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=811 next_prio=120 */
 ------------------------------------------
 3)   mysqld-782   =>   mysqld-811  
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=mysqld pid=782 prio=120 target_cpu=003 */
 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=811 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=782 next_prio=120 */
 ------------------------------------------
 3)   mysqld-811   =>   mysqld-782  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=782 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=gmain pid=966 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=966 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   gmain-966   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=gmain prev_pid=966 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 3)   mysqld-782   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=mysqld pid=779 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=779 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   mysqld-779  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=779 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   gmain-966    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=778 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-778  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   mysqld-778   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=574 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=773 prio=120 target_cpu=002 */
 2)               |  /* sched_wakeup: comm=mysqld pid=780 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=780 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-780  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=780 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=773 next_prio=120 */
 ------------------------------------------
 2)   mysqld-780   =>   mysqld-773  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   mysqld-773   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)  kworker-1643  =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=775 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=mysqld pid=772 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=mysqld pid=781 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-775  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120 */
 ------------------------------------------
 1)   mysqld-775   =>   mysqld-772  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=781 next_prio=120 */
 ------------------------------------------
 1)   mysqld-772   =>   mysqld-781  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=781 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=777 prio=120 target_cpu=002 */
 2)               |  /* sched_wakeup: comm=mysqld pid=776 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-777  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120 */
 ------------------------------------------
 2)   mysqld-777   =>   mysqld-776  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)   mysqld-781   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=774 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=rtkit-daemon pid=1087 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rtkit-daemon next_pid=1087 next_prio=120 */
 0)               |  /* sched_wakeup: comm=rtkit-daemon pid=1088 prio=0 target_cpu=000 */
 ------------------------------------------
 1)    <idle>-0    =>  rtkit-d-1087 
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=rtkit-daemon prev_pid=1087 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=774 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rtkit-daemon next_pid=1088 next_prio=0 */
 ------------------------------------------
 1)  rtkit-d-1087  =>   mysqld-774  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  rtkit-d-1088 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=rtkit-daemon prev_pid=1088 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  rtkit-d-1088  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   mysqld-776   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=574 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/0:0 pid=1607 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:0 next_pid=1607 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1607 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/0:0 prev_pid=1607 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1607  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)   mysqld-774   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=806 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=806 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-806  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=806 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.989 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.094 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.365 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.729 us    |  bcm2835_mmc_irq();
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.479 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 308.542 us  |  }
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 2)   irq/86--81   =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.261 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=D ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.020 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.615 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.323 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 1)   mysqld-806   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=bash pid=1260 prio=120 target_cpu=001 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1260 next_prio=120 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 ------------------------------------------
 1)    <idle>-0    =>   bash-1260   
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=bash prev_pid=1260 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.208 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.479 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.500 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.792 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.916 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.469 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.219 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 244.948 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.583 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.073 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.688 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=574 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)   bash-1260    =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=805 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=mysqld pid=807 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=805 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-805  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=805 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=807 next_prio=120 */
 ------------------------------------------
 1)   mysqld-805   =>   mysqld-807  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=807 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)   rcu_sch-10   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 3)   mysqld-779   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_wakeup: comm=kworker/3:2 pid=1621 prio=120 target_cpu=003 */
 0)               |  /* sched_wakeup: comm=kworker/0:0 pid=1607 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:2 next_pid=1621 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:0 next_pid=1607 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1607 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 3)    <idle>-0    =>  kworker-1621 
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=ksoftirqd/3 pid=26 prio=120 target_cpu=003 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_wakeup: comm=kworker/3:0 pid=1445 prio=120 target_cpu=003 */
 0)               |  /* sched_switch: prev_comm=kworker/0:0 prev_pid=1607 prev_prio=120 prev_state=D ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 3)               |  /* sched_switch: prev_comm=kworker/3:2 prev_pid=1621 prev_prio=120 prev_state=D ==> next_comm=kworker/3:0 next_pid=1445 next_prio=120 */
 ------------------------------------------
 0)  kworker-1607  =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=17 name=3f00b880.mailbox */
 0)               |  /* [+] irq: [17] handler: bcm2835_mbox_irq+0x0/0x94 caller: (handle_irq_event_percpu)  */
 0)               |  bcm2835_mbox_irq() {
 ------------------------------------------
 3)  kworker-1621  =>  kworker-1445 
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=kworker/3:0 prev_pid=1445 prev_prio=120 prev_state=I ==> next_comm=ksoftirqd/3 next_pid=26 next_prio=120 */
 0)               |  /* sched_wakeup: comm=kworker/0:0 pid=1607 prio=120 target_cpu=000 */
 0) + 14.895 us   |  }
 0)               |  /* irq_handler_exit: irq=17 ret=handled */
 ------------------------------------------
 3)  kworker-1445  =>   ksoftir-26  
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=kworker/3:0 pid=1445 prio=120 target_cpu=003 */
 3)               |  /* sched_wakeup: comm=kworker/3:2 pid=1621 prio=120 target_cpu=003 */
 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=kworker/0:0 next_pid=1607 next_prio=120 */
 3)               |  /* sched_switch: prev_comm=ksoftirqd/3 prev_pid=26 prev_prio=120 prev_state=S ==> next_comm=kworker/3:0 next_pid=1445 next_prio=120 */
 ------------------------------------------
 3)   ksoftir-26   =>  kworker-1445 
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=kworker/3:0 prev_pid=1445 prev_prio=120 prev_state=I ==> next_comm=kworker/3:2 next_pid=1621 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>  kworker-1607 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/0:0 prev_pid=1607 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 3)  kworker-1445  =>  kworker-1621 
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=kworker/3:2 prev_pid=1621 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1607  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>   ksoftir-9   
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)   ksoftir-9    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.093 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.948 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 3)  kworker-1621  =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=mysqld pid=779 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=779 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   mysqld-779  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=779 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=778 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=778 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-778  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=778 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   mysqld-778   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.032 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)   5.208 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)   9.792 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.365 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.270 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 254.010 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.792 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.000 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.469 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.114 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 1)   mysqld-807   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=bash pid=1260 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1260 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   bash-1260   
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=bash prev_pid=1260 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.323 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.739 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.875 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.104 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.500 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.365 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.271 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 231.875 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.636 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.229 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.584 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 3)   mysqld-779   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=lxpanel pid=1030 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=lxpanel next_pid=1030 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>  lxpanel-1030 
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=lxpanel prev_pid=1030 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.167 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.687 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.584 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=780 prio=120 target_cpu=002 */
 2)               |  /* sched_wakeup: comm=mysqld pid=773 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=773 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-773  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=773 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=780 next_prio=120 */
 ------------------------------------------
 2)   mysqld-773   =>   mysqld-780  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=780 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=apache2 pid=682 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=apache2 next_pid=682 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  apache2-682  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=apache2 prev_pid=682 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  apache2-682   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   mysqld-780   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=803 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=803 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-803  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=803 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   mysqld-803   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=574 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)   bash-1260    =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=775 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=mysqld pid=772 prio=120 target_cpu=001 */
 1)               |  /* sched_wakeup: comm=mysqld pid=781 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=775 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-775  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=775 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=772 next_prio=120 */
 ------------------------------------------
 1)   mysqld-775   =>   mysqld-772  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=772 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=781 next_prio=120 */
 ------------------------------------------
 1)   mysqld-772   =>   mysqld-781  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=781 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mysqld pid=777 prio=120 target_cpu=002 */
 2)               |  /* sched_wakeup: comm=mysqld pid=776 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=777 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   mysqld-777  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=777 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=776 next_prio=120 */
 ------------------------------------------
 2)   mysqld-777   =>   mysqld-776  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mysqld prev_pid=776 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 1)   mysqld-781   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=774 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=774 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-774  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=774 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.281 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   mysqld-776   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.156 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.209 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.834 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.323 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 262.865 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.948 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.614 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.052 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.364 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.115 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.948 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=avahi-daemon pid=341 prio=120 target_cpu=002 */
 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=avahi-daemon next_pid=341 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.177 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>  avahi-d-341  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=avahi-daemon prev_pid=341 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)  avahi-d-341   =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=avahi-daemon next_pid=341 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.730 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.531 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>  avahi-d-341  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=avahi-daemon prev_pid=341 prev_prio=120 prev_state=R+ ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)  avahi-d-341   =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=002 */
 2) # 3434.583 us |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=avahi-daemon next_pid=341 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.771 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 12.500 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.406 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.104 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   irq/86--81   =>  avahi-d-341  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=avahi-daemon prev_pid=341 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)  avahi-d-341   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 3)  lxpanel-1030  =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=mysqld pid=804 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=804 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   mysqld-804  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=804 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.250 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.406 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.104 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.833 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.218 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 265.729 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   10.000 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.958 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.583 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 1)   mysqld-774   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=bash pid=1260 prio=120 target_cpu=001 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1260 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   bash-1260   
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=bash prev_pid=1260 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.427 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.583 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.875 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.740 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.605 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.260 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.271 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 231.927 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.531 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.916 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.739 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rngd next_pid=574 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.802 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.740 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.531 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=chronyd pid=488 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=chronyd next_pid=488 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  chronyd-488  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 2)               |  /* sched_switch: prev_comm=chronyd prev_pid=488 prev_prio=120 prev_state=S ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.989 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=migration/0 pid=12 prio=0 target_cpu=000 */
 ------------------------------------------
 2)  chronyd-488   =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=migration/2 pid=20 prio=0 target_cpu=002 */
 ------------------------------------------
 1)   bash-1260    =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=migration/1 pid=15 prio=0 target_cpu=001 */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0 */
 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=R+ ==> next_comm=migration/2 next_pid=20 next_prio=0 */
 ------------------------------------------
 3)   mysqld-804   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=migration/3 pid=25 prio=0 target_cpu=003 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/1 next_pid=15 next_prio=0 */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0 */
 ------------------------------------------
 2)  kworker-1638  =>   migrati-20  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>   migrati-12  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)   migrati-12   =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=migration/0 pid=12 prio=0 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=D ==> next_comm=migration/0 next_pid=12 next_prio=0 */
 ------------------------------------------
 1)    <idle>-0    =>   migrati-15  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   migrati-25  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   migrati-20   =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=migration/2 pid=20 prio=0 target_cpu=002 */
 ------------------------------------------
 1)   migrati-15   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=migration/1 pid=15 prio=0 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/1 next_pid=15 next_prio=0 */
 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=R+ ==> next_comm=migration/2 next_pid=20 next_prio=0 */
 ------------------------------------------
 3)   migrati-25   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=migration/3 pid=25 prio=0 target_cpu=003 */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0 */
 ------------------------------------------
 2)  kworker-1638  =>   migrati-20  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   migrati-25  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   migrati-15  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>   migrati-12  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)   migrati-12   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=migration/0 pid=12 prio=0 target_cpu=000 */
 ------------------------------------------
 2)   migrati-20   =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=migration/2 pid=20 prio=0 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0 */
 ------------------------------------------
 1)   migrati-15   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=migration/1 pid=15 prio=0 target_cpu=001 */
 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=R+ ==> next_comm=migration/2 next_pid=20 next_prio=0 */
 ------------------------------------------
 3)   migrati-25   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=migration/3 pid=25 prio=0 target_cpu=003 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/1 next_pid=15 next_prio=0 */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0 */
 ------------------------------------------
 2)  kworker-1638  =>   migrati-20  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   migrati-15  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   migrati-25  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>   migrati-12  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)   migrati-12   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=migration/0 pid=12 prio=0 target_cpu=000 */
 ------------------------------------------
 2)   migrati-20   =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=migration/2 pid=20 prio=0 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0 */
 ------------------------------------------
 1)   migrati-15   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=migration/1 pid=15 prio=0 target_cpu=001 */
 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=R+ ==> next_comm=migration/2 next_pid=20 next_prio=0 */
 ------------------------------------------
 3)   migrati-25   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=migration/3 pid=25 prio=0 target_cpu=003 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/1 next_pid=15 next_prio=0 */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0 */
 ------------------------------------------
 2)  kworker-1638  =>   migrati-20  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   migrati-25  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   migrati-15  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>   migrati-12  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)   migrati-12   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=migration/0 pid=12 prio=0 target_cpu=000 */
 ------------------------------------------
 2)   migrati-20   =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=migration/2 pid=20 prio=0 target_cpu=002 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/0 next_pid=12 next_prio=0 */
 ------------------------------------------
 1)   migrati-15   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=migration/1 pid=15 prio=0 target_cpu=001 */
 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=R+ ==> next_comm=migration/2 next_pid=20 next_prio=0 */
 ------------------------------------------
 3)   migrati-25   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=migration/3 pid=25 prio=0 target_cpu=003 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/1 next_pid=15 next_prio=0 */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=migration/3 next_pid=25 next_prio=0 */
 ------------------------------------------
 2)  kworker-1638  =>   migrati-20  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=migration/2 prev_pid=20 prev_prio=0 prev_state=S ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   migrati-25  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=migration/3 prev_pid=25 prev_prio=0 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>   migrati-12  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=migration/0 prev_pid=12 prev_prio=0 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   migrati-15  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=migration/1 prev_pid=15 prev_prio=0 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)   migrati-20   =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)   migrati-12   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.208 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.146 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.583 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  kworker-1638  =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)   migrati-15   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* sched_wakeup: comm=mysqld pid=819 prio=120 target_cpu=001 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=819 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   mysqld-819  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=mysqld prev_pid=819 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.156 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.688 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.583 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.291 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.740 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.125 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.364 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.375 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 249.219 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.791 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.948 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.104 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.114 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.896 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 ------------------------------------------
 0)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 1)   mysqld-819   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=bash pid=1260 prio=120 target_cpu=001 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1260 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 ------------------------------------------
 1)    <idle>-0    =>   bash-1260   
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=bash prev_pid=1260 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 15.833 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.417 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>  systemd-123  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.594 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.365 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.646 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rngd pid=574 prio=120 target_cpu=002 */
 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=rngd next_pid=574 next_prio=120 */
 0)   5.573 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.271 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    rngd-574   
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rngd prev_pid=574 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    rngd-574    =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 278.334 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.104 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.969 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.615 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 1)   bash-1260    =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 1)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=001 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 1)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 1)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=ksoftirqd/0 pid=9 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=ksoftirqd/0 next_pid=9 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>   ksoftir-9   
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=ksoftirqd/0 prev_pid=9 prev_prio=120 prev_state=S ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)   ksoftir-9    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.802 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.843 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.000 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=brcmf_wdog/mmc1 pid=253 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=253 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  brcmf_w-253  
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=253 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  brcmf_w-253   =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=mosquitto pid=457 prio=120 target_cpu=002 */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* sched_wakeup: comm=kworker/2:2 pid=1638 prio=120 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:2 next_pid=1638 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  kworker-1638 
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=kworker/2:2 prev_pid=1638 prev_prio=120 prev_state=I ==> next_comm=mosquitto next_pid=457 next_prio=120 */
 ------------------------------------------
 2)  kworker-1638  =>  mosquit-457  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=mosquitto prev_pid=457 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 1)               |  /* sched_wakeup: comm=rcu_sched pid=10 prio=120 target_cpu=001 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_sched next_pid=10 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   rcu_sch-10  
 ------------------------------------------

 1)               |  /* sched_switch: prev_comm=rcu_sched prev_pid=10 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 ------------------------------------------
 3)   migrati-25   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 3)               |  /* sched_wakeup: comm=mysqld pid=811 prio=120 target_cpu=003 */
 3)               |  /* sched_wakeup: comm=mysqld pid=782 prio=120 target_cpu=003 */
 3)               |  /* irq_handler_exit: irq=162 ret=handled */
 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=mysqld next_pid=782 next_prio=120 */
 ------------------------------------------
 3)    <idle>-0    =>   mysqld-782  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=782 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=811 next_prio=120 */
 ------------------------------------------
 3)   mysqld-782   =>   mysqld-811  
 ------------------------------------------

 3)               |  /* sched_wakeup: comm=mysqld pid=782 prio=120 target_cpu=003 */
 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=811 prev_prio=120 prev_state=S ==> next_comm=mysqld next_pid=782 next_prio=120 */
 ------------------------------------------
 3)   mysqld-811   =>   mysqld-782  
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=mysqld prev_pid=782 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   7.396 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  mosquit-457   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)   4.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.469 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.375 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 252.188 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_exit: irq=162 ret=handled */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.896 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.521 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.114 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.688 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:2 pid=1635 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:2 next_pid=1635 next_prio=120 */
 ------------------------------------------
 1)   rcu_sch-10   =>    <idle>-0   
 ------------------------------------------

 1)               |  /* sched_wakeup: comm=bash pid=1260 prio=120 target_cpu=001 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1635 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:2 prev_pid=1635 prev_prio=120 prev_state=I ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 1)               |  /* sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1260 next_prio=120 */
 ------------------------------------------
 0)  kworker-1635  =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=sshd pid=1213 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=1213 next_prio=120 */
 ------------------------------------------
 0)  kworker-1488  =>   sshd-1213   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=sshd prev_pid=1213 prev_prio=120 prev_state=S ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 ------------------------------------------
 0)   sshd-1213    =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 13.646 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   4.792 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120 */
 ------------------------------------------
 1)    <idle>-0    =>   bash-1260   
 ------------------------------------------

 1)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* irq_handler_entry: irq=162 name=arch_timer */
 2)               |  /* sched_wakeup: comm=in:imklog pid=422 prio=120 target_cpu=002 */
 1)               |  /* irq_handler_exit: irq=162 ret=handled */
 2)               |  /* irq_handler_exit: irq=162 ret=handled */
 ------------------------------------------
 0)  kworker-1488  =>    <idle>-0   
 ------------------------------------------

 0)               |  /* sched_wakeup: comm=systemd-journal pid=123 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=in:imklog next_pid=422 next_prio=120 */
 ------------------------------------------
 2)    <idle>-0    =>  in:imkl-422  
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=rs:main Q:Reg pid=424 prio=120 target_cpu=002 */
 ------------------------------------------
 3)   mysqld-782   =>    <idle>-0   
 ------------------------------------------

 3)               |  /* sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=1675 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=in:imklog prev_pid=422 prev_prio=120 prev_state=S ==> next_comm=rs:main Q:Reg next_pid=424 next_prio=120 */
 1)               |  /* sched_switch: prev_comm=bash prev_pid=1260 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120 */
 ------------------------------------------
 2)  in:imkl-422   =>  rs:main-424  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=rs:main Q:Reg prev_pid=424 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)    <idle>-0    =>  systemd-123  
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg */
 0)               |  /* [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_pcd */
 0)               |  /* [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=unhandled */
 0)               |  /* irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1 */
 0)               |  /* [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu)  */
 0)               |  /* irq_handler_exit: irq=56 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 13.177 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)  rs:main-424   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  bcm2835_mmc_thread_irq() {
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   9.740 us    |  bcm2835_mmc_irq();
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 10.938 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=D ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   6.354 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   5.104 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 ------------------------------------------
 2)   irq/86--81   =>    <idle>-0   
 ------------------------------------------

 2)               |  /* sched_wakeup: comm=irq/86-mmc1 pid=81 prio=49 target_cpu=002 */
 2)               |  /* sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=irq/86-mmc1 next_pid=81 next_prio=49 */
 ------------------------------------------
 2)    <idle>-0    =>   irq/86--81  
 ------------------------------------------

 2) ! 321.666 us  |  }
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=systemd-journal prev_pid=123 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u8:0 next_pid=1488 next_prio=120 */
 2)               |  /* sched_switch: prev_comm=irq/86-mmc1 prev_pid=81 prev_prio=49 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120 */
 ------------------------------------------
 0)  systemd-123   =>  kworker-1488 
 ------------------------------------------

 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.094 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0)   8.385 us    |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* irq_handler_entry: irq=86 name=mmc1 */
 0)               |  /* [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu)  */
 0) + 11.927 us   |  bcm2835_mmc_irq();
 0)               |  /* irq_handler_exit: irq=86 ret=handled */
 0)               |  /* sched_wakeup: comm=kworker/u8:0 pid=1488 prio=120 target_cpu=000 */
 0)               |  /* sched_switch: prev_comm=kworker/u8:0 prev_pid=1488 prev_prio=120 prev_state=I ==> next_comm=systemd-journal next_pid=123 next_prio=120 */
