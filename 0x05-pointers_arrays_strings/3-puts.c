#include "main.h"

/**
 * _puts - prints a string and a new line to stdout
 * @x: input string
 */

void _puts(char *x)
{
	while (*x != '\0')
	{
		_putchar(*x++);
	}
	_putchar('\n');
}
