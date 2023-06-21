#include "main.h"

/**
 * times_table - function prints the 9 times table
*/

void times_table(void)
{
	int row, num, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			result = row * num;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar(result / 10) + 48);

			_putchar(result % 10) + 48);
		}
		_putchar('\n');
	}
}
