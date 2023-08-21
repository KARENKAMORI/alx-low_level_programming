#include "main.h"

/**
 * puts2 - prints every other character of a string
 * and starting with the first character, followed by a new line.
 * @x: input string
 * Return: print
 */

void puts2(char *x)
{
	int length = 0;
	int z = 0
	char *str = x;
	int i;

	while (*str != '\0')
	{
		str++;
		length++;
	}
	z = length - 1;
	for (i = 0; i <= z; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(x[i]);
		}
	}
	_putchar('\n');
}
