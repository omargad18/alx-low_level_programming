#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: input string
 * @accept: input string that match
 *
 * Return: pointer in s that matches one of bytes in accept or NULL
*/

char *_strpbrk(char *s, char *accept);
{
	int i, j;
	char *pointer;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				pointer = &s[i];
				return (pointer);
			}
			j++;
		}
		i++;
	}

	return (0);
}
