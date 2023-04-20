#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: Pointer to a function that takes a char* as an argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

