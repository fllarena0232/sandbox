#include <linux/kernel.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE4(sys_calc, int, param1, int, param2, char, operation, int __user *, result) {
    
    int number;
 
    // Copy the integer from user space to kernel space
    if (copy_from_user(&number, result, sizeof(int))) {
        return 2; // Return error if copy fails
    }
 
    // Increment the number
    //number += 1;
      switch (operation) {
        case '+':
            number  = param1 + param2;
            break;
        case '-':
            number = param1 - param2;
            break;
        case '*':
            number = param1 * param2;
            break;
        case '/':
            if (param2 == 0) {
                return -EINVAL;  // Error for division by zero
            }
            number = param1 / param2;
            break;
        default:
            return -1;  // Invalid operation
    }

 
    // Copy the incremented number back to user space
    if (copy_to_user(result, &number, sizeof(int))) {
        return 3; // Return error if copy fails
    }
 
	// Copy the result to user-space memory
    printk(KERN_INFO "syscall: param1 %d \n",param1);
    printk(KERN_INFO "syscall: param2 %d \n",param2);
    printk(KERN_INFO "syscall: oper %c \n",operation);
    printk(KERN_INFO "syscall: res %d \n",number);

    return 0;  // Success
}
