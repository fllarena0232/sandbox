#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <errno.h>

#define SYS_CALC 397  // sys_calc

int main(int argc, char*argv[]) {
        
	int param1, param2, result;
        char operation;	
	if (argc !=4)  {
		printf("Usage: %s <number> <operator> <number>\n",argv[0]);
	return 1;
	}

	param1= atoi(argv[1]);
	param2= atoi(argv[3]);
	operation = argv[2][0];

	// Call the system call
    
	long res = syscall(SYS_CALC, param1, param2, operation, &result);
    
	if (res == -1) {
		perror("Error in system call");
         	printf("Result: NaN\n");
    	} else {
        	printf("Result: %d\n", result);
    }
    return 0;
}

