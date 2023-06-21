#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints first 50 Fibonacci numbers starting 1 and 2
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long a = 1, b = 2, sum = 0;

	for (i = 0; i < 50; i++)
	{
		printf("%lu", a);
		sum = a + b;
		a = b;
		b = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
