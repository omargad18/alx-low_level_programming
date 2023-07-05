#include "main.h"

/**
 * factorial - function that return factorial of a number
 *
 * @n: input int
 *
 * Return: int
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
