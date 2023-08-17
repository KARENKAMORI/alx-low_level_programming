#include <stdio.h>
#include "main.h"

/**
 * main - printing largest factor
 * Return: 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 1; i <= 782849; i++)
	{
		while ((n % i == 0) && (n != i))
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
