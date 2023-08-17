#include "main.h"

/**
 * print_square - printing a square
 * @x : square size
 * Return: void
 */
void print_square(int x)
{
	int i, j;

	if (x <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < x; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
