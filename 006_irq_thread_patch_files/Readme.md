## 1. kthread.c
### Line 294 ~ 359(__kthread_create_on_node)
### kernel thread생성시 irq thread인지 확인하여 irq thread에 대한 정보를 출력
``` c
283 struct task_struct *__kthread_create_on_node(int (*threadfn)(void *data),
284						    void *data, int node,
285						    const char namefmt[],
286						    va_list args)
287  {
289 	  DECLARE_COMPLETION_ONSTACK(done);
290    	struct task_struct *task;
291   	struct kthread_create_info *create = kmalloc(sizeof(*create),
292 						     GFP_KERNEL);
293
294 +  	int irq_thread_enable = !strncmp(namefmt, "irq", 3);
295 +  	char* process_name = &namefmt[0];
296
297 	  if (!create)
298 	  	return ERR_PTR(-ENOMEM);
299   	create->threadfn = threadfn;
300   	create->data = data;
301   	create->node = node;
302   	create->done = &done;
303
304 +  	if(process_name)
305 +  	{
306 +  		printk("[+] process_name : %s caller : (%pS) \n", process_name, (void*)__builtin_return_address(0));
307 +  	}
308 +  	if(irq_thread_enable)
309 +  	{
310 +  		void* irq_threadfn = (void*)threadfn;
311 +  		printk("[+] irq_thread handler : %pS caller : (%pS) \n", irq_threadfn, (void*)__builtin_return_address(0));
312 +  		dump_stack();
313 +  	}
	---
359  }
```



## 2. bcm2835-mailbox.c
### Line 75 ~ 104(bcm2835_mbox_irq, bcm2835_mbox_thread_irq)
### Line 162 ~ 211(bcm2835_mbox_probe)
### irq_thread를 직접 생성해보기 위해 mailbox의 probe함수에서 irq등록함수 및 interrupt handler의 return값 수정
``` c
 75 + static irqreturn_t bcm2835_mbox_thread_irq(int irq, void* dev_id)
 76 + {
 77 +   void* stack;
 78 + 	struct thread_info* current_thread;
 79 +
 80 + 	stack = current->stack;
 81 + 	current_thread = (struct thread_info*)stack;
 82 +
 83 +   trace_printk("irq=%d, process: %s \n", irq, current->comm);
 84 + 	trace_printk("[+] in_interrupt: 0x%08x, preempt_count = 0x%08x, stack = 0x%08lx \n", (unsigned int)in_interrupt(), (unsigned int)current_thread->preempt_count, (long unsigned int)stack);
 85 +
 86 + 	dump_stack();
 87 +
 88 + 	return IRQ_HANDLED;
 89 + }
 90 +
 91   static irqreturn_t bcm2835_mbox_irq(int irq, void *dev_id)
 92   {
 93   	struct bcm2835_mbox *mbox = dev_id;
 94  	struct device *dev = mbox->controller.dev;
 95  	struct mbox_chan *link = &mbox->controller.chans[0];
 96 
 97   	while (!(readl(mbox->regs + MAIL0_STA) & ARM_MS_EMPTY)) {
 98   		u32 msg = readl(mbox->regs + MAIL0_RD);
 99   		dev_dbg(dev, "Reply 0x%08X\n", msg);
100   		mbox_chan_received_data(link, &msg);
101   	}
102   	//return IRQ_HANDLED;
103 +  	return IRQ_WAKE_THREAD;
104   }

---

162  static int bcm2835_mbox_probe(struct platform_device *pdev)
163  {
164	struct device *dev = &pdev->dev;
165	int ret = 0;
166	struct resource *iomem;
167	struct bcm2835_mbox *mbox;
        ---
174	//ret = devm_request_irq(dev, platform_get_irq(pdev, 0),
175	//		       bcm2835_mbox_irq, 0, dev_name(dev), mbox);
176 +	ret = devm_request_irq(dev, platform_get_irq(pdev, 0), bcm2835_mbox_irq, bcm2835_mbox_thread_irq, dev_name(dev), mbox);
	---
211  }

```
