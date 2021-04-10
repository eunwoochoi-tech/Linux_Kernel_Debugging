#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/list.h>

static int __init list_init(void)
{
	pr_info("list_init \n");
	return 0;
}

static void __exit list_exit(void)
{
	pr_info("list_exit \n");
}


module_init(list_init);
module_exit(list_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("EUNWOO");
MODULE_DESCRIPTION("LIST_HEAD TEST");
