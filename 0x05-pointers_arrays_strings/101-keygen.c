#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random number generation
 * program 101-crackme passwords
 *
 * Return: 0 to indicate success
 */
int main(void)
{
	int passw[100];
	int i, n, sum;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passw[i] = rand() % 78;
		sum += (passw[i] + '0');
		putchar(passw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

