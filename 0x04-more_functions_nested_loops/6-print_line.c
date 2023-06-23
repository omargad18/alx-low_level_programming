#include "main.h"

/**
 * print_line - function that prints straight line
 *
 * @n: input number of _ to be printed
*/

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
