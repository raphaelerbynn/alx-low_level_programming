#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to a string containing the name.
 * @f: Pointer to a function that takes a char* argument and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

