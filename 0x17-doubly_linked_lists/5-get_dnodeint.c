#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: the head of the linked list
 * @index: the index of the node
 *
 * Return: the node at that index of NULL if it doesnt exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
