#include "main.h"

/**
 * *malloc_checked - function allocate memory using malloc
 *
 * @b: input int
 *
 * Return: pointer to the array initialized or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
