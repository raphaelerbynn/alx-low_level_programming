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
	if(n > 0)
	{
		puts("is positive\n");
	}
	else if(n < 0)
	{
		puts("is negative\n");
	}
	else
	{
		puts("is zero\n");
	}
	return (0);
}
