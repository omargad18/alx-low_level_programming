#include "main.h"

/**
 * swap_int - swap the value of two integers using two parameters
 *
 * @a: input first integer
 * @b: input second integer
*/

void swap_int(int *a, int *b)
{
	int temp;


	temp = *a;
	*a = *b;
	*b = temp;
}
