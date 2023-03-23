#include "main.h"
#include <ctype.h>

/**
 * _islower - check if lowercase
 *
 * @param c: char to check
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
