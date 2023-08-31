#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: int num
*/
void print_binary(unsigned long int n)
{
	int bin = sizeof(n) * 8, value = 0;

	while (bin)
	{
		if (n & 1L <<  --bin)
		{
			_putchar('1');
			value++;
		}
		else if (value)
			_putchar('0');
	}
	if (!value)
		_putchar('0');
}
