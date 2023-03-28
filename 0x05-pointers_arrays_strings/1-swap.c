#include "main.h"

/**
 * swap_int - swap values
 *
 * @a: pointer value
 * @b: pointer value
 * Description: swap values
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
