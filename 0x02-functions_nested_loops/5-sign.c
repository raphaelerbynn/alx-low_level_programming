#include "main.h"

/**
 * print_sign - print sign
 *
 * @n: int to check
 * Description: check and print sign of n
 * Return: 1 if pos, 0 if zero, -1 if neg
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	{
		return (1);
	}
	else if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
