#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print to 98s
 *
 * @n: start point
 * Description: print t oninety eight
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i >= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for (int i = n; i <= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
