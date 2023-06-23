#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the input size of square
 *
 * Return: Always 0
*/

void print_square(int size)
{
	int length, width;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
