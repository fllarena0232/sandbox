/*                 Hello code for CS596 project 2  Group12     */
#include <linux/module.h>
#include <linux/kernel.h>

int init_module (void)
{
	printk(KERN_INFO "Hello Worldi! Group12 in kernel space \n");
	return 0;
}


