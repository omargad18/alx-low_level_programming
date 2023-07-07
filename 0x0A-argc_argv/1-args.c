#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - program that print number of arguments passed
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%d\n", argc - 1);

	return (0);
}

