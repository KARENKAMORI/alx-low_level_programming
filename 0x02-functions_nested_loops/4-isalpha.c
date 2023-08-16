#include "main.h"

/**
 *_isalpha - a function that checks for alphabet characters
 *@x: character that will be checked
 * Return: 1 is for lowercase, 0 is dor the rest
 */
int _isalpha(int x)
{
	if ((x >= 65 && x <= 97) || (x >= 97 && x <= 122))
	{
		return (1);
	}
	return (0);
}
