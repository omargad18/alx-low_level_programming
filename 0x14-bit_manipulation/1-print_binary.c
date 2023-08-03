#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print
*/

void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8, print = 0;

	while (bin)
	{
		if (n & 1L << --bin)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
