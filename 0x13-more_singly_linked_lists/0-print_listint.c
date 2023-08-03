#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: pointer to first node
 * Return: size of list
*/

size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
