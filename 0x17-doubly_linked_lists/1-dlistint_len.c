#include "lists.h"
/**
 * dlistint_len - finds the number of elements in a linked list
 * @h: head of the linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		++n;
		h = h->next;
	}
	return (n);
}
