#include "main.h"

/**
 * print_times_table - print times table of n
 *
 * @n: starting point
 * Description: prints times table
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n > 0)
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
