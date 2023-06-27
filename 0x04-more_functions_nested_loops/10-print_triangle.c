#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 * @size: input of length of triangle
*/

void print_triangle(int size)
{
	int length, width, space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 1; length <= size; length++)
		{
			for (space = size; space > length; space--)
			{
				_putchar(' ');
			}
			for (width = 1; width <= length; width++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
