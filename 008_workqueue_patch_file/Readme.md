## 1. bcm2835_mailbox.c
### bcm2835_mbox_irq 인터럽트 핸들러에서 인터럽트 후반부 기업으로 workqueue를 적용시켜 보기 위함

### line 36 ~ 37 : workqueue를 사용하기 위해 헤더파일 include 및 work구조체 선언
``` c
+   #include <linux/workqueue.h>
+   struct work_struct bcm2835_mbox_work;
```

### line 77 ~ 89 : 인터럽트 후반부를 처리할 콜백함수 선언
``` c
+  void bcm2835_mbox_work_callback(struct work_struct* ignored)
+  {
+      void* stack;
+      struct thread_info* current_thread;
+ 
+      stack = current->stack;
+      current_thread = (struct thread_info*)stack;
+ 
+      trace_printk("current process : %s \n", current->comm);
+      trace_printk("[+] in_interrupt:0x%08x, preempt_count : 0x%08x, stack : 0x%08lx \n", (unsigned int)in_interrupt(), (unsigned int)current_thread->preempt_count, (long unsigned int)stack);
+ 
+      dump_stack();
+  }
 ```
 
 ### line 107 ~ 123 : schedule_work함수를 사용하여 work를 workqueue에 큐잉 , irq_thread를 확인하기 위해 바꾸었던 return값을 원래대로 복구
 ``` c
static irqreturn_t bcm2835_mbox_irq(int irq, void *dev_id)
{
    struct bcm2835_mbox *mbox = dev_id;
    struct device *dev = mbox->controller.dev;
    struct mbox_chan *link = &mbox->controller.chans[0];

    while (!(readl(mbox->regs + MAIL0_STA) & ARM_MS_EMPTY)) {
        u32 msg = readl(mbox->regs + MAIL0_RD);
        dev_dbg(dev, "Reply 0x%08X\n", msg);
        mbox_chan_received_data(link, &msg);
    }

+   schedule_work(&bcm2835_mbox_work);

+   return IRQ_HANDLED;
+   // return IRQ_WAKE_THREAD;
}
```

### line 181 ~ 232 : bcm2835_mbox_probe함수에서 INIT_WORK를 사용하여 work구조체 초기화 및 callback함수와 엮기
``` c
static int bcm2835_mbox_probe(struct platform_device *pdev)
{
    ------
    
+   INIT_WORK(&bcm2835_mbox_work, bcm2835_mbox_work_callback);
    
    ------
}
```



