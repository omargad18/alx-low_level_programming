#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: program that multiply two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
