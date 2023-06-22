#include "main.h"

/**
 * _isdigit - function that check for digit between 0 to 9
 *
 * @c: input an integer
 *
 * Return: 1 if c is a digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 59)
		return (1);
	else
		return (0);
}
