#include <stdio.h>

/**
 * main - fizz buzz test
 *
 * Description: check if c is digit
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fuzz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
