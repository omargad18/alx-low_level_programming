#include "main.h"

/**
 * _sqrt_recursion - function that return square root of number
 *
 * @n: input integer
 * @val: input square root
 *
 * Return: val or -1 if n does not have natural square root
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
