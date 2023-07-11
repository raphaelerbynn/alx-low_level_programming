#include "main.h"
#include <ctype.h>

/**
 * _isupper - check if is upper
 *
 * @c: char to check
 * Description: check if c is super
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
