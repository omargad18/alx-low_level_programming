#include "main.h"

/**
 * flip_bits -  function returns number of bits to flip from number to another
 * @n:  first number
 * @m: second number
 *
 * Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int i = 0;

	while (xor)
	{
		if (xor & 1ul)
			i++;
		xor = xor >> 1;
	}
	return (i);
}
