#include "main.h"

/**
 * _pow_recursion - function that return value by x to power of y
 *
 * @x: input integer
 * @y: input power value
 *
 * Return: x to the power of y or -1 if y < 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1)
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
