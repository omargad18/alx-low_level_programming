#include "main.h"

/**
 * *_strchr - function that locate a character in a string
 *
 * @s: input pointer to put constant
 * @c: input constant
 *
 * Return: pointer to s or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
