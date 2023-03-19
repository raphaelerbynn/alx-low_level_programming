#include <stdio.h>
#include <stdlib.h>

/**
 * main - print string
 *
 * Description: use printf to print string
 *
 * Return: 0 for success
 */
int main(void)
{
	int n = rand();

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
