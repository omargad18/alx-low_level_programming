#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * @...: number of integers to sum
 *
 * Return: sum of integers
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list ap;

	if (!n)
		return (0);

	va_start(ap, n);
	while (i--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
