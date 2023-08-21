#include "main.h"

/**
 * char *_strcpy - copies the string being pointed at.
 * @x : destination to copy to
 * @y: where to copy from
 * Return: destination
 */

char *_strcpy(char *x, char *y)
{
	int i = 0;
	int z = 0;

	while (*(y + i) != '\0')
	{
		i++;
	}
	for ( ; z < i; z++)
	{
		x[z] = y[z];
	}
	z[i] = '\0';
	return (x);
}
