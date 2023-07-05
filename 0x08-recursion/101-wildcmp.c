#include "main.h"

/**
 * past_star - loop past asterisk
 * @s2: second string, can have wildcard
 *
 * Return: pointer past star
*/

char *past_star(char *s2)
{
	if (*s2 == '*')
		return (past_star(s2 + 1));
	else
		return (s2);
}

/**
 * inception - makes magic a reality
 * @s1: first string
 * @s2: second string, can have wildcard
 *
 * Return: 1 if identical, 0 if false
*/

int inception(char *s1, char *s2)
{
	int get = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		get += wildcmp(s1 + 1, s2 + 1);
	get += inception(s1 + 1, s2);

	return (get);
}

/**
 * wildcmp - function compare two strings lexicographically
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical, else 0
*/

int wildcmp(char *s1, char *s2)
{
	int get = 0;

	if (!*s1 && *s2 == '*' && !*past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			get += wildcmp(s1 + 1, s2 + 1);
		get += inception(s1, s2);

		return (!!get);
	}

	return (0);
}
