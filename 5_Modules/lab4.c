/* set up a doubly-linked circular list of data structs.
 * Test insertion and deletion */

#include <linux/sched.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/utsname.h>
#include <linux/list.h>

struct elem
{
	char id[4];
	unsigned char val;
};

static int __init my_init(void)
{

	return 0;
}

static void __exit my_exit(void)
{
	pr_info("Module Unloading\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_AUTHOR("A GENIUS");
MODULE_DESCRIPTION("LFD420:4.6 s_05/lab2.c");
MODULE_LICENSE("GPL v2");
