#include <stdio.h>

/**
 * bmain - executes before main function
 * return: doesnt return anything
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
