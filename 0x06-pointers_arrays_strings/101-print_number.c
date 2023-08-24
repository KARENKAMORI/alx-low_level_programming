#include "main.h"

/**
 * print_number - function that prints numbers chars
 * @x: integer
 * Return: 0
 */

void print_number(int x)
{
	unsigned int y;

	y = x;

	if (x < 0)
	{
		_putchar('-');
		y = -x;
	}

	if (y / 10 != 0)
	{
		print_number(y / 10);
	}
	_putchar((y % 10) + '0');
}
