#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point of the program which prints alphabet without q and e
 *
 * Return: 0 indicating success
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
