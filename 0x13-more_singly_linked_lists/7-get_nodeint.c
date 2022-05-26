#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t list
 * @head: the head of the linked list
 * @index: is the index of the node, starting from 0
 *
 * Return: the nth node, NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list_ptr = head;
	unsigned int n = 0;

	for (n = 0; list_ptr != NULL; n++)
	{
		if (index == n)
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (NULL);
}
