#include "main.h"

/**
 * rev_string - point to 98
 *
 * @s: pointer value
 * Description: reset to 98
 */
void rev_string(char *s)
{
	char *start;
	char *end;
	char temp;

	start = s;
	end = s;
	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
