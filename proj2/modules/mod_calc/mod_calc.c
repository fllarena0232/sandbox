#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kallsyms.h>
#include <linux/syscalls.h>
#include <linux/uaccess.h>
#include <linux/rwlock.h>
#include <linux/preempt.h>
#include <linux/unistd.h>
#include <linux/module.h>

// Define the system call table pointer and the read-write lock
//static unsigned long *sys_call_table;
static DEFINE_RWLOCK(sys_call_lock); // Initialize the read-write lock

// Declare a pointer to hold the original sys_calc function
static asmlinkage long (*original_sys_calc)(int, int, char, int __user *);

asmlinkage long temp(void) {
    printk(KERN_INFO "module temp");
	    return 0;
    }
	
// Replacement function that only performs modulo operation
asmlinkage long mod_calc(int param1, int param2, char operation, int __user *result) {
    int number;

    printk(KERN_INFO "in module");
    // Check for division by zero
    if (param2 == 0) {
        return -1; // Return error if dividing by zero
    }
    // Copy the integer from user space to kernel space
    if (copy_from_user(&number, result, sizeof(int))) {
        return 2; // Return error if copy fails
    }

    // Perform the modulo operation
    number = param1 % param2;

     // Copy the incremented number back to user space
    if (copy_to_user(result, &number, sizeof(int))) {
        return 3; // Return error if copy fails
    }

    return 0; // Success
}

EXPORT_SYMBOL(mod_calc);
void **find_syscall_table(void) {
   	void **syscall_table = (void **)kallsyms_lookup_name("sys_call_table");
    	if (!syscall_table) {
        	printk(KERN_ERR "Could not find syscall table\n");
    	}
    	return syscall_table;
}

static int __init mod_calc_init(void) {
    // Locate the system call table address using kallsyms
    void **syscall_table = find_syscall_table();
    if (!syscall_table){     
        pr_err("Failed to locate sys_call_table\n");
        return -2 ;//EINVAL;
    }
    // Store the original sys_calc function and replace it with mod_calc
    //original_sys_calc = (void *)sys_call_table[397];
    printk(KERN_INFO " mem location: %px", (void *)syscall_table[397]);
   
    // Disable preemption and acquire write lock
    write_lock(&sys_call_lock);
   
    //syscall_table[397] = (void *)mod_calc;
    
    // Release write lock and re-enable preemption
    write_unlock(&sys_call_lock);

    pr_info("mod_calc loaded, sys_calc now uses modulo operation\n");
    return 0;
}


static void __exit mod_calc_exit(void) {
    void **syscall_table = find_syscall_table();
    // Restore the original sys_calc function
    write_lock(&sys_call_lock);
    //syscall_table[397] = (void *)original_sys_calc;
    write_unlock(&sys_call_lock);
    pr_info("mod_calc unloaded, sys_calc restored to original\n");
}

module_init(mod_calc_init);
module_exit(mod_calc_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Kernel module to modify sys_calc behavior");
