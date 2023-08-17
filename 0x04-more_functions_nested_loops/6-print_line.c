#include "main.h"

/**
 * print_line - printing a straight line
 * @x : total items
 * Return: 0
 */
void print_line(int x)
{
	int i;

	for (i = 0; i < x; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
