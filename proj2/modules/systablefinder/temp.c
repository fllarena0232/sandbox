#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/kallsyms.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A module to locate sys_call_table address.");
MODULE_VERSION("1.0");

static unsigned long *sys_call_table;

static int __init find_sys_call_table_init(void) {
    // Lookup the address of sys_call_table
    sys_call_table = (unsigned long*)kallsyms_lookup_name("sys_call_table");
    
    if (!sys_call_table) {
        pr_alert("Could not find sys_call_table address.\n");
        return -EFAULT;
    }

    pr_info("sys_call_table address: %px\n", sys_call_table);
    return 0;
}

static void __exit find_sys_call_table_exit(void) {
    pr_info("Module unloaded.\n");
}

module_init(find_sys_call_table_init);
module_exit(find_sys_call_table_exit);

