#include "main.h"
/**
 * _memset - function used to fill memory block with a given value
 * @s: Memory starting address
 * @b: value to be filled
 * @n: number of bytes to be changed
 *
 * Return: array
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
