#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - program that prints all arguments it receive
 * @argc: int
 * @argv: list
 *
 * Return: Always 0
*/

int main(int argc, char const *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
