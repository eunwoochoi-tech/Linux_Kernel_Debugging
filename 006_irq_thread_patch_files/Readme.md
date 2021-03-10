## 
### Line 294 ~ 313
### 
``` c
294	int irq_thread_enable = !strncmp(namefmt, "irq", 3);
295	char* process_name = &namefmt[0];
296
297	if (!create)
298		return ERR_PTR(-ENOMEM);
299	create->threadfn = threadfn;
300	create->data = data;
301	create->node = node;
302	create->done = &done;
303
304	if(process_name)
305	{
306		printk("[+] process_name : %s caller : (%pS) \n", process_name, (void*)__builtin_return_address(0));
307	}
308	if(irq_thread_enable)
309	{
310		void* irq_threadfn = (void*)threadfn;
311		printk("[+] irq_thread handler : %pS caller : (%pS) \n", irq_threadfn, (void*)__builtin_return_address(0));
312		dump_stack();
313	}
```
