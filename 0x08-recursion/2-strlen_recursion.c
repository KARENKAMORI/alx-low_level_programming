#include "main.h"

/**
 * _strlen_recursion - Recursive function returning string length.
 * @s: input string
 * Return: 1 On success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
