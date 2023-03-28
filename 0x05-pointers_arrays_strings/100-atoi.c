#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: integer value of string, or 0 if there are no numbers in the string
 */
int _atoi(char *s)
{
    int sign = 1;
    int num = 0;
    int started = 0;

    while (*s != '\0')
    {
        if (*s == '-' && !started)
        {
            sign *= -1;
        }
        else if (*s == '+' && !started)
        {
            sign *= 1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            started = 1;
            num = num * 10 + (*s - '0');
        }
        else if (started)
        {
            break;
        }
        s++;
    }

    return num * sign;
}

