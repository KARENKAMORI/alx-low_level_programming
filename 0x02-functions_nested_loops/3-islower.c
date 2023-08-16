#include "main.h"

/**
 *_islower - a function that checks for lowercase characters
 *@x: character that will be checked
 * Return: 1 is for lowercase, 0 is dor the rest
 */
int _islower(int x)
{
	if (x >= 97 && x <= 122)
	{
		return (1);
	}
	return (0);
}
