#include "main.h"

/**
 * _sqrt_recursion2 - function evaluates from 1 to n
 * @x: similar to n
 * @y: iterates from 1 to n
 * Return: 1 on success.
 */
int _sqrt_recursion2(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt_recursion2(x, y + 1));
}
/**
 * _sqrt_recursion - returns square root of n
 * @n: Integer
 * Return: 1 On success.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}
