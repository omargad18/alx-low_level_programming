#include "main.h"

/**
 * print_line - function that prints straight line
 *
 * @n: input number of _ to be printed
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
