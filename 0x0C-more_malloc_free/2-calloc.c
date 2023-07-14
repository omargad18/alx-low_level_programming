#include "main.h"

/**
 * _memset - function that fill memory with a constant
 * @p: pointer to the constant
 * @c: constant
 * @n: max bytes
 * Return: p
*/

char *_memset(char *p, char c, unsigned int n)
{
	char *ptr = p;

	while (n--)
		*p++ = c;

	return (ptr);
}

/**
 * _calloc - function that allocate memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
