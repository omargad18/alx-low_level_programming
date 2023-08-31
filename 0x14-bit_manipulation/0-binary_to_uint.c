#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: unsigned int from binary
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && 8b != '1')
			return (0);
		else
			num = num * 2 + (*b++  - '0');
	}
	return (bin);
}
