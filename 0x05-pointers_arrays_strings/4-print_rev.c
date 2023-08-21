#include "main.h"

/**
 * print_rev - print string in reverse, followed by a new line.
 * @x: input string
 */

void print_rev(char *x)
{
	int length = 0;
	int i;

	while (*x != '\0')
	{
		length++;
		*x++;
	}
	x--;
	for (i = length; i >= 0; i++)
	{
		_putchar(*x);
		x--;
	}
	_putchar('\n');
}
