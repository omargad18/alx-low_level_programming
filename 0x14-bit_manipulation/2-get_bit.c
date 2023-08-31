#include "main.h"

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index
 * @n: number to index
 * @index: bit to get
 *
 * Return: bit state or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
