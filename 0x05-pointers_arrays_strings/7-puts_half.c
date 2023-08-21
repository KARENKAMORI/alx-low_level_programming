#include "main.h"

/**
 * puts_half - prints half a string.
 * @s: input string
 * if string is of odd length, (y = length - 1) / 2
 * Return: half input
 */

void puts_half(char *s)
{
	int x, y, length;

	length = 0;
	for (x = 0; s[x] != '\0'; x++)
		length++;

	y = (length / 2);

	if ((length % 2) == 1)
		y = ((length + 1) / 2);

	for (x = y; s[x] != '\0'; x++)
		_putchar(s[x]);
	_putchar('\n');
}
