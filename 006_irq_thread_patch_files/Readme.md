## 
### Line 294 ~ 313
### 
``` c
294	int irq_thread_enable = !strncmp(namefmt, "irq", 3);
295	char* process_name = &namefmt[0];

296	if (!create)
		return ERR_PTR(-ENOMEM);
	create->threadfn = threadfn;
	create->data = data;
	create->node = node;
	create->done = &done;

	if(process_name)
	{
		printk("[+] process_name : %s caller : (%pS) \n", process_name, (void*)__builtin_return_address(0));
	}
	if(irq_thread_enable)
	{
		void* irq_threadfn = (void*)threadfn;
		printk("[+] irq_thread handler : %pS caller : (%pS) \n", irq_threadfn, (void*)__builtin_return_address(0));
		dump_stack();
	}
```
