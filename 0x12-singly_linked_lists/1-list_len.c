#include "lists.h"

/**
 * list_len - finds number of elements in a list
 * @h: pointer to the list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
