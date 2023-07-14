#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - Prints an error message and exits with status 98.
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number.
 * @num2: The second number.
 */
void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, product;
	int *result;

	while (num1[len1] != '\0')
	{
		if (!_isdigit(num1[len1]))
			print_error();
		len1++;
	}

	while (num2[len2] != '\0')
	{
		if (!_isdigit(num2[len2]))
			print_error();
		len2++;
	}

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
		exit(98);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i] += carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;
	while (i < len1 + len2)
		printf("%d", result[i++]);
	printf("\n");

	free(result);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error();
	}

	multiply(argv[1], argv[2]);

	return 0;
}

