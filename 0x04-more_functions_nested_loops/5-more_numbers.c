#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Description: check if c is digit
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
