#include "main.h"

/**
 * print_triangle - print line
 *
 * @size: param to count
 * Description: check if c is digit
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0;; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
