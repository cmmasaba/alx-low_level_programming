#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head of the linked list
 * @n: the element to be added
 *
 * Return: address of the new node, NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, last;

	last = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (last != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = last;

	return (new_node);
}
