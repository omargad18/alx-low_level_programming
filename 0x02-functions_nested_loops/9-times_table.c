#include "main.h"

/**
 * times_table - function prints the 9 times table
*/

void times_table(void)
{
	int row, num, result;

	for (row = 0; row <= 9; row++)
	{
		for (num = 0; num <= 9; num++)
		{
			result = row * num;
			_putchar(',');
			_putchar(' ');

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);

			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
