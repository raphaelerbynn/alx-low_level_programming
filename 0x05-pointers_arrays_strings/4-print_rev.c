#include "main.h"

/**
 * print_rev - point to 98
 *
 * @s: pointer value
 * Description: reset to 98
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
