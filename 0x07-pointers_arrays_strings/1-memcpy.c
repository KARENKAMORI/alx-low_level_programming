#include "main.h"
/**
 * _memcpy - function copying memory area
 * @dest: memory for storage
 * @src: memory for copying
 * *@n: number of bytes
 *
 * Return: changed n bytes of copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; r++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
