#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * mul - Multiply two positive numbers
 * @num1: First number to multiply
 * @num2: Second number to multiply
 *
 * Description: This function multiplies two positive numbers represented as
 * strings and prints the result. The input numbers are passed as command line
 * arguments in base 10. The result is printed followed by a new line.
 *
 * Return: None
 */
void multiply(char *num1, char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int *result = calloc(len1 + len2, sizeof(int));

    if (result == NULL) {
        printf("Error: Failed to allocate memory.\n");
        exit(98);
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = result[i + j + 1] + mul;
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && result[i] == 0) {
        i++;
    }

    if (i == len1 + len2) {
        printf("0\n");
    } else {
        for (; i < len1 + len2; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    free(result);
}

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Description: This program multiplies two positive numbers passed as command
 * line arguments and prints the result. The input numbers are expected to be
 * in base 10. The program performs input validation to ensure that the correct
 * number of arguments are provided, and that the input numbers only consist of
 * digits. Errors are printed to stderr, and the program exits with a status of 98
 * in case of errors.
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Error: Incorrect number of arguments.\n");
        exit(98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; i < strlen(num1); i++) {
        if (!isdigit(num1[i])) {
            fprintf(stderr, "Error: Invalid input for num1.\n");
            exit(98);
        }
    }

    for (int i = 0; i < strlen(num2); i++) {
        if (!isdigit(num2[i])) {
            fprintf(stderr, "Error: Invalid input for num2.\n");
            exit(98);
        }
    }

    multiply(num1, num2);

    return 0;
}

