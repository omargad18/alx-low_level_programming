#include "main.h"

/**
 * main - entry point
 *
 * Description: computes the sum of all multiples of 3 or 5
 * below 1024 (excluded)
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num, sum;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum = sum + num;
	}
	printf("%d\n", sum);

	return (0);
}
