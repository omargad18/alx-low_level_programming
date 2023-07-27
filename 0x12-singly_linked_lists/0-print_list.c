#include "lists.h"

/**
 * _strlen - function return length of string
 * @s: string to check length
 *
 * Return: integer lengt of string
*/

int _strlen(char *s)
{
	int iter = 0;

	if (!s)
		return (0);
	while (*s++)
		iter++;
	return (iter);
}

/**
 * print_list - function print linked list 
 * @h: pointer to first node
 *
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

