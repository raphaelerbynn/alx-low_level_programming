#include "main.h"

/**
 * print_rev - point to 98
 *
 * @s: pointer value
 * Description: reset to 98
 */
void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
