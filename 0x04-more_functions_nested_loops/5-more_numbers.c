#include "main.h"

/**
 * more_numbers - function that prints 10 times numbers from 0 to 14
 *
 * Return: Always 0
*/

void more_numbers(void)
{
	int num, row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			num = col;
			if (col > 9)
			{
				_putchar(1 + 48);
				num = col % 10;
			}
			_putchar('\n');
		}
	}
}
