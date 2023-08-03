#include "main.h"

/**
 * flip_bits - function returns number of bits you flip from number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		if (xor & 1ul)
			count++;
		xor = xor >> 1;
	}
	return (count);
}
