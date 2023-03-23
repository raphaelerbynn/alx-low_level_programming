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
	int v = abs(i);
	int ld = v % 10;

	_putchar(ld + '0');
	return (ld);
}
