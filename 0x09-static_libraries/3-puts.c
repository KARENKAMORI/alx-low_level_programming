#include "main.h"
/**
 * _puts - function prints a string then a new line.
 * @str: input string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
