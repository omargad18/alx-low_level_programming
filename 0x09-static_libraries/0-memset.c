#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 *
 * @s: input pointer to put constant
 * @b: the constant
 * @n: bytes to use
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; n > 0; count++, n--)
		s[count] = b;

	return (s);
}
