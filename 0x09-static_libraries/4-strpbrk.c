#include "main.h"
/**
 * _strpbrk - Program Entry point
 * @s: input string
 * @accept: input string
 * Return: 0 indicates Success
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
