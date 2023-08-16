#include "main.h"

/**
 * print_sign - printing a number's sign
 * @x: the number to check
 * Return: 1 for +ve , -1 for negative or zero for anything else
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (x < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
