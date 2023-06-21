#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int num, row, result;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; ++row)
		{
			_puchar(48);
			for (num = 1; num <= n; num++)
			{
				_putchar(',');
				_putchar(' ');

				result = row * num;

				if (result <= 9)
					_putchar(' ');
				if (result <= 99)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				} else if (result <= 99 && result >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
