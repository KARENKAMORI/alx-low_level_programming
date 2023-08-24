#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input
 * @src: input
 * @x: input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int x)
{
	int i;

	i = 0;
	while (i < x && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < x)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
