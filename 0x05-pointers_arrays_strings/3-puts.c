#include "main.h"

/**
 * _puts - point to 98
 *
 * @str: pointer value
 * Description: reset to 98
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
