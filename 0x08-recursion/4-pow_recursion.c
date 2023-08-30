#include "main.h"

/**
 * _pow_recursion - function raises x to power y
 * @x: Digit Integer
 * @y: Power integer
  * Return: 1 On success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
