#include "main.h"

/**
 * last_index - returns the last index of string (count null char)
 * @s: ponter of string
 * Return: int
*/


int is_palindrome(char *s);
int check(char *s, int begin, int end, int mod);
int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - function returns 1 if string palindrome or 0 if not
 *
 * @s: input string
 *
 * Return: 0 or 1
*/


int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - check for the palindrome
 *
 * @s: string input
 * @begin: int from right to left
 * @end: int from left to right
 * @mod: input int
 * Return: 0 or 1
*/

int check(char *s, int begin, int end, int mod)
{
	if ((begin == end && mod != 0) || (begin == end + 1 && mod == 0))
		return (1);
	else if (s[begin] != s[end])
		return (0);
	else
		return (check(s, begin + 1, end - 1, mod));
}
