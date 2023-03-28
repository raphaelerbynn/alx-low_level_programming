#include "main.h"

/**
 * puts2 - point to 98
 *
 * @str: pointer value
 * Description: reset to 98
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
