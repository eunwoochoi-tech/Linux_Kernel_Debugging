## 
### Line 294 ~ 313
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
```
