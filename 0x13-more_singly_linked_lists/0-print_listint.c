#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the list head
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *list_ptr = h;
	size_t i = 0;

	while (list_ptr != NULL)
	{
		printf("%i\n", list_ptr->n);
		i++;
		list_ptr = list_ptr->next;
	}

	return (i);
}
