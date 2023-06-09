#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print last digit of int
 *
 * @i: int to check
 * Description: print last digit of i
 * Return: last digit of i
 */
int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
	{
		ld *= -1;
	}

	_putchar(ld + '0');
	return (ld);
}
