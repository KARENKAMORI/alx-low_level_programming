#include <stdio.h>

/**
 * main - Entry point of the program: reversing lowercase alphabet
 *
 * Return: 0 indicates success
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
