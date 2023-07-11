#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if alpha
 *
 * @c: char to check
 * Description: check if c is alpha
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
