#include <stdio.h>

/**
 * main - print string
 *
 * Description: use printf to print string
 *
 * Return: 0 for success
 */
int main(void)
{
	char a;

	for (a = 0; a < 10; a++)
	{
		printf("%d", a);
	}
	putchar('\n');
	return (0);
}
