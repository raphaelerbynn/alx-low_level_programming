#include "main.h"

/**
 * main - print with func
 *
 * Description:using  function for printing
 * Return: 0 for success
 */
void print_alphabet(void)
{
	char a;

	while(a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return;
}
