#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array
 *
 * Return: 0 for Success
 */
int check_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))

	{
		if (!isdigit(str[i]))
		{
			return (0);
		}

		i++;
	}
	return (1);
}

/**
 * main - Prints program name
 * @argc: argument count
 * @argv: Arguments
 *
 * Return: 0 indicates Success
 */

int main(int argc, char *argv[])

{
	int count;
	int i;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))

		{
			i = atoi(argv[count]);
			sum += i;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
