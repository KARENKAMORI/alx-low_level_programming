#include "main.h"

/**
 * char *_strcpy - copy string to a destination
 * @d: destination
 * @s: source
 * Return: string
 */
char *_strcpy(char *d, char *s)
{
	int i = 0;
	int x = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	for ( ; x < i ; x++)
	{
		d[x] = s[x];
	}
	d[l] = '\0';
	return (d);
}
