#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1, len2, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (len1 = 0; s1[len1] != '\0'; len1++)
        ;

    for (len2 = 0; s2[len2] != '\0'; len2++)
        ;

    if (n >= len2)
        n = len2;

    concat = malloc((len1 + n + 1) * sizeof(char));
    if (concat == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j < n; j++)
        concat[i + j] = s2[j];

    concat[i + j] = '\0';

    return concat;
}
