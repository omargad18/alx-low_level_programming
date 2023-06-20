 #include "main.h"

/**
 * _isalpha - checks if character is a letter
 *
 * @c: take input from other function
 *
 * Return 1 if c is true else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
