#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory storage destination
 *@src: memory source to copy from
 *@n: bytes
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
