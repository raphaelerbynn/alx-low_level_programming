#include "main.h"
#include <ctype.h>

/**
 * _isdigit - check if is digit
 *
 * @c: char to check
 * Description: check if c is digit
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
