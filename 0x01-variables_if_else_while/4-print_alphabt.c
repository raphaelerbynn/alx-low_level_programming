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

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' || a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
