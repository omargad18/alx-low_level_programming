#include "main.h"

/**
 * main - print numbers 1 to 100 followed by new line
 * numbers that are multiples of 3 print Fizz
 * numbers that are multiples of 5 print Buzz
 * numbers that are multiples of 3 and 5 print FizzBuzz
 * each number and word to be separated by space
 *
 * Return: Always 0
*/

int main(void)
{
	int i, num;

	for (i = 1; i <= 100; i++)
	{
		num = i;

		if (num % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", num);
	}
	printf("\n");
}
