#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all its paramters.
 * @n: paramter number.
 * @...: paramters to calculate the sum of.
 *
 * Return: n == 0 - 0. else return sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
