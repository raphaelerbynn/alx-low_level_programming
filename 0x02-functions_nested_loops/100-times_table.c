#include "main.h"

/**
 * print_times_table - print times table of n
 *
 * @n: starting point
 * Description: prints times table
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				_putchar(r + '0');
				if (r < n)
				{
					_putchar(',');

					if (r < 10)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (r < 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
					}
				}
				_putchar('\n');
			}
		}
	}
}
