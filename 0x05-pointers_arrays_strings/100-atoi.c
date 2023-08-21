#include "main.h"

/**
 * _atoi - string to integer conversion
 * @x: string to be converted
 *
 * Return: integer
 */
int _atoi(char *x)
{
	int i, a, n, y, length, digit;

	i = 0;
	a = 0;
	n = 0;
	length = 0;
	y = 0;
	digit = 0;

	while (x[length] != '\0')
		len++;

	while (i < length && y == 0)
	{
		if (x[i] == '-')
			++a;

		if (x[i] >= '0' && x[i] <= '9')
		{
			digit = x[i] - '0';
			if (a % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (x[i + 1] < '0' || x[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (y == 0)
		return (0);

	return (n);
}
