#include "main.h"
/**
 * _strpbrk - Program's entry point
 * @s: value input
 * @accept: value input
 * Return: 0 indicates success
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}
