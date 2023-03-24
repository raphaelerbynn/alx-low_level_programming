#include "main.h"

/**
 * print_square - print line
 *
 * @size: param to count
 * Description: check if c is digit
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
