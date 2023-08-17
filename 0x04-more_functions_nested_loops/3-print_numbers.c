#include "main.h"

/**
 * print_numbers - printing digits 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
