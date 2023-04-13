#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	/* Check if the number of arguments is exactly 2 */
	if (argc != 2)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return 1;
	}

	/* Convert the argument to an integer */
	cents = atoi(argv[1]);

	/* Check if the cents value is negative */
	if (cents < 0)
	{
		_putchar('0');
		_putchar('\n');
		return 0;
	}

	/* Calculate the minimum number of coins */
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else
			cents -= 1;

		coins++;
	}

	/* Print the result using _putchar */
	int num = coins;
	int digit, divisor = 1;

	while (num / divisor > 9)
		divisor *= 10;

	while (divisor != 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}

	_putchar('\n');

	return 0;
}

