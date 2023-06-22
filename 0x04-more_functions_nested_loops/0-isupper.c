#include "main.h"

/**
 * _isupper - function that check if c is uppercase
 *
 * @c: input of an alphabet
 *
 * Return: 1 if it uppercase,  if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else 
		return (0);
}
