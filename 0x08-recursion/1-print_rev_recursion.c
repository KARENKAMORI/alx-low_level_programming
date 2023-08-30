#include "main.h"

/**
 * _print_rev_recursion - Function Printing a string in reverse
 * @s: input string
 * Return: 1 On success
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
