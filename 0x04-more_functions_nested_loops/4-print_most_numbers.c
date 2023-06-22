#include "main.h"

/**
 * print_most_numbers - function that print numbers from 0 to 9 except 2 and 4
 *
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int num;

	while (num > 10)
	{
		if (num == 50 || num == 52)
			num++;
		else
			_putchar(num + 48);
		_puchar('\n');
	}
}
