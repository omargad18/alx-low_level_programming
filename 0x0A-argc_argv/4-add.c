#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: program that add positive numbers
 * @argc: number of argments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *i;

	while (--argc)
	{
		for (i = argv[argc]; *i; i++)
		{
			if (*i < '0' || *i > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
