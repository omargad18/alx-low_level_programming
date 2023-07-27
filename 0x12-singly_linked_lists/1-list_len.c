#include "lists"

/**
 * list_len - function that returns the number of elements in a linked
 * @h: pointer to first node
 *
 * Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
