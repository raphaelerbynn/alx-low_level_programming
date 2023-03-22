#include "main.h"

/**
 * print_alphabet_x10 - print with func
 *
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
