#include "main.h"

/**
 * print_number - multiply two int
 *
 * @n: first int
 * Description: multiplies two numbers
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_puthchar(n % 10 + '0');
}
