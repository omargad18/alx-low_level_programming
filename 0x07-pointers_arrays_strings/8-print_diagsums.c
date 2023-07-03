#include "main.h"

/**
 * print_diagsums - function hat prints the sum of the two diagonals of a square matrix
 *
 * @a: input array of 2 int types
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int i, string1 = 0; string2 = 0;

	for (i = 0; i < size; i++)
	{
		string1 = string1 + a[i];
		string2 = string2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d", string1);
	printf("%d\n", string2);
}
