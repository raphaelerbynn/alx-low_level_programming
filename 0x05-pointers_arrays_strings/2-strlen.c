#include "main.h"

/**
 * _strlen - point to 98
 *
 * @s: pointer value
 * Description: reset to 98
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
