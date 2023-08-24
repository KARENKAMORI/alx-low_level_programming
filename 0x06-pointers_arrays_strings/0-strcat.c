#include "main.h"

/**
 * _strncat - function concatenating two strings
 * using at most n bytes from src
 * @src: input
 * @dest: input
 * @x: input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int x)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < x && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
