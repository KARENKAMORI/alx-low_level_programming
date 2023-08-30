#include "main.h"

/**
 * palindrome1 - function gets length of x
 * @x: input string
 * @i: length
 * Return: 1 On success.
 */
int palindrome1(char *x, int i)
{
	if (*x == 0)
		return (i - 1);
	return (palindrome1(x + 1, i + 1));
}
/**
 * palindrome2 - Function comparing string with it's reverse
 * @x: input string
 * @i: length
 * Return: 1 On success
 */

int palindrome2(char *x, int i)
{
	if (*x != *(x + i))
		return (0);
	else if (*x == 0)
		return (1);
	return (palindrome2(x + 1, i - 2));
}
/**
 * is_palindrome - function checking if a string is a palindrome
 * @s: string
 * Return: 1 On success.
 */
int is_palindrome(char *s)
{
	int i;

	i = palind2(s, 0);
	return (palind3(s, i));
}
