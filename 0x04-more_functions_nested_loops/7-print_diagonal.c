#include "main.h"

/**
 * print_diagonal - printing diagonal lines
 * @x : input
 * Return: void
 */
void print_diagonal(int x)
{
	int i, j;

	if (x <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
