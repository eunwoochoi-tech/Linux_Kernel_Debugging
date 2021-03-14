# tracer: function
#
# entries-in-buffer/entries-written: 6712/6712   #P:4
#
#                              _-----=> irqs-off
#                             / _----=> need-resched
#                            | / _---=> hardirq/softirq
#                            || / _--=> preempt-depth
#                            ||| /     delay
#           TASK-PID   CPU#  ||||    TIMESTAMP  FUNCTION
#              | |       |   ||||       |         |
          <idle>-0     [000] d.h.   551.393631: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.393641: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.393649: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.393652: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.393657: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.393667: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [001] d.h.   551.396705: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.396724: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.396760: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.396768: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.396775: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.396777: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.396783: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.396791: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.396854: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.396857: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.396869: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   551.396878: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.396881: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.396885: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.396887: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.396891: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.396897: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.399589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.399592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.399597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.399599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.399602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.399604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.399606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.399609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.399624: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.399716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.399719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.399722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.399724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.399727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.399728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.399730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.399733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.399744: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.402617: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.402619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.402620: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   551.402624: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.402626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.402628: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.402629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.402634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.402634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.402637: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.402640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] d.h.   551.402641: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.402641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.402643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.402643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.402645: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.402649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.402651: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   551.402651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.402654: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.402655: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.402657: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.402657: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.402658: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.402667: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.402668: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.402671: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.402672: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [003] ..s.   551.402674: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.402675: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.402676: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.402677: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [003] ..s.   551.402680: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.407589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.407592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.407595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.407597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.407600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.407602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.407603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.407606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.407613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.407715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.407718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.407721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.407723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.407726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.407727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.407729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.407732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.407738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.412617: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.412618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.412623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.412623: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.412623: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.412626: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.412626: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.412628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.412629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.412629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.412631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.412633: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.412633: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.412635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.412635: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.412636: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.412639: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.412639: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.412640: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.412640: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.412640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.412643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.412650: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.412651: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.412652: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.412653: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.412654: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.412656: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.412656: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.412657: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.412671: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.412673: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.412677: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.415588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.415592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.415595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.415597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.415600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.415602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.415603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.415606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.415613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.415715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.415718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.415721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.415723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.415726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.415727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.415729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.415732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.415738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.422618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.422618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.422618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   551.422622: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.422623: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.422624: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.422625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.422625: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.422627: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.422628: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.422628: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.422630: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.422632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   551.422632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   551.422634: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.422634: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.422635: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.422637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.422637: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.422639: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.422640: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.422641: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.422644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.422646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.422650: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.422651: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [003] ..s.   551.422652: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.422653: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.422656: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [003] ..s.   551.422658: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.422658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.422659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.422663: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.423588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.423592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.423595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.423597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.423600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.423602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.423604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.423607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.423613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.423715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.423718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.423721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.423723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.423726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.423728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.423729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.423732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.423738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.431588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.431591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.431594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.431596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.431599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.431601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.431602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.431605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.431612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.431715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.431718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.431721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.431722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.431725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.431727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.431729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.431732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.431738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.432617: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.432618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.432622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.432622: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.432622: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.432625: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.432625: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.432626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.432628: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.432628: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.432629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.432632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.432632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.432632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] ..s.   551.432634: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.432635: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.432636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] ..s.   551.432637: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.432638: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.432638: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.432639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.432639: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.432648: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.432650: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.432650: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.432652: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [003] ..s.   551.432672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.H.   551.432679: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.H.   551.432683: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.H.   551.432688: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.H.   551.432690: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.432708: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.432710: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.432717: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [001] dns.   551.432735: softirq_raise: vec=2 [action=NET_TX]
          <idle>-0     [000] d.h.   551.432741: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.432745: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.432749: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [001] .ns.   551.432750: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.432751: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [001] .ns.   551.432751: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.432754: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.432761: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [001] .ns.   551.432764: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   551.432765: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] .ns.   551.432770: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.432786: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.432789: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
     ksoftirqd/1-16    [001] ..s.   551.432792: softirq_entry: vec=2 [action=NET_TX]
          <idle>-0     [000] d.h.   551.432793: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.432795: irq_handler_exit: irq=86 ret=handled
     ksoftirqd/1-16    [001] ..s.   551.432796: softirq_exit: vec=2 [action=NET_TX]
          <idle>-0     [000] ..s.   551.432798: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.432805: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.432865: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.432868: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.432872: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.432874: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.432877: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.432883: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [001] d.h.   551.435902: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.435913: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.435935: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.435938: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.435942: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.435944: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.435947: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.435953: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.435998: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.436001: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.436011: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   551.436023: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.436026: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.436030: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.436032: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.436035: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.436041: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.439588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.439591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.439595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.439596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.439599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.439601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.439603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.439606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.439613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.439715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.439718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.439721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.439723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.439726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.439728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.439729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.439732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.439739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [003] d.h.   551.442617: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.442618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.442623: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.442625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.442626: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.442627: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.442629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.442630: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.442633: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] d.h.   551.442634: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.442636: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.442637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.442639: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.442641: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.442646: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.442648: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.442651: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.442653: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [003] ..s.   551.442657: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.442659: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.442660: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.442665: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.447588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.447591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.447594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.447596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.447599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.447601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.447602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.447605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.447612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.447715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.447718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.447721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.447723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.447726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.447728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.447729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.447732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.447738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.451201: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451204: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451211: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   551.451321: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451324: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451328: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451330: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.451333: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.451339: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451371: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451374: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451381: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451383: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.451386: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.451392: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451421: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451424: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451428: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   551.451432: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451434: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451438: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451440: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.451443: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.451449: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451516: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451519: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451529: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451530: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.451534: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.451540: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451578: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451581: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451588: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451590: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.451593: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.451600: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [001] d...   551.451624: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [001] ..s.   551.451628: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [001] ..s.   551.451691: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   551.451717: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.451720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.451729: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.451731: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.451734: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.451740: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [003] d.h.   551.452617: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.452618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.452624: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.452625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.452627: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.452627: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.452629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.452633: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] ..s.   551.452636: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.452638: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.452640: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   551.452648: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.452650: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.452652: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] dnh.   551.452654: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] ..s.   551.452656: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.452657: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.452660: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.452661: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.452668: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.452669: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.452674: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.455592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.455595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.455600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.455602: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.455605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.455607: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.455609: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.455612: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.455624: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.455716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.455720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.455723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.455724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.455727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.455729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.455731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.455734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.455742: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [003] d.h.   551.462618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.462620: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.462620: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] d.h.   551.462630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.462630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.462630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.462633: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.462634: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.462637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.462637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.462638: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.462642: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   551.462644: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.462644: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] ..s.   551.462644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   551.462646: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.462646: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.462648: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.462649: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.462662: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.462663: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.462664: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.462664: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.462669: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.462669: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.462671: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.462681: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.462683: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.462683: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.462688: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.463588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.463592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.463595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.463596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.463599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.463601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.463603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.463606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.463613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.463715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.463718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.463721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.463723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.463726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.463728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.463729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.463732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.463738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.471588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.471591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.471594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.471596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.471599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.471600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.471602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.471605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.471611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.471715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.471718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.471721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.471723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.471726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.471728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.471729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.471732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.471738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [003] d.h.   551.472618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.472618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.472622: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.472624: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.472625: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.472628: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.472628: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.472632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.472632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] ..s.   551.472634: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.472635: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.472637: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.472638: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.472639: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.472639: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.472649: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.472653: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.472655: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.472663: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.479591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.479594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.479597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.479599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.479601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.479603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.479605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.479608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.479614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.479715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.479718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.479721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.479723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.479726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.479727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.479729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.479732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.479738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [003] d.h.   551.482618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.482618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.482622: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   551.482624: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.482624: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   551.482627: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.482627: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   551.482630: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.482632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] d.h.   551.482634: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.482634: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.482636: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.482639: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   551.482640: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.482642: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.482644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.482650: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] ..s.   551.482652: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.482657: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.482659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [003] ..s.   551.482662: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.482663: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.482693: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.482697: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.482701: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.482703: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.482707: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.482714: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.482739: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.482743: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.482746: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.482748: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.482752: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.482758: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.482782: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.482785: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.482789: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.482791: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [002] d.h.   551.482791: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] ..s.   551.482794: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.482800: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] dnh.   551.482804: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.487588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.487591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.487594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.487596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.487599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.487601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.487602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.487605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.487612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.487715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.487718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.487721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.487723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.487725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.487727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.487729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.487732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.487738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.492618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.492618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.492624: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.492626: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.492628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.492630: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.492630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.492633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.492634: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.492637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.492637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.492640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.492643: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.492644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.492648: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.492649: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.492657: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.492659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.492660: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.492662: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.492663: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.492666: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.495588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.495591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.495594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.495596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.495599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.495601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.495602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.495605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.495612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.495715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.495718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.495721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.495723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.495726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.495727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.495729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.495732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.495738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.502618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.502625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.502627: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.502630: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.502634: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.502637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.502639: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.502641: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.502653: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.502655: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.502668: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.503588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.503591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.503594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.503596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.503599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.503601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.503602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.503605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.503611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.503715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.503718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.503721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.503723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.503725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.503727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.503729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.503732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.503738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.511588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.511591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.511595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.511596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.511599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.511601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.511603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.511606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.511612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.511715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.511718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.511722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.511723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.511726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.511728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.511730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.511733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.511738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.512618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   551.512621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.512623: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.512625: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.512625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.512628: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.512629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.512632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.512633: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.512635: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.512637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   551.512639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.512645: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.512647: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.512649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.512651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.512658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.512660: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.512662: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.512664: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.512664: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.512668: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.519589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.519592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.519596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.519598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.519601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.519603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.519605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.519608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.519615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.519715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.519718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.519721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.519723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.519726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.519728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.519729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.519732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.519739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.522618: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.522626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.522630: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.522635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.522637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.522648: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.522650: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.522661: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.522710: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.522713: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522716: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522718: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.522720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522724: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.522727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.522743: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.522746: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522749: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522751: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.522754: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522756: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522759: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.522762: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522773: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.522777: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.522781: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522784: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522785: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.522788: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522790: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522792: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.522794: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522805: softirq_raise: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.522810: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] ..s.   551.522814: softirq_entry: vec=0 [action=HI]
          <idle>-0     [000] ..s.   551.522827: softirq_exit: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.522866: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.522869: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522872: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522874: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.522877: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522879: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522881: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.522883: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522893: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.522897: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.522900: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522903: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522904: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.522907: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522909: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522911: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.522914: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522923: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.522927: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.522930: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522933: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522935: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.522938: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522940: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.522941: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.522944: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.522951: softirq_raise: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.522955: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] ..s.   551.522959: softirq_entry: vec=0 [action=HI]
          <idle>-0     [000] ..s.   551.522966: softirq_exit: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.523000: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523003: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523006: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523008: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523010: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523012: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523014: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523017: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523026: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.523033: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523036: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523039: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523041: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523044: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523046: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523047: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523050: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523060: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.523063: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523066: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523069: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523071: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523074: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523076: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523078: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523080: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523087: softirq_raise: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.523091: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] ..s.   551.523095: softirq_entry: vec=0 [action=HI]
          <idle>-0     [000] ..s.   551.523102: softirq_exit: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.523135: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523138: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523141: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523143: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523146: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523148: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523149: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523152: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523161: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.523165: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523168: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523171: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523173: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523176: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523178: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523179: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523182: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523191: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.523195: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523198: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523201: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523203: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523206: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523208: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523209: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523212: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523219: softirq_raise: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.523223: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] ..s.   551.523227: softirq_entry: vec=0 [action=HI]
          <idle>-0     [000] ..s.   551.523235: softirq_exit: vec=0 [action=HI]
          <idle>-0     [000] d.h.   551.523588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.523715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.523718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.523725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.523729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.523732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.523738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.527588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.527591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.527594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.527596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.527598: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.527600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.527602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.527605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.527611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.527715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.527718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.527721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.527723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.527725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.527727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.527729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.527732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.527738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.535591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.535595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.535598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.535600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.535603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.535604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.535606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.535610: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.535617: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.535715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.535718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.535721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.535723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.535726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.535728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.535729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.535732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.535738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.543591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.543594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.543597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.543599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.543602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.543604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.543605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.543608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.543614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.543715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.543718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.543721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.543723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.543726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.543728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.543729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.543732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.543738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.551588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.551592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.551595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.551596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.551599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.551601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.551603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.551606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.551612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.551715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.551719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.551721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.551723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.551726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.551728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.551729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.551732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.551738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.559591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.559594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.559597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.559599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.559602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.559604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.559605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.559608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.559615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.559715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.559718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.559721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.559723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.559726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.559728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.559729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.559732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.559738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.567591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.567594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.567597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.567599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.567602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.567604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.567605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.567608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.567614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.567715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.567718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.567721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.567723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.567726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.567728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.567729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.567732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.567738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.575591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.575594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.575597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.575599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.575602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.575604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.575605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.575608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.575614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.575715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.575718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.575721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.575723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.575726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.575728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.575729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.575732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.575738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.582966: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   551.582980: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.583588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.583591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.583594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.583596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.583599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.583601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.583602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.583605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.583611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.583715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.583718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.583721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.583723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.583726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.583728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.583729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.583732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.583738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.590905: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.590936: irq_handler_exit: irq=162 ret=handled
          mysqld-782   [001] d.h.   551.591025: irq_handler_entry: irq=162 name=arch_timer
          mysqld-782   [001] d.h.   551.591056: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.591588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.591591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.591594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.591596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.591599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.591601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.591602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.591605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.591611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.591715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.591718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.591721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.591723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.591726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.591728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.591729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.591732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.591738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.599591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.599594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.599597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.599599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.599602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.599604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.599607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.599610: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.599616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.599715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.599718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.599721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.599723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.599726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.599727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.599729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.599732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.599738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.602623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.602627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.602632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.602636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.602638: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.602651: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.602653: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.602664: softirq_exit: vec=7 [action=SCHED]
     kworker/2:0-22    [002] d...   551.602702: softirq_raise: vec=6 [action=TASKLET]
     ksoftirqd/2-21    [002] ..s.   551.602741: softirq_entry: vec=6 [action=TASKLET]
     ksoftirqd/2-21    [002] ..s.   551.602759: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.607588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.607591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.607594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.607596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.607599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.607601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.607602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.607605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.607611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.607715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.607718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.607721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.607723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.607725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.607727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.607729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.607732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.607738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.615591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.615594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.615597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.615599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.615602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.615604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.615605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.615608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.615615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.615715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.615718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.615721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.615723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.615726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.615728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.615729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.615732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.615738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.623591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.623594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.623597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.623598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.623601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.623603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.623605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.623608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.623614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.623715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.623718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.623721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.623723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.623726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.623728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.623729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.623732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.623738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.630204: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   551.630221: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.631588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.631591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.631594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.631596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.631599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.631600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.631602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.631605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.631611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.631715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.631718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.631721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.631723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.631726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.631728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.631729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.631732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.631738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.639591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.639594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.639597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.639599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.639602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.639604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.639605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.639608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.639614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.639715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.639718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.639721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.639723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.639726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.639727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.639729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.639732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.639738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.647591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.647594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.647597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.647599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.647602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.647603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.647605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.647608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.647614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.647715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.647718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.647721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.647723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.647726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.647727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.647730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.647733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.647738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.655591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.655594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.655597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.655599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.655601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.655603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.655605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.655608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.655615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.655715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.655718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.655721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.655723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.655726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.655728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.655729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.655732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.655738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.663591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.663594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.663597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.663598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.663601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.663604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.663606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.663609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.663615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.663715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.663718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.663721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.663723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.663726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.663728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.663729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.663732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.663738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [003] d.h.   551.665820: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] dnh.   551.665837: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.671588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.671591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.671594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.671596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.671599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.671601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.671602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.671605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.671611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.671715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.671718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.671721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.671723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.671726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.671727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.671729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.671732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.671738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.672311: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   551.672326: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.677700: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.677724: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.679588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.679591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.679594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.679596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.679599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.679600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.679602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.679605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.679611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.679715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.679718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.679721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.679723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.679725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.679727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.679729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.679732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.679738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.683124: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   551.683138: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.685197: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.685213: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.686384: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.686397: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.687478: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.687491: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.687588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.687592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.687594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.687596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.687599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.687601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.687602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.687605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.687611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.687715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.687718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.687721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.687723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.687726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.687728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.687729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.687732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.687738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.688570: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.688583: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.689663: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.689675: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.690754: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.690766: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.691845: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.691857: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   551.692940: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.692953: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.695588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.695591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.695594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.695596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.695599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.695601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.695602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.695605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.695612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.695715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.695718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.695721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.695723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.695726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.695728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.695729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.695732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.695738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.702619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.702629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.702632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.702636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.702642: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.702644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.702650: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.702651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.702667: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.702669: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.702681: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.703588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.703591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.703594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.703596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.703599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.703601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.703602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.703605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.703611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.703715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.703718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.703721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.703723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.703726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.703728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.703729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.703732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.703738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.711588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.711591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.711594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.711596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.711599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.711600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.711602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.711605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.711611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.711715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.711718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.711721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.711723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.711725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.711727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.711729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.711732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.711738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.712619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.712626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.712629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.712632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.712636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.712638: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.712641: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.712643: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.712656: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.712658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.712662: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.719588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.719591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.719594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.719596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.719599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.719601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.719602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.719605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.719611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.719715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.719718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.719721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.719723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.719725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.719727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.719729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.719732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.719738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.722619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.722623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.722623: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.722626: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.722628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.722629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.722630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.722632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   551.722634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.722635: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.722638: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.722638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.722639: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   551.722640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.722652: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.722652: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.722654: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.722654: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.722658: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.722667: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.722669: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.722673: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.727588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.727591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.727594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.727596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.727600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.727602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.727604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.727607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.727613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.727715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.727718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.727721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.727723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.727726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.727727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.727729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.727732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.727738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.732619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.732626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.732628: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.732631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.732635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.732637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.732640: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.732642: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.732654: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.732655: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.732663: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.735588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.735591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.735594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.735596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.735599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.735601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.735602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.735605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.735612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.735715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.735718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.735721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.735723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.735726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.735727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.735729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.735732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.735738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.742622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.742627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.742629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.742633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.742637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.742639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.742649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.742651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.742663: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.742664: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.742668: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.743588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.743591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.743594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.743596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.743599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.743601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.743602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.743605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.743612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.743715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.743718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.743721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.743723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.743725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.743727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.743729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.743732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.743738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.751588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.751591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.751594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.751596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.751599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.751600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.751602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.751605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.751611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.751715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.751718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.751721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.751723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.751725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.751727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.751729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.751732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.751738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.759591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.759595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.759598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.759599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.759602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.759604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.759606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.759609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.759615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.759715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.759718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.759721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.759723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.759726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.759727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.759729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.759732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.759738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.762619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   551.762621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.762623: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.762625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.762626: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.762628: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.762629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.762632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.762632: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.762635: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   551.762637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   551.762639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.762650: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   551.762652: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.762666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   551.762667: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   551.762672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] dns.   551.762735: softirq_raise: vec=2 [action=NET_TX]
          <idle>-0     [001] .ns.   551.762746: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] .ns.   551.762748: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   551.762761: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   551.762763: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] .ns.   551.762768: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.762814: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.762818: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.762823: softirq_raise: vec=6 [action=TASKLET]
     ksoftirqd/1-16    [001] ..s.   551.762825: softirq_entry: vec=2 [action=NET_TX]
          <idle>-0     [000] d.h.   551.762825: irq_handler_exit: irq=86 ret=handled
     ksoftirqd/1-16    [001] ..s.   551.762831: softirq_exit: vec=2 [action=NET_TX]
          <idle>-0     [000] ..s.   551.762831: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.762839: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [001] d.h.   551.765873: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.765885: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.765908: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.765911: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.765915: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.765917: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.765920: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.765927: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.765983: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.765986: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.765998: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   551.766010: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.766013: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.766017: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.766019: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.766022: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.766028: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.767588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.767591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.767597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.767598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.767601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.767604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.767605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.767608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.767617: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.767715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.767719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.767721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.767723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.767726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.767728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.767730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.767733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.767739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.769768: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.769771: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.769778: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   551.769886: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.769890: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.769893: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.769895: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.769899: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.769905: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.769936: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.769939: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.769946: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.769948: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.769951: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.769957: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.769985: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.769989: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.769993: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   551.770005: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.770011: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.770015: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.770017: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.770020: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.770026: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.770097: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.770100: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.770109: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.770111: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.770114: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.770120: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.770160: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.770163: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.770170: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.770172: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.770175: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.770181: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [001] d...   551.770208: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [001] ..s.   551.770214: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [001] ..s.   551.770274: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   551.770301: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.770304: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.770312: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.770314: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.770317: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.770323: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   551.772619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.772628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   551.772650: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   551.772655: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] .ns.   551.772658: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.772661: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.772663: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.772671: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.775591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.775596: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.775599: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.775601: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.775604: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.775606: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.775608: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.775611: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.775624: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.775716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.775720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.775723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.775724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.775727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.775729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.775731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.775734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.775742: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.779588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.779591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.779594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.779596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.779599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.779601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.779603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.779605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.779612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.779715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.779718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.779721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.779722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.779725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.779727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.779729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.779732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.779739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.782621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.782636: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.782640: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.782644: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.782651: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.782654: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.782672: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.782673: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.782691: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.782692: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.782703: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.783280: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   551.783294: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.783588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.783591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.783594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.783596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.783599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.783601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.783603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.783606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.783612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.783715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.783718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.783721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.783723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.783726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.783728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.783729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.783732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.783738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.791588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.791591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.791594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.791596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.791599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.791601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.791602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.791605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.791611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.791715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.791718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.791721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.791723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.791726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.791727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.791729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.791732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.791738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.792619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.792627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.792630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.792633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.792638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.792640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.792643: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.792644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   551.792674: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   551.792676: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] .ns.   551.792680: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.799588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.799591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.799594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.799596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.799599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.799601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.799603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.799605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.799612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.799715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.799718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.799721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.799723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.799726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.799727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.799729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.799732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.799738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.802619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.802624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.802625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.802627: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.802628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.802630: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.802631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.802635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   551.802635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.802637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.802639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.802646: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.802647: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.802648: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.802658: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.802659: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.802661: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.802663: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.802667: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.802673: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.802675: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.802679: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.802715: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.802719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.802723: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.802725: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.802729: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.802736: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.802760: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.802763: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.802767: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.802769: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.802773: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.802779: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.802804: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   551.802807: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.802811: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.802813: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   551.802816: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   551.802823: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   551.807588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.807591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.807594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.807596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.807599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.807601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.807602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.807605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.807612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.807715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.807718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.807721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.807723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.807726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.807728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.807729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.807732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.807738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.812619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.812627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.812631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.812635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.812637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.812640: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.812642: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.812655: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.815588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.815591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.815594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.815596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.815599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.815603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.815604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.815607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.815614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.815715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.815718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.815721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.815723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.815726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.815727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.815729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.815732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.815738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.822619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.822623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.822624: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.822627: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.822628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.822632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.822634: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.822636: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.822636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.822639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.822639: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.822640: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.822649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.822651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.822653: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.822664: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   551.823589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.823592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.823595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.823597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.823600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.823602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.823603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.823606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.823612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.823715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.823718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.823721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.823723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.823725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.823727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.823729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.823732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.823738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.831588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.831591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.831594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.831596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.831599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.831601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.831602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.831605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.831611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.831715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.831718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.831721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.831723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.831726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.831728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.831729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.831732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.831738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.832619: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   551.832626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   551.832628: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   551.832631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   551.832635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   551.832638: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.832640: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   551.832642: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.832654: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   551.832656: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   551.832670: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.839588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.839591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.839594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.839596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.839599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.839601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.839602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.839605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.839611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.839715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.839718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.839721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.839723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.839726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.839727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.839729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.839732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.839738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.842623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   551.842627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   551.842630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   551.842633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   551.842637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   551.842639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.842649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   551.842651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.842664: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   551.842665: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   551.842669: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   551.847588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.847591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.847594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.847596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.847599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.847601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.847602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.847605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.847611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.847715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.847718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.847721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.847723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.847726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.847727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.847729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.847732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.847738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.855592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.855595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.855598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.855600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.855603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.855605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.855606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.855609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.855616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.855715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.855718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.855721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.855723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.855726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.855727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.855729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.855732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.855738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.863591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.863594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.863597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.863599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.863602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.863604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.863605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.863608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.863615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.863715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.863718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.863721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.863723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.863726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.863728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.863729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.863732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.863738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.871588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.871591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.871594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.871596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.871599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.871601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.871602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.871605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.871612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.871715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.871718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.871721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.871723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.871726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.871727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.871729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.871732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.871738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.879591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.879594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.879597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.879599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.879603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.879605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.879607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.879610: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.879616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.879715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.879718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.879721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.879723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.879726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.879727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.879729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.879732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.879738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   551.882721: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   551.882737: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   551.883436: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   551.883449: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.887588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.887591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.887594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.887596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.887599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.887600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.887602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.887605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.887611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.887715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.887718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.887721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.887723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.887726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.887728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.887729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.887732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.887738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.895591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.895594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.895597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.895599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.895602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.895604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.895605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.895608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.895614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.895715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.895718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.895721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.895723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.895726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.895728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.895729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.895732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.895738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.903591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.903594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.903597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.903598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.903601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.903603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.903605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.903608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.903614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.903715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.903718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.903721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.903723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.903726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.903728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.903729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.903733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.903739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.911588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.911591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.911594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.911596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.911599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.911600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.911602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.911605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.911611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.911715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.911718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.911721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.911723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.911725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.911727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.911729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.911732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.911738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.919591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.919594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.919597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.919598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.919601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.919603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.919605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.919608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.919614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.919715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.919718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.919721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.919723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.919726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.919728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.919729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.919732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.919738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.927591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.927594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.927597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.927599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.927601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.927603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.927605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.927608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.927614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.927715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.927718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.927721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.927723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.927726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.927728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.927729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.927732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.927738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.935591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.935594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.935597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.935599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.935602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.935603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.935605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.935608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.935614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.935715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.935718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.935721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.935723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.935726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.935728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.935729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.935732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.935738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.943591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.943594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.943597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.943600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.943603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.943605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.943606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.943609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.943615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.943715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.943718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.943721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.943723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.943726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.943728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.943729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.943732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.943738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.951588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.951591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.951594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.951596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.951599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.951601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.951602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.951605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.951611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.951715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.951718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.951721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.951723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.951726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.951727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.951729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.951732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.951738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.959591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.959594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.959597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.959599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.959602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.959604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.959605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.959608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.959614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.959715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.959718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.959721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.959723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.959726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.959728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.959729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.959732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.959738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.967591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.967594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.967597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.967599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.967602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.967603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.967605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.967608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.967614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.967715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.967718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.967721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.967723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.967726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.967727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.967729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.967733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.967738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.975591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.975594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.975597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.975599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.975601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.975603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.975605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.975608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.975614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.975715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.975718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.975721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.975723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.975726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.975728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.975729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.975732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.975738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   551.983582: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   551.983588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.983591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.983594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.983596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [002] dnh.   551.983596: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   551.983599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.983601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.983602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.983605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.983612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.983715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.983718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.983721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.983723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.983726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.983727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.983729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.983732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.983737: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.991588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.991591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.991594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.991596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.991599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.991601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.991602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.991605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.991611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.991715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.991719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.991722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.991723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.991726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.991728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.991730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.991733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.991739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.999591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.999594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.999597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.999599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.999602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.999604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.999605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.999608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.999615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   551.999715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   551.999718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.999721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.999723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   551.999726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.999728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   551.999729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   551.999732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   551.999738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.002624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.002629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.002633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.002637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.002639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.002651: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.002653: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.002664: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.007588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.007591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.007595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.007597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.007600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.007602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.007604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.007607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.007613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.007715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.007718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.007721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.007723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.007726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.007728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.007729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.007732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.007738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.012622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.012626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.012629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.012633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.012637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.012640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.012650: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.012652: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.012665: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.012667: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.012671: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.015589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.015593: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.015596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.015598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.015601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.015603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.015604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.015607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.015615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.015715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.015718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.015721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.015723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.015726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.015727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.015729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.015732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.015739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.023591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.023594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.023597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.023599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.023602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.023604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.023605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.023608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.023614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.023715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.023718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.023721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.023723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.023726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.023728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.023730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.023733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.023738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.031588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.031591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.031594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.031596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.031599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.031601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.031602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.031605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.031611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.031715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.031718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.031721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.031723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.031725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.031727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.031729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.031732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.031738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.035591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.035594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.035597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.035599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.035602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.035603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.035605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.035608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.035614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.035715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.035718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.035721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.035723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.035725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.035727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.035729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.035732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.035738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.039588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.039591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.039594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.039596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.039599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.039600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.039602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.039605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.039611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.039715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.039718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.039721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.039723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.039725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.039727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.039729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.039732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.039737: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.047591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.047594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.047597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.047598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.047601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.047603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.047605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.047608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.047614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.047715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.047718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.047721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.047723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.047726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.047727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.047729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.047732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.047738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.055591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.055594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.055597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.055599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.055602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.055603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.055605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.055608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.055614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.055715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.055718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.055721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.055724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.055728: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.055729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.055731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.055734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.055740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.063591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.063594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.063597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.063599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.063602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.063603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.063605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.063608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.063615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.063715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.063718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.063721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.063723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.063726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.063728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.063729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.063732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.063738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.071588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.071591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.071594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.071596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.071599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.071600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.071602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.071605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.071611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.071715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.071718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.071721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.071723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.071726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.071728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.071729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.071732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.071738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.079591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.079594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.079597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.079599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.079602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.079604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.079605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.079608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.079614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.079715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.079718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.079721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.079723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.079726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.079727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.079729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.079732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.079738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.083738: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.083752: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.087588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.087591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.087594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.087596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.087599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.087601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.087602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.087605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.087611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.087715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.087718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.087721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.087723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.087726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.087727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.087729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.087732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.087738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.091035: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.091059: irq_handler_exit: irq=162 ret=handled
          mysqld-783   [001] d.h.   552.091121: irq_handler_entry: irq=162 name=arch_timer
          mysqld-783   [001] d.h.   552.091152: irq_handler_exit: irq=162 ret=handled
          mysqld-779   [001] d.h.   552.091191: irq_handler_entry: irq=162 name=arch_timer
          mysqld-779   [001] d.h.   552.091205: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] d.h.   552.092094: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] dnh.   552.092112: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.095591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.095594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.095597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.095599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.095602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.095604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.095605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.095608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.095614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.095715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.095718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.095721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.095723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.095726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.095728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.095729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.095732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.095738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.103591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.103594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.103597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.103599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.103601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.103603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.103605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.103608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.103614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.103715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.103718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.103721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.103723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.103726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.103728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.103729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.103732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.103738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.111588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.111591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.111594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.111596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.111599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.111600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.111602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.111605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.111611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.111715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.111718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.111721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.111723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.111726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.111727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.111729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.111732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.111738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.119591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.119594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.119597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.119599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.119602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.119603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.119605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.119608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.119614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.119715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.119718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.119722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.119724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.119727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.119729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.119731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.119734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.119739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.122624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.122629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.122632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.122635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.122639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.122642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.122651: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.122653: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.122664: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.122666: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.122671: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.127588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.127591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.127594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.127596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.127599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.127601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.127602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.127605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.127612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.127715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.127718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.127721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.127723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.127725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.127728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.127729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.127732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.127738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.135591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.135594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.135597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.135599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.135602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.135604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.135605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.135608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.135614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.135715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.135718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.135721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.135723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.135726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.135728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.135729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.135732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.135738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.140280: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.140300: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.143591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.143594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.143597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.143599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.143602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.143604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.143605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.143608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.143614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.143715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.143718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.143721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.143723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.143726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.143728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.143729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.143732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.143738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.151588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.151591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.151594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.151596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.151599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.151601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.151602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.151605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.151611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.151715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.151718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [001] d.h.   552.151719: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.151721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.151723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.151726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.151728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.151729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.151732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.151739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] dnh.   552.151744: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.154956: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.154969: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.159588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.159591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.159594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.159596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.159599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.159601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.159602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.159605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.159611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.159715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.159718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.159721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.159723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.159726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.159728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.159729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.159732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.159738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.167591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.167594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.167597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.167599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.167602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.167604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.167605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.167608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.167614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.167715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.167718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.167721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.167723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.167726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.167728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.167729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.167732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.167738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.172412: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.172425: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.175591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.175594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.175597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.175599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.175602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.175604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.175605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.175608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.175614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.175715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.175718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.175721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.175722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.175725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.175727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.175729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.175732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.175738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.177809: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.177831: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.183591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.183594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.183597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.183599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.183602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.183604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.183605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.183608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.183614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.183715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.183720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.183723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.183724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.183727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.183729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.183731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.183734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.183740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.183889: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.183902: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.191588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.191591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.191594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.191596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.191599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.191601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.191602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.191605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.191611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.191715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.191718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.191721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.191723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.191726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.191728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.191729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.191732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.191738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.199591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.199594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.199597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.199599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.199602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.199604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.199605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.199608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.199615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.199715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.199718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.199721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.199723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.199726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.199728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.199730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.199733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.199738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.207591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.207594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.207597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.207599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.207602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.207603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.207605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.207608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.207614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.207715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.207719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.207722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.207723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.207727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.207728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.207730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.207733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.207739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.215591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.215594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.215597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.215599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.215602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.215604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.215605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.215608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.215614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.215715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.215718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.215721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.215723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.215726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.215728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.215730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.215733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.215738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.221906: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.221909: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.221916: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.222027: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.222030: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.222035: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.222037: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.222040: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.222047: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.222083: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.222087: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.222096: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.222098: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.222101: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.222107: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.222135: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.222138: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.222143: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.222147: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.222150: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.222153: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.222155: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.222165: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.222171: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.222229: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.222232: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.222236: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.222238: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.222241: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.222247: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   552.222621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.222630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   552.222649: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.222657: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] .ns.   552.222660: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.222665: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.222666: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.222671: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.223590: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.223594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.223598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.223600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.223603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.223607: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.223609: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.223611: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.223624: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.223716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.223720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.223723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.223724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.223727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.223729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.223731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.223734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.223742: irq_handler_exit: irq=56 ret=handled
 systemd-journal-124   [001] d.h.   552.225267: irq_handler_entry: irq=162 name=arch_timer
 systemd-journal-124   [001] dnh.   552.225287: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.225317: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.225320: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.225325: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.225327: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.225330: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.225338: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.225397: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.225401: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.225411: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.225413: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.225416: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.225422: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.225469: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.225472: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.225481: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.225482: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.225486: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.225492: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [001] d...   552.225522: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [001] ..s.   552.225527: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [001] ..s.   552.225598: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.225624: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.225627: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.225637: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.225639: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.225642: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.225649: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.227163: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.227170: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.227184: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.227193: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.227200: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.227204: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.227206: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.227210: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.227218: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.230702: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.230705: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.230712: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.230818: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.230821: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.230824: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.230826: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.230830: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.230836: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.230867: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.230870: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.230877: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.230879: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.230882: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.230888: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.230916: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.230919: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.230924: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.230927: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.230930: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.230933: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.230935: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.230938: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.230944: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.231005: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.231008: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231017: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.231019: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.231023: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.231029: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.231065: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.231068: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231075: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.231077: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.231080: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.231086: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   552.231108: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.231114: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.231168: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.231194: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.231197: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231205: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.231207: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.231210: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.231216: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.231589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.231592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.231599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.231602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.231606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.231609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231626: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.231716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.231719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.231723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.231726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.231730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.231733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.231744: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.232621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.232622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.232633: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.232639: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.232641: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.232644: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.232652: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.232654: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.232660: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   552.232665: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.232671: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] .ns.   552.232672: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.232674: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.232677: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.232679: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.232688: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.232689: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.232692: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.232704: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.239590: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.239594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.239597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.239599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.239602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.239604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.239605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.239608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.239620: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.239715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.239719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.239722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.239723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.239726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.239728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.239730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.239733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.239741: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.242624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.242641: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.242644: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.242649: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.242656: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.242659: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.242675: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.242676: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.242692: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.242694: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.242701: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.247588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.247592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.247595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.247596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.247599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.247601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.247603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.247606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.247612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.247715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.247718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.247721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.247723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.247726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.247728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.247729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.247732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.247738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.252621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.252622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.252628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.252630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.252631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.252633: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.252634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.252636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.252639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   552.252640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.252642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.252643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.252645: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.252647: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.252653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.252655: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.252661: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.252662: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.252667: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.252669: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.252670: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.252675: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.255588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.255591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.255594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.255596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.255599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.255601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.255602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.255605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.255612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.255715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.255718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.255721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.255723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.255726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.255728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.255729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.255732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.255738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.262620: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.262624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.262625: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.262628: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.262629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.262631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.262632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.262635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.262636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.262637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.262641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.262643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.262646: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.262647: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.262660: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.262662: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] .ns.   552.262669: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] .ns.   552.262671: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] dnH.   552.262682: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] dnH.   552.262686: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] dnH.   552.262691: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [001] ..s.   552.262692: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] dnH.   552.262694: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] .ns.   552.262701: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.262702: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] .ns.   552.262706: softirq_exit: vec=9 [action=RCU]
     ksoftirqd/0-9     [000] ..s.   552.262762: softirq_entry: vec=6 [action=TASKLET]
     ksoftirqd/0-9     [000] ..s.   552.262770: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.262796: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.262800: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.262805: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.262807: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.262810: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.262817: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.262837: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.262841: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.262845: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.262847: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.262850: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.262857: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.263589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.263592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.263596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.263598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.263601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.263603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.263604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.263607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.263616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.263715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.263718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.263721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.263723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.263726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.263728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.263732: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.263735: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.263743: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [003] d.h.   552.266568: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] dnh.   552.266584: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.271588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.271592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.271595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.271597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.271600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.271602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.271603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.271606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.271612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.271715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.271718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.271721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.271723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.271726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.271727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.271729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.271732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.271738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.272620: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.272622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.272628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.272628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.272630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.272631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.272633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.272634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.272638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.272639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.272640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.272641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.272646: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.272647: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.272651: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.272653: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.272660: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.272662: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.272666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.272666: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.272668: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.272672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.279588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.279591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.279594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.279596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.279599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.279601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.279602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.279605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.279611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.279715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.279718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.279721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.279723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.279726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.279728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.279729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.279732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.279738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.282621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.282627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.282630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.282633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.282637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.282639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.282642: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.282643: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.282656: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.282658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.282673: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.284039: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.284055: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.287588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.287591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.287596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.287599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.287602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.287605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.287691: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.287694: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287701: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.287716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.287719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.287724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.287727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.287730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.287733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.287798: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.287802: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287806: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.287808: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.287811: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.287817: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.287852: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.287855: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287866: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.287869: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.287872: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.287878: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.287906: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.287909: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287914: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.287917: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.287920: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287924: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.287926: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.287929: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.287935: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.287986: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.287989: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.287993: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.287995: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.287998: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.288004: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   552.291020: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.291031: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.291052: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.291055: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291058: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.291060: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.291063: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.291070: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.291112: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.291115: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291124: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.291126: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.291129: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.291136: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.291172: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.291175: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291184: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.291186: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.291189: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.291195: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   552.291217: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.291221: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.291290: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.291315: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.291319: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291329: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.291331: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.291334: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.291340: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.291590: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.291593: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.291598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.291601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.291605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.291608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.291715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.291719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.291723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.291726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.291730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.291733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.291739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.292316: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.292322: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.292332: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.292345: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.292348: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.292352: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.292354: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.292357: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.292364: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   552.292621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.292636: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.292640: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] dnh.   552.292663: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.292670: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] .ns.   552.292672: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.292683: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.292685: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.292694: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.292696: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.292702: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.295592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.295597: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.295602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.295604: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.295607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.295610: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.295612: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.295615: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.295630: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.295716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.295720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.295723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.295725: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.295728: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.295730: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.295731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.295734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.295747: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.295986: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.295993: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296000: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.296109: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.296113: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296117: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296119: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.296124: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.296131: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296166: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.296169: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296177: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296179: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.296182: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.296189: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296217: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.296220: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296225: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.296229: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.296231: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296235: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296237: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.296240: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.296246: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296320: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.296323: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296332: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296334: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.296337: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.296344: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296381: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.296384: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296392: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296394: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.296397: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.296403: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   552.296425: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.296431: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.296499: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.296525: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.296528: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.296536: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.296538: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.296541: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.296547: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   552.302622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.302623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.302632: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.302636: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.302639: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.302642: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.302651: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.302654: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.302658: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   552.302663: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.302670: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.302670: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] .ns.   552.302673: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.302676: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.302677: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.302686: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.302687: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.302688: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.302700: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.303590: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.303594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.303597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.303599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.303602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.303605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.303606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.303609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.303624: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.303716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.303719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.303722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.303724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.303727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.303729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.303730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.303733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.303742: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.311588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.311592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.311595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.311596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.311599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.311601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.311603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.311606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.311612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.311715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.311718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.311721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.311723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.311726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.311728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.311729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.311732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.311738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.312623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.312623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.312631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.312635: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.312640: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.312640: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.312643: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.312646: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.312647: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.312649: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.312652: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.312653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.312655: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.312655: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.312671: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.312672: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.312673: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.312674: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.312679: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.312688: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.312690: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.312694: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.314715: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.314730: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.319588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.319592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.319595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.319597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.319600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.319602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.319603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.319606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.319613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.319715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.319718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.319721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.319723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.319726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.319728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.319729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.319732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.319738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.322621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.322621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.322626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.322629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.322630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.322632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.322634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.322637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.322639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.322639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.322641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.322642: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.322644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.322652: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.322654: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.322658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.322659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.322664: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.322666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.327588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.327591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.327594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.327596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.327599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.327601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.327603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.327605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.327612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.327715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.327718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.327721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.327723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.327726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.327728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.327729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.327732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.327738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.332621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.332621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.332626: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.332629: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.332629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.332631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.332633: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.332634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.332635: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.332639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.332641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.332648: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.332650: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.332655: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.332657: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.332669: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.332671: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.332675: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.332679: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.332705: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.332708: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.332712: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.332714: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.332717: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.332724: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.332748: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.332751: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.332755: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.332757: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.332760: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.332766: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.332786: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.332789: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.332793: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.332795: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.332798: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.332804: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.335588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.335591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.335594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.335596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.335599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.335601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.335602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.335605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.335612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.335715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.335718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.335721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.335723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.335726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.335728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.335729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.335732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.335738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.340979: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.340993: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.342621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.342621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.342627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.342629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.342630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.342633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.342634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.342637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.342638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.342640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.342641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.342643: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.342645: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.342650: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.342652: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.342658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.342660: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.342664: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.342666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.343588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.343591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.343595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.343596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.343599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.343601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.343603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.343606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.343615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.343715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.343718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.343721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.343723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.343726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.343728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.343729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.343732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.343738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.351588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.351591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.351594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.351596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.351599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.351600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.351602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.351605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.351612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.351715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.351718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.351721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.351723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.351726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.351727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.351729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.351732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.351738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.352621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.352629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.352631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.352634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.352638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.352641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.352644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.352645: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.352658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.352659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.352675: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.359588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.359591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.359594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.359596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.359599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.359601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.359602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.359605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.359611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.359715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.359718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.359721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.359723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.359726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.359728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.359729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.359732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.359738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.362625: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.362629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.362632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.362635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.362639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.362642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.362651: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.362653: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.362665: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.362667: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.362671: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.367588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.367591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.367594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.367596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.367599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.367601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.367602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.367605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.367611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.367715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.367718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.367721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.367723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.367726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.367727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.367729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.367732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.367738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.375592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.375595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.375598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.375600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.375603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.375605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.375607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.375609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.375616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.375715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.375718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.375721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.375723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.375726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.375728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.375729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.375732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.375738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.382837: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.382853: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.383100: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] dnh.   552.383117: irq_handler_exit: irq=162 ret=handled
     kworker/0:2-1755  [000] dnh.   552.383589: irq_handler_entry: irq=56 name=dwc_otg
     kworker/0:2-1755  [000] dnh.   552.383595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
     kworker/0:2-1755  [000] dnh.   552.383599: irq_handler_exit: irq=56 ret=unhandled
     kworker/0:2-1755  [000] dnh.   552.383601: irq_handler_entry: irq=56 name=dwc_otg_pcd
     kworker/0:2-1755  [000] dnh.   552.383604: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
     kworker/0:2-1755  [000] dnh.   552.383606: irq_handler_exit: irq=56 ret=unhandled
     kworker/0:2-1755  [000] dnh.   552.383608: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
     kworker/0:2-1755  [000] dnh.   552.383611: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
     kworker/0:2-1755  [000] dnh.   552.383619: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.383716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.383720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.383723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.383725: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.383728: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.383730: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.383732: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.383735: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.383742: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.384210: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.384224: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.391588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.391592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.391595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.391596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.391599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.391601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.391603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.391605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.391612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.391715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.391718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.391721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.391723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.391725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.391727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.391729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.391732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.391738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.392621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.392629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.392632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.392636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.392641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.392644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.392649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.392651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.392676: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.392677: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] .ns.   552.392686: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.399589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.399593: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.399596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.399598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.399601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.399603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.399604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.399607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.399614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.399715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.399718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.399721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.399723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.399726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.399728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.399729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.399734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.399740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.402621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.402629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.402631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.402635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.402640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.402642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.402645: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.402646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.402658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.402659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.402663: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.407589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.407592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.407595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.407597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.407600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.407602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.407604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.407606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.407613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.407715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.407718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.407721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.407723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.407726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.407728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.407730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.407733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.407739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.412620: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.412625: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.412626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.412628: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.412630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.412631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.412633: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.412636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.412636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.412638: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.412640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.412641: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.412642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.412642: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.412653: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.412654: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.412655: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.412656: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.412659: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.412669: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.412670: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.412674: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.415588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.415592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.415595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.415597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.415600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.415602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.415603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.415606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.415613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.415715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.415718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.415721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.415723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.415726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.415727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.415729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.415732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.415738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.422620: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.422628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.422630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.422633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.422638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.422640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.422643: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.422644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.422655: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.422656: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] .ns.   552.422679: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.423589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.423594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.423597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.423599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.423602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.423604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.423606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.423609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.423615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.423715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.423719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.423722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.423723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.423726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.423728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.423730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.423733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.423739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.431588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.431591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.431594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.431596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.431599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.431600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.431602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.431605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.431611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.431715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.431718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.431721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.431723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.431726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.431727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.431729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.431732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.431738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.432621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.432630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.432632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.432635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.432640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.432642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.432653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.432654: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.432666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.432668: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.432672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.439588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.439591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.439594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.439596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.439599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.439601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.439602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.439605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.439611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.439715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.439718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.439721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.439723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.439726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.439727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.439729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.439732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.439738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.447592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.447595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.447598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.447599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.447602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.447604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.447606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.447609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.447615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.447715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.447718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.447721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.447723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.447726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.447728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.447729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.447732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.447738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.455591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.455594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.455597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.455599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.455602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.455604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.455605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.455608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.455615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.455715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.455718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.455721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.455723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.455727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.455729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.455731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.455734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.455740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.463591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.463594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.463597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.463599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.463602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.463604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.463605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.463608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.463615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.463715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.463718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.463721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.463723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.463726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.463728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.463729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.463732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.463738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.471588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.471591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.471594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.471596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.471599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.471601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.471602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.471605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.471611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.471715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.471718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.471721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.471723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.471726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.471728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.471729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.471732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.471738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.479591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.479594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.479597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.479599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.479602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.479604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.479605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.479608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.479615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.479715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.479718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.479721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.479723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.479726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.479728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.479729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.479732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.479738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.484372: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.484385: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.487588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.487591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.487594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.487596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.487599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.487600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.487602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.487605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.487611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.487715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.487718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.487721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.487722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.487725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.487727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.487729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.487732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.487738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.495591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.495594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.495597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.495599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.495602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.495604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.495605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.495608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.495615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.495715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.495718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.495721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.495723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.495726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.495727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.495729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.495732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.495738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.501624: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.501627: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.501634: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.501751: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.501754: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.501759: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.501761: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.501764: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.501772: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.501810: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.501813: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.501823: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.501825: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.501828: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.501836: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.501864: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.501867: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.501873: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.501876: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.501879: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.501882: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.501884: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.501887: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.501893: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.501945: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.501948: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.501952: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.501954: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.501957: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.501963: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   552.502622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.502631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   552.502653: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.502659: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] .ns.   552.502662: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.502667: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.502668: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.502675: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.503590: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.503595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.503599: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.503600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.503603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.503605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.503607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.503610: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.503621: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.503717: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.503720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.503723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.503725: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.503728: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.503730: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.503731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.503734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.503742: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.504981: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.505001: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.505033: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.505037: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.505041: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.505043: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.505047: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.505055: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.505112: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.505115: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.505128: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.505130: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.505133: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.505139: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.505184: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.505187: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.505196: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.505198: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.505201: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.505207: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   552.505234: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.505239: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.505311: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.505337: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.505340: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.505351: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.505353: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.505357: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.505363: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.506434: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.506442: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.506453: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.506462: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.506465: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.506469: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.506471: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.506474: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.506482: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509659: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.509662: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.509669: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.509774: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.509777: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.509781: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509783: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.509787: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.509793: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509824: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.509827: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.509834: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509836: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.509839: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.509845: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509872: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.509875: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.509880: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.509883: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.509886: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.509890: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509892: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.509895: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.509901: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509962: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.509965: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.509974: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.509976: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.509979: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.509985: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.510019: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.510023: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.510030: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.510032: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.510035: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.510041: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   552.510060: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.510065: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.510116: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.510141: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.510145: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.510153: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.510155: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.510158: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.510164: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.511588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.511592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.511597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.511599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.511602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.511604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.511605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.511608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.511623: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.511715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.511719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.511722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.511723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.511726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.511728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.511730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.511733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.511742: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.512621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.512622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.512623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.512630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.512630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.512634: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.512638: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.512640: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.512641: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.512645: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.512647: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.512650: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.512651: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.512654: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   552.512656: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.512662: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] .ns.   552.512665: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] .ns.   552.512666: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.512667: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] .ns.   552.512668: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.512668: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.512668: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.512669: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.512679: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.512681: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.512682: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.512683: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] .ns.   552.512683: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.512690: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] .ns.   552.512697: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.519592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.519598: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.519603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.519605: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.519608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.519611: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.519612: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.519615: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.519628: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.519716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.519720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.519723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.519724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.519727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.519729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.519730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.519733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.519743: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.522624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.522624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.522633: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.522637: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.522642: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.522642: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.522646: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.522649: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   552.522650: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.522652: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.522656: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.522659: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.522662: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.522664: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.522671: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.522673: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.522680: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.522682: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.522687: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.522688: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.522688: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.522693: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.527588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.527591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.527594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.527596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.527599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.527601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.527603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.527605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.527612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.527715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.527718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.527721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.527723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.527726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.527728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.527729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.527732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.527738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.532622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.532622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.532626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.532629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.532631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.532632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.532635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   552.532635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.532637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.532639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.532642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.532645: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.532646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.532648: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.532650: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.532659: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.532660: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.532662: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.532665: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.535588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.535591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.535594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.535596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.535599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.535601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.535602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.535605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.535611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.535715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.535718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.535721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.535723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.535726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.535728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.535729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.535732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.535738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.542621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.542622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.542626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.542628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.542629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.542631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.542632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.542634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.542636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.542639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.542641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.542644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.542646: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.542648: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.542650: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.542652: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.542660: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.542661: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.542664: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.542666: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.542670: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.542689: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.542701: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.542704: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.542709: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.542711: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.542714: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.542722: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.542745: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.542748: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.542752: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.542754: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.542757: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.542764: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.542784: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.542787: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.542791: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.542793: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.542796: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.542804: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.543588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.543591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.543594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.543596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.543599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.543601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.543603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.543606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.543613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.543715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.543718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.543721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.543723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.543726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.543728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.543729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.543732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.543738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.547588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.547591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.547594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.547596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.547599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.547600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.547602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.547605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.547612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.547715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.547718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.547721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.547723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.547725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.547727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.547729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.547732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.547738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.551588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.551591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.551594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.551596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.551599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.551601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.551602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.551605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.551612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.551715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.551718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.551721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.551723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.551725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.551727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.551729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.551732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.551738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.552622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.552622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.552627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.552629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.552631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.552632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.552635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.552635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.552637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.552639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.552642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.552644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.552646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.552649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.552651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.552658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.552659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.552664: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.552664: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.559588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.559591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.559594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.559596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.559599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.559601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.559602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.559605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.559612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.559715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.559718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.559721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.559723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.559726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.559727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.559729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.559732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.559738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.562621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.562628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.562631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.562634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.562638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.562640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.562643: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.562644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.562656: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.562658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.562673: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.567588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.567591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.567594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.567596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.567599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.567601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.567602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.567605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.567612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.567715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.567718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.567721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.567723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.567725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.567727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.567729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.567732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.567738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.572626: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.572631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.572633: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.572637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.572640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.572643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.572653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.572655: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.572667: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.572669: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.572673: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.575588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.575591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.575594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.575596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.575599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.575601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.575602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.575605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.575612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.575715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.575718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.575721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.575723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.575726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.575727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.575729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.575732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.575738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.583591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.583595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.583598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.583600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.583603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.583604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.583606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.583609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.583615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.583715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.583718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.583721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.583723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.583726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.583728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.583729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.583732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.583738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.584514: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.584528: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   552.591146: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.591171: irq_handler_exit: irq=162 ret=handled
          mysqld-783   [001] d.h.   552.591233: irq_handler_entry: irq=162 name=arch_timer
          mysqld-783   [001] d.h.   552.591256: irq_handler_exit: irq=162 ret=handled
          mysqld-782   [001] d.h.   552.591300: irq_handler_entry: irq=162 name=arch_timer
          mysqld-782   [001] d.h.   552.591322: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.591588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.591591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.591594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.591596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.591599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.591601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.591602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.591605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.591612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.591715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.591718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.591721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.591723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.591725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.591727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.591729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.591733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.591739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.599591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.599595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.599598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.599599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.599602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.599604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.599606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.599609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.599615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.599715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.599718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.599721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.599723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.599726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.599728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.599729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.599732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.599738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.604026: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] dnh.   552.604043: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.607590: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.607596: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.607600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.607602: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.607605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.607607: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.607609: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.607612: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.607620: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.607715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.607719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.607722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.607723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.607726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.607728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.607730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.607733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.607740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.612621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.612630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.612633: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.612636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.612642: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.612644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.612650: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.612652: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.612663: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.612665: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.612674: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.615589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.615592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.615595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.615597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.615600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.615602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.615603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.615606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.615613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.615715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.615718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.615721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.615723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.615726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.615727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.615729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.615732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.615738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.622621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.622629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.622631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.622635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.622639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.622642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.622645: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.622646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.622657: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.622658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.622662: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.623588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.623592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.623595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.623597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.623600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.623602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.623603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.623606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.623613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.623715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.623718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.623721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.623723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.623725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.623727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.623729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.623732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.623738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.631295: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.631311: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.631588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.631591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.631594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.631596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.631599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.631600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.631602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.631605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.631611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.631715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.631718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.631721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.631722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.631725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.631727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.631729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.631732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.631737: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.632621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.632622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.632628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.632629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.632631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.632631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.632634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.632635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.632639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.632639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.632641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.632642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.632644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.632645: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.632654: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.632655: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.632656: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.632658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.632662: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.632669: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.632671: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.632675: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.639588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.639592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.639595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.639597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.639600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.639602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.639603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.639606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.639613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.639715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.639718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.639721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.639723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.639726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.639727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.639729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.639732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.639738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.642621: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.642622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.642626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.642628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.642629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.642631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.642632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.642634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.642636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.642638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.642639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.642641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.642644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.642645: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.642653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.642654: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.642656: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.642657: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.642667: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.642668: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.642672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] .ns.   552.642679: softirq_exit: vec=9 [action=RCU]
     kworker/2:0-22    [002] d...   552.642710: softirq_raise: vec=6 [action=TASKLET]
     kworker/2:0-22    [002] .ns.   552.642725: softirq_entry: vec=6 [action=TASKLET]
     kworker/2:0-22    [002] .ns.   552.642733: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.647589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.647594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.647597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.647599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.647604: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.647606: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.647607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.647611: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.647618: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.647715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.647719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.647721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.647723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.647726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.647728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.647729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.647733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.647739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.652622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.652631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.652635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.652640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.652644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.652654: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.652656: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.652668: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.655588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.655591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.655595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.655596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.655599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.655601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.655603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.655606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.655612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.655715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.655718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.655721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.655723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.655726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.655727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.655729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.655732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.655738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.663592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.663595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.663598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.663600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.663603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.663604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.663606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.663609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.663615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.663715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.663718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.663721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.663723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.663726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.663728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.663729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.663732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.663738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.671588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.671591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.671594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.671596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.671599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.671600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.671602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.671605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.671611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.671715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.671718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.671721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.671722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.671725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.671727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.671729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.671732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.671738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.672513: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.672527: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   552.677922: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.677945: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.679588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.679591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.679594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.679596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.679599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.679601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.679602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.679605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.679611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.679715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.679718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.679721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.679723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.679726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.679728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.679729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.679732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.679738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.684674: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.684687: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.687588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.687591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.687594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.687596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.687599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.687601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.687602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.687605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.687612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.687715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.687718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.687721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.687723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.687726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.687727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.687729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.687732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.687738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.695591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.695594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.695597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.695599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.695602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.695604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.695605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.695608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.695615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.695715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.695718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.695721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.695723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.695726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.695728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.695729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.695732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.695738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.703591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.703594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.703597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.703599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.703602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.703603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.703605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.703608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.703614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.703715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.703718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.703721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.703723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.703726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.703728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.703729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.703732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.703738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.711588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.711591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.711594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.711597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.711600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.711602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.711604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.711607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.711613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.711715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.711718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.711721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.711723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.711725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.711727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.711729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.711732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.711738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.719591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.719595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.719598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.719600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.719603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.719605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.719606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.719609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.719615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.719715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.719718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.719721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.719723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.719726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.719728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.719729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.719732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.719738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.721375: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.721390: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   552.726504: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   552.726517: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.727588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.727592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.727594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.727596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.727599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.727601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.727602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.727605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.727611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.727715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.727718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.727721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.727723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.727726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.727728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.727729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.727732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.727738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.732623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.732632: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.732635: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.732639: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.732645: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.732648: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.732653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.732655: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.732671: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.732672: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.732681: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.735588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.735591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.735594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.735596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.735599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.735601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.735602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.735605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.735611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.735715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.735718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.735721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.735723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.735726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.735728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.735729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.735732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.735738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.742622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.742630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.742632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.742635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.742640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.742642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.742645: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.742646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.742659: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.742661: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.742665: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.743588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.743591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.743594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.743596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.743599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.743601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.743602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.743605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.743611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.743715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.743718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.743721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.743723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.743726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.743728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.743729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.743732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.743738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.751588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.751591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.751594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.751596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.751599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.751601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.751602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.751605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.751611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.751715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.751718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.751721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.751723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.751726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.751728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.751729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.751732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.751738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.752622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.752626: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.752627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.752629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.752631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.752632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.752634: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.752636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.752637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.752638: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.752641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.752641: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.752643: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.752644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.752655: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.752655: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.752656: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.752656: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.752661: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.752670: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.752671: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.752675: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.759588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.759591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.759594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.759596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.759599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.759601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.759602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.759605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.759611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.759715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.759718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.759721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.759723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.759725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.759727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.759729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.759732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.759737: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.762622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.762625: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.762626: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.762629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.762629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.762631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.762632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.762635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.762635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.762638: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.762639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.762640: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.762642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.762642: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.762652: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.762654: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.762654: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.762656: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.762662: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.762666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.762668: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.762672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.767589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.767593: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.767596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.767598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.767601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.767603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.767604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.767607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.767614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.767715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.767719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.767721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.767723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.767728: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.767729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.767731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.767734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.767740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.772626: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.772631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.772633: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.772637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.772640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.772643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.772653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.772654: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.772666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.772668: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.772672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.775588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.775592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.775594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.775596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.775599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.775601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.775603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.775606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.775612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.775715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.775718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.775721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.775723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.775725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.775727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.775729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.775732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.775738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.783591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.783594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.783598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.783599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.783602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.783604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.783605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.783609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.783615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.783715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.783718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.783721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.783723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.783726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.783727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.783729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.783732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.783738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.784825: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.784838: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.791588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.791591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.791594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.791596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.791599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.791601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.791602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.791605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.791612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.791715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.791718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.791721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.791722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.791725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.791727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.791729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.791732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.791738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.792623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.792630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.792635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.792639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.792642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.792649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.792650: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.792662: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.799588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.799591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.799594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.799596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.799599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.799601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.799602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.799605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.799612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.799715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.799718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.799721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.799723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.799725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.799727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.799729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.799732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.799738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.803591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.803594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.803597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.803599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.803602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.803604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.803605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.803608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.803615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.803715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.803718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.803721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.803723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.803726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.803727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.803729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.803732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.803738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.805607: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] dnh.   552.805622: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.807590: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.807594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.807598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.807600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.807603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.807605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.807607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.807610: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.807617: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.807715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.807719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.807722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.807724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.807726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.807728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.807730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.807733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.807740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.812622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.812630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.812633: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.812636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.812641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.812644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.812649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.812651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.812674: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.812676: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] .ns.   552.812684: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.815589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.815593: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.815596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.815598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.815601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.815603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.815604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.815607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.815614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.815715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.815718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.815721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.815723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.815726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.815728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.815729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.815732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.815738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.822622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.822630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.822632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.822636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.822640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.822644: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.822647: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.822649: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.822660: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.822661: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.822665: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.823589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.823592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.823595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.823597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.823600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.823602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.823603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.823606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.823613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.823715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.823718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.823721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.823723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.823726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.823727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.823729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.823732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.823738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.831588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.831591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.831594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.831596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.831598: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.831600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.831602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.831605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.831611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.831715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.831718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.831721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.831722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.831725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.831727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.831729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.831732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.831737: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.832622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.832626: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.832627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.832629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.832631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.832633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.832634: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.832637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.832637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.832639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.832641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.832642: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.832643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.832644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.832654: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.832655: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.832656: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.832656: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.832660: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.832668: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.832670: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.832674: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.839588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.839592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.839595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.839597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.839600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.839601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.839603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.839606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.839613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.839715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.839718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.839721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.839723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.839726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.839727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.839729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.839732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.839738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.842622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.842629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.842632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.842635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.842639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.842642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.842645: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.842646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.842657: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.842658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] .ns.   552.842678: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.847589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.847594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.847597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.847599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.847602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.847604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.847605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.847608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.847615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.847715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.847718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.847722: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.847723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.847726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.847728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.847730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.847732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.847739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.852623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.852631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.852634: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.852637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.852641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.852643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.852653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.852655: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.852666: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.852668: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.852672: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.855588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.855591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.855595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.855596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.855599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.855601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.855603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.855605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.855612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.855715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.855718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.855721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.855723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.855726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.855727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.855729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.855732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.855738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.863592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.863595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.863598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.863600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.863603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.863604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.863606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.863609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.863616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.863715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.863718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.863721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.863723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.863726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.863728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.863729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.863732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.863738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [003] d.h.   552.867283: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] dnh.   552.867300: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.871588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.871591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.871594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.871596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.871599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.871600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.871602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.871605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.871611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.871715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.871718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.871721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.871723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.871725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.871727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.871729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.871732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.871738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.874679: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.874683: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.874691: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.874803: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.874806: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.874811: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.874813: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.874817: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.874824: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.874861: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.874864: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.874873: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.874875: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.874879: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.874885: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.874914: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.874917: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.874922: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.874925: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.874928: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.874932: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.874933: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.874937: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.874943: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.874997: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.875000: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.875004: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.875006: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.875009: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.875025: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   552.878042: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.878054: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.878073: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.878076: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.878079: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.878081: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.878084: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.878091: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.878133: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.878136: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.878146: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.878148: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.878151: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.878157: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.878194: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.878197: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.878205: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.878207: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.878210: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.878216: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   552.878238: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.878243: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.878313: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.878338: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.878341: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.878351: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.878353: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.878356: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.878362: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.879593: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.879601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879607: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.879609: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.879612: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879615: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.879617: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.879620: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879636: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.879717: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.879721: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879724: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.879726: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.879729: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879731: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.879732: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.879735: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879748: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.879864: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.879867: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879879: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.879888: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.879891: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.879896: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.879898: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.879901: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.879909: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.882623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.882624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.882632: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   552.882632: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.882633: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.882636: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [003] d.h.   552.882638: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [003] d.h.   552.882640: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.882641: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [003] d.h.   552.882645: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.882648: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] d.h.   552.882649: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   552.882651: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] ..s.   552.882652: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.882657: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.882659: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.882659: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.882666: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] .ns.   552.882668: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.882669: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [003] .ns.   552.882670: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.882673: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.882673: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.882674: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.882675: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [003] .ns.   552.882683: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.882684: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [003] .ns.   552.882685: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.882689: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [003] .ns.   552.882690: softirq_exit: vec=9 [action=RCU]
     kworker/3:0-1639  [003] d.h.   552.882730: irq_handler_entry: irq=162 name=arch_timer
     kworker/3:0-1639  [003] d.h.   552.882742: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.882752: irq_handler_entry: irq=17 name=3f00b880.mailbox
          <idle>-0     [000] d.h.   552.882756: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [17] handler: bcm2835_mbox_irq+0x0/0x94 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.882772: irq_handler_exit: irq=17 ret=handled
 systemd-journal-124   [001] d.h.   552.882947: irq_handler_entry: irq=162 name=arch_timer
 systemd-journal-124   [001] dnh.   552.882968: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.883358: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883361: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883369: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.883473: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883477: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883481: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883484: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.883487: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.883494: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883529: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883532: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883540: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883542: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.883546: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.883552: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883581: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883584: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883589: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   552.883593: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883596: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883599: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883601: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.883604: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.883610: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883685: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883688: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883699: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883700: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.883704: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.883710: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883747: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883750: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883757: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883759: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.883773: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.883779: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   552.883802: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.883808: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   552.883876: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   552.883902: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.883905: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.883914: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.883915: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.883919: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.883925: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   552.884971: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.884989: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.887589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.887592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.887597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.887599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.887602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.887604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.887606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.887609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.887624: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.887716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.887720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.887723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.887725: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.887728: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.887730: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.887731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.887734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.887745: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.892622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.892623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.892624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.892631: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.892632: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.892635: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.892636: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.892638: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.892641: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.892642: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.892645: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.892649: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.892650: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] .ns.   552.892651: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.892653: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   552.892655: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.892657: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.892658: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   552.892661: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] .ns.   552.892664: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] .ns.   552.892667: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.892668: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] .ns.   552.892669: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.892669: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.892673: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.892674: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.892680: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.892681: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.892682: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] .ns.   552.892682: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] .ns.   552.892684: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.892687: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] .ns.   552.892689: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.895589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.895594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.895598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.895600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.895603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.895605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.895606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.895609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.895621: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.895719: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.895722: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.895725: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.895727: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.895730: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.895732: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.895733: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.895736: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.895744: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.902622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.902623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.902624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.902629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.902630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.902631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.902633: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.902635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.902635: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.902636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.902639: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.902640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.902641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.902643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   552.902643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.902644: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.902646: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.902646: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.902647: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.902649: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.902651: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.902661: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.902661: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.902662: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.902663: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.902667: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.902667: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.902668: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.902669: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.902683: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.903589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.903593: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.903596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.903597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.903600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.903602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.903604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.903607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.903614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.903715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.903718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.903721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.903723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.903726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.903728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.903729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.903732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.903738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.911588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.911591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.911594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.911596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.911599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.911601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.911602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.911605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.911611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.911715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.911718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.911721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.911722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.911725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.911727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.911729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.911732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.911738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.912622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.912623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.912627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.912629: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.912629: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.912632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.912632: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.912635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.912636: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.912638: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.912639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.912641: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.912641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.912643: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.912644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.912646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.912656: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.912656: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.912657: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.912658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   552.912661: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.912661: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.919588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.919592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.919595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.919597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.919600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.919601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.919603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.919606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.919613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.919715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.919718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.919721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.919723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.919725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.919727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.919729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.919732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.919738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.922622: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.922623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   552.922627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.922628: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.922628: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   552.922630: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.922631: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.922633: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.922633: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.922634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.922636: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.922637: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] d.h.   552.922638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.922639: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   552.922639: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.922640: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.922642: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.922643: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.922643: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   552.922644: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.922645: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.922646: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.922657: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.922658: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.922663: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.922665: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.922666: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.922671: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.922673: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.922680: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] .ns.   552.922681: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.922681: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.922685: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.922741: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.922745: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.922750: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.922752: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.922756: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.922764: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.922794: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.922797: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.922801: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.922803: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.922807: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.922813: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.922838: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   552.922841: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.922845: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.922847: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   552.922850: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   552.922856: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   552.927588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.927591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.927595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.927596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.927599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.927601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.927603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.927606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.927613: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.927715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.927718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.927721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.927723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.927726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.927727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.927729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.927732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.927738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.932623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.932630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.932634: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.932638: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.932641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.932644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.932645: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.932657: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.935588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.935591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.935594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.935596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.935599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.935601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.935602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.935605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.935612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.935715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.935718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.935721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.935723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.935726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.935727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.935729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.935732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.935738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.942623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.942627: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.942627: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.942631: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.942632: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.942635: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   552.942637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.942637: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.942640: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.942641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.942642: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   552.942643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.942653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.942654: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.942655: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.942668: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   552.943588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.943591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.943594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.943596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.943599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.943600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.943602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.943605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.943611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.943715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.943720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.943723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.943724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.943727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.943729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.943731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.943734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.943740: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.951588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.951591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.951594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.951596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.951599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.951601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.951603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.951606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.951612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.951715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.951718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.951721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.951723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.951726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.951728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.951729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.951732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.951738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   552.952623: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] d.h.   552.952630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [001] d.h.   552.952632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [001] d.h.   552.952635: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [001] d.h.   552.952639: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [001] ..s.   552.952641: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.952644: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [001] ..s.   552.952646: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.952658: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [001] ..s.   552.952659: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [001] ..s.   552.952695: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.957585: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.957600: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.959588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.959592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.959594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.959596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.959599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.959601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.959603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.959606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.959612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.959715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.959719: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.959721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.959723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.959726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.959728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.959730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.959733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.959738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.962624: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   552.962632: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   552.962635: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [002] d.h.   552.962638: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   552.962643: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   552.962646: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.962665: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   552.962667: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.962681: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   552.962683: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [002] .ns.   552.962687: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   552.967588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.967591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.967594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.967596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.967599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.967601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.967603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.967605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.967612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.967715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.967718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.967721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.967722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.967725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.967727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.967729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.967732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.967738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.975592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.975595: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.975598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.975600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.975603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.975605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.975606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.975609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.975616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.975715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.975718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.975721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.975723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.975726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.975728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.975729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.975732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.975738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.983591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.983594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.983597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.983599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.983602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.983604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.983605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.983608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.983614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.983715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.983718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.983721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.983723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.983726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.983728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.983729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.983732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.983738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   552.985127: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   552.985141: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   552.991588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.991591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.991594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.991596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.991599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.991601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.991603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.991605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.991612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.991715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.991718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.991721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.991723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.991726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.991727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.991729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.991732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.991738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.999591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.999594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.999597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.999599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.999602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.999604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.999605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.999608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.999615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   552.999715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   552.999718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.999721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.999723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   552.999726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.999728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   552.999729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   552.999732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   552.999738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.007591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.007594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.007597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.007599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.007602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.007604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.007605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.007608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.007614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.007716: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.007720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.007723: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.007724: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.007727: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.007729: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.007731: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.007734: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.007739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.012625: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [000] d.h.   553.012630: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [000] d.h.   553.012632: softirq_raise: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   553.012636: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [000] d.h.   553.012640: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] ..s.   553.012642: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   553.012654: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [000] ..s.   553.012656: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   553.012668: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [000] ..s.   553.012669: softirq_entry: vec=9 [action=RCU]
          <idle>-0     [000] ..s.   553.012674: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   553.015589: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.015592: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.015596: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.015597: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.015600: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.015602: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.015604: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.015607: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.015614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.015715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.015718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.015721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.015723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.015726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.015728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.015729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.015732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.015738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.023591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.023594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.023598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.023599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.023602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.023604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.023606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.023609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.023615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.023715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.023718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.023721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.023722: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.023725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.023727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.023729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.023732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.023738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.031588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.031591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.031594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.031596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.031599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.031601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.031602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.031605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.031611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.031715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.031718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.031721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.031723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.031725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.031727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.031729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.031732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.031738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.039591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.039594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.039598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.039599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.039602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.039604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.039606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.039609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.039615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.039715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.039718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.039721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.039723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.039726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.039728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.039729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.039732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.039738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.047591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.047594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.047597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.047599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.047602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.047604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.047605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.047608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.047614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.047715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.047718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.047721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.047723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.047725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.047727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.047729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.047732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.047738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.055591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.055594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.055597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.055598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.055601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.055603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.055605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.055608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.055614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.055715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.055718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.055721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.055723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.055726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.055728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.055729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.055732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.055738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.059588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.059591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.059594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.059596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.059599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.059601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.059602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.059605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.059612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.059715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.059718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.059721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.059723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.059725: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.059727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.059729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.059732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.059738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.063591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.063596: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.063599: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.063600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.063603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.063605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.063607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.063610: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.063616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.063715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.063718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.063721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.063723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.063726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.063728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.063730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.063733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.063739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.071588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.071591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.071594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.071596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.071599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.071601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.071603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.071605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.071612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.071715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.071718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.071721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.071723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.071726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.071728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.071729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.071732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.071738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.079591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.079594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.079597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.079599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.079602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.079604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.079606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.079608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.079615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.079715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.079718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.079721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.079723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.079726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.079728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.079729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.079732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.079738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   553.085286: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   553.085301: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   553.087588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.087591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.087594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.087596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.087599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.087601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.087603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.087605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.087612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.087715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.087718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.087721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.087723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.087726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.087728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.087729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.087732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.087738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   553.091271: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   553.091286: irq_handler_exit: irq=162 ret=handled
          mysqld-781   [001] d.h.   553.091327: irq_handler_entry: irq=162 name=arch_timer
          mysqld-781   [001] d.h.   553.091354: irq_handler_exit: irq=162 ret=handled
          mysqld-783   [001] d.h.   553.091405: irq_handler_entry: irq=162 name=arch_timer
          mysqld-783   [001] d.h.   553.091435: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [003] d.h.   553.092198: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [003] dnh.   553.092214: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   553.095591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.095594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.095597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.095599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.095602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.095604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.095606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.095609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.095615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.095715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.095718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.095721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.095723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.095726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.095728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.095730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.095732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.095738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.103591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.103594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.103597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.103598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.103602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.103603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.103605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.103608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.103614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.103715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.103718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.103721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.103723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.103726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.103728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.103730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.103733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.103739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.111588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.111591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.111594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.111596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.111599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.111601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.111602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.111605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.111611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.111715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.111718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.111721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.111723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.111726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.111728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.111729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.111732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.111738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.119591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.119594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.119598: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.119599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.119602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.119604: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.119606: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.119609: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.119615: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.119715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.119718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.119721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.119723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.119726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.119728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.119729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.119732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.119738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.127592: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.127596: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.127599: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.127600: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.127603: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.127605: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.127607: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.127610: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.127616: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.127715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.127718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.127721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.127723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.127726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.127727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.127729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.127732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.127738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.135591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.135594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.135597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.135599: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.135602: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.135603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.135605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.135608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.135614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.135715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.135718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.135721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.135723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.135726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.135728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.135729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.135732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.135738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.143591: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.143594: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.143597: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.143598: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.143601: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.143603: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.143605: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.143608: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.143614: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.143715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.143718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.143721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.143723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.143726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.143728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.143729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.143732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.143738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.151588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.151591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.151594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.151596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.151599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.151600: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.151602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.151605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.151611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.151715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.151718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.151721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.151723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.151726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.151727: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.151729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.151732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.151738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [001] d.h.   553.151884: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [001] dnh.   553.151907: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] d.h.   553.152628: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   553.152632: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] d.h.   553.152637: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   553.152641: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] ..s.   553.152643: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   553.152653: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] ..s.   553.152654: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] ..s.   553.152668: softirq_exit: vec=7 [action=SCHED]
          <idle>-0     [002] d.h.   553.154956: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] d.h.   553.154966: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   553.159588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.159591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.159594: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.159596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.159599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.159601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.159602: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.159605: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.159611: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.159715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.159718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.159721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.159723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.159726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.159728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.159729: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.159732: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.159738: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.167193: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.167196: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167203: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   553.167308: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.167311: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167316: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167317: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.167321: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.167327: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167364: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.167367: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167377: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167379: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.167382: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.167388: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167417: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.167420: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167425: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   553.167428: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.167431: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167434: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167436: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.167439: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.167445: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167497: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.167500: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167504: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167506: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.167509: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.167518: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.167588: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.167591: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167595: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.167596: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.167599: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167601: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.167603: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.167606: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167612: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.167715: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.167718: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167721: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.167723: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.167726: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167728: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.167730: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.167733: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.167739: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [002] d.h.   553.170535: irq_handler_entry: irq=162 name=arch_timer
          <idle>-0     [002] dnh.   553.170547: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   553.170566: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.170569: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.170573: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.170575: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.170578: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.170585: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.170628: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.170630: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.170640: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.170642: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.170645: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.170651: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.170688: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.170691: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.170699: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.170703: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.170706: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.170712: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   553.170735: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   553.170739: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   553.170812: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   553.170837: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.170841: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.170852: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.170854: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.170857: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.170863: softirq_exit: vec=6 [action=TASKLET]
            bash-1512  [000] d.h.   553.171884: irq_handler_entry: irq=86 name=mmc1
            bash-1512  [000] d.h.   553.171892: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
            bash-1512  [000] d.h.   553.171904: irq_handler_exit: irq=86 ret=handled
            bash-1512  [000] d.h.   553.171912: irq_handler_entry: irq=86 name=mmc1
            bash-1512  [000] d.h.   553.171915: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
            bash-1512  [000] d.h.   553.171920: softirq_raise: vec=6 [action=TASKLET]
            bash-1512  [000] d.h.   553.171922: irq_handler_exit: irq=86 ret=handled
            bash-1512  [000] ..s.   553.171925: softirq_entry: vec=6 [action=TASKLET]
            bash-1512  [000] ..s.   553.171934: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [002] d.h.   553.172618: irq_handler_entry: irq=162 name=arch_timer
           <...>-1767  [003] d.h.   553.172623: irq_handler_entry: irq=162 name=arch_timer
            bash-1512  [000] d.h.   553.172625: irq_handler_entry: irq=162 name=arch_timer
            bash-1512  [000] d.h.   553.172636: softirq_raise: vec=1 [action=TIMER]
           <...>-1767  [003] d.h.   553.172641: softirq_raise: vec=1 [action=TIMER]
          <idle>-0     [002] dnh.   553.172641: softirq_raise: vec=1 [action=TIMER]
           <...>-1767  [003] d.h.   553.172644: softirq_raise: vec=9 [action=RCU]
           <...>-1767  [003] d.h.   553.172655: softirq_raise: vec=7 [action=SCHED]
          <idle>-0     [002] dnh.   553.172658: softirq_raise: vec=7 [action=SCHED]
            bash-1512  [000] d.h.   553.172663: softirq_raise: vec=7 [action=SCHED]
           <...>-1767  [003] d.h.   553.172663: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [002] dnh.   553.172664: irq_handler_exit: irq=162 ret=handled
           <...>-1767  [003] ..s.   553.172666: softirq_entry: vec=1 [action=TIMER]
            bash-1512  [000] d.h.   553.172670: irq_handler_exit: irq=162 ret=handled
            bash-1512  [000] ..s.   553.172673: softirq_entry: vec=1 [action=TIMER]
           <...>-1767  [003] ..s.   553.172673: softirq_exit: vec=1 [action=TIMER]
           <...>-1767  [003] ..s.   553.172675: softirq_entry: vec=7 [action=SCHED]
          <idle>-0     [002] .ns.   553.172676: softirq_entry: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   553.172679: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   553.172681: softirq_entry: vec=7 [action=SCHED]
            bash-1512  [000] ..s.   553.172691: softirq_exit: vec=1 [action=TIMER]
          <idle>-0     [002] .ns.   553.172691: softirq_exit: vec=7 [action=SCHED]
            bash-1512  [000] ..s.   553.172692: softirq_entry: vec=7 [action=SCHED]
           <...>-1767  [003] ..s.   553.172694: softirq_exit: vec=7 [action=SCHED]
           <...>-1767  [003] ..s.   553.172696: softirq_entry: vec=9 [action=RCU]
            bash-1512  [000] ..s.   553.172702: softirq_exit: vec=7 [action=SCHED]
           <...>-1767  [003] ..s.   553.172703: softirq_exit: vec=9 [action=RCU]
          <idle>-0     [000] d.h.   553.175605: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.175618: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.175627: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.175631: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.175637: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.175640: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.175642: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.175645: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.175663: irq_handler_exit: irq=56 ret=handled
          <idle>-0     [000] d.h.   553.175717: irq_handler_entry: irq=56 name=dwc_otg
          <idle>-0     [000] d.h.   553.175720: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_common_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.175724: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.175725: irq_handler_entry: irq=56 name=dwc_otg_pcd
          <idle>-0     [000] d.h.   553.175728: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: dwc_otg_pcd_irq+0x0/0x28 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.175730: irq_handler_exit: irq=56 ret=unhandled
          <idle>-0     [000] d.h.   553.175732: irq_handler_entry: irq=56 name=dwc_otg_hcd:usb1
          <idle>-0     [000] d.h.   553.175735: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [56] handler: usb_hcd_irq+0x0/0x48 caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.175747: irq_handler_exit: irq=56 ret=handled
 systemd-journal-124   [001] d.h.   553.178035: irq_handler_entry: irq=162 name=arch_timer
 systemd-journal-124   [001] dnh.   553.178096: irq_handler_exit: irq=162 ret=handled
          <idle>-0     [000] d.h.   553.179739: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.179748: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.179758: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   553.179923: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.179928: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.179935: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.179938: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.179943: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.179971: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180011: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.180014: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.180024: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180026: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.180029: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.180035: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180065: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.180068: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.180074: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] d.h.   553.180078: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.180081: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.180084: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180086: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.180090: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.180096: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180185: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.180189: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.180199: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180201: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.180204: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.180211: softirq_exit: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180251: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.180254: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.180262: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180264: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.180267: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.180274: softirq_exit: vec=6 [action=TASKLET]
    kworker/u8:2-1735  [002] d...   553.180299: softirq_raise: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   553.180305: softirq_entry: vec=3 [action=NET_RX]
    kworker/u8:2-1735  [002] ..s.   553.180385: softirq_exit: vec=3 [action=NET_RX]
          <idle>-0     [000] d.h.   553.180412: irq_handler_entry: irq=86 name=mmc1
          <idle>-0     [000] d.h.   553.180415: __handle_irq_event_percpu+0x70/0x26c: [+] irq: [86] handler: bcm2835_mmc_irq+0x0/0x6ec caller: (handle_irq_event_percpu) 
          <idle>-0     [000] d.h.   553.180423: softirq_raise: vec=6 [action=TASKLET]
          <idle>-0     [000] d.h.   553.180425: irq_handler_exit: irq=86 ret=handled
          <idle>-0     [000] ..s.   553.180429: softirq_entry: vec=6 [action=TASKLET]
          <idle>-0     [000] ..s.   553.180435: softirq_exit: vec=6 [action=TASKLET]
