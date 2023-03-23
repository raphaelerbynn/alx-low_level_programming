#include "main.h"

/**
 * print_times_table - print times table of n
 *
 * @n: starting point
 * Description: prints times table
 */
void print_times_table(int n)
{
	int i, j, res;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j == 0)
				{
					_putchar('0');
				}
				else if (res < 10)
				{
					_putchar(' ');
					_putchar(res + '0');
				}
				else
				{
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
