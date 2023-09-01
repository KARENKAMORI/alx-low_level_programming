#include "main.h"
/**
 * _memset - function fills memory block with a specific value
 * @s: memory starting address
 * @b: value to be filled
 * @n: bytes to be changed
 *
 * Return: array with n changed bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
