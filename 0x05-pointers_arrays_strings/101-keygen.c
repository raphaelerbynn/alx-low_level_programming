#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0, i, diff;
    char password[100];

    srand(time(NULL));

    while (sum < 2772)
    {
        password[sum] = rand() % 94 + 33;
        sum += password[sum];
    }

    diff = sum - 2772;
    password[sum] = '\0';

    if (diff > 0)
    {
        for (i = 0; i < 100 && diff > 0; i++)
        {
            if (password[i] >= 33 && password[i] <= 126)
            {
                password[i]--;
                diff--;
            }
        }
    }
    else if (diff < 0)
    {
        for (i = 0; i < 100 && diff < 0; i++)
        {
            if (password[i] >= 33 && password[i] <= 126)
            {
                password[i]++;
                diff++;
            }
        }
    }

    printf("%s", password);

    return (0);
}

