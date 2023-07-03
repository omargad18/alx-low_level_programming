#include <stdio.h>
#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The characyer to print
 *
 * Return: On succes 1.
 *	On error, -1 is returned, and errno is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
