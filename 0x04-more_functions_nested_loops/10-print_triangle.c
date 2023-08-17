#include "main.h"

/**
 * print_triangle - printing a square
 * Description: i prints row
 * @x : triangle size
 * Return: void
 */
void print_triangle(int x)
{
	int i, j, k;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= x; i++)
		{
			for (k = x - i; k >= 1; k--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
