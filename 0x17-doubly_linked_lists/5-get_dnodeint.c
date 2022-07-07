#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: the head of the linked list
 * @index: the index of the node
 *
 * Return: the node at that index of 0 if it doesnt exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	for (i = 0; head != NULL; ++i)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
}
