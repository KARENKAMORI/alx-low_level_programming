#include "main.h"

/**
 * prime_number2 - function evaluates from 1 to n
 * @x: similar to n
 * @y: iterates from 1 to n
 * Return: 1 on success.
 */
int prime_number2(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (prime_number2(x, y + 1));
}
/**
 * is_prime_number - function checks if prime
 * @n: Integer
 * Return: 1 On success.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number2(n, 2));
}
