#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even Fibonacci sequence
 * not exceeding 4  millions
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 0, b = 1, sum = 0, even_sum, i;

	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			even_sum += sum;

		a = b;
		b = sum;
	}
	printf("%d\n", even_sum);

	return (0);
}
