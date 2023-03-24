#include "main.h"

/**
 * print-diagonal - print line
 *
 * @n: param to count
 * Description: check if c is digit
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
