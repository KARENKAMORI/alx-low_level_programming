#include "main.h"

/**
 * rev_string - function to reverse array
 * @n: integer
 * Return: 0
 */

void rev_string(char *n)
{
	int i = 0, j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

/**
 * infinite_add - adds Two numbers
 * @n1: text representation of first digit
 * @n2: text representation of second digit
 * @r: buffer pointer
 * @size_r: buffer size
 * Return: calling function pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, values = 0;
	int x = 0, y = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			x = 0;
		else
			x = *(n1 + i) - '0';
		if (j < 0)
			y = 0;
		else
			y = *(n2 + j) - '0';
		temp = x + y + overflow;
		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (values >= (size_r - 1))
			return (0);
		*(r + values) = (temp % 10) + '0';
		values++;
		j--;
		i--;
	}
	if (values == size_r)
		return (0);
	*(r + values) = '\0';
	rev_string(r);
	return (r);
}
