#include <stdio.h>
#include "main.h"

/**
 * _atoi - function converting string to integer
 * @s: string input
 *
 * Return: integer converted from the string
 */
int _atoi(char *s)
{
	int i, j, n, length, x, digit;

	i = 0;
	j = 0;
	n = 0;
	length = 0;
	x = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && x == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			x = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			x = 0;
		}
		i++;
	}

	if (x == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies 2 digits
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 for Success, 1 for Error
 */
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	result = x * y;

	printf("%d\n", result);

	return (0);
}

