#include "main.h"
#include <stdio.h>

/**
 * rot13 -function encoding rot13
 * @c: string params pointer
 *
 * Return: *c
 */

char *rot13(char *c)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == data[j])
			{
				c[i] = rot[j];
				break;
			}
		}
	}
	return (c);
}
