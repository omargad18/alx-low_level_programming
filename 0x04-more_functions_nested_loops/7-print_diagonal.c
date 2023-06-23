#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n: input of number of \ character
*/

void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
