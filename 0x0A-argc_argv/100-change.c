#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return 0;
	}

	int coins = 0;

	// Calculate number of coins for each denomination
	coins += cents / 25; // quarters
	cents %= 25;
	coins += cents / 10; // dimes
	cents %= 10;
	coins += cents / 5; // nickels
	cents %= 5;
	coins += cents / 2; // dimes
	cents %= 2;
	coins += cents; // pennies

	printf("%d\n", coins);

	return 0;
}

