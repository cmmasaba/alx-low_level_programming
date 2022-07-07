#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: the head of the linked list
 * @n: the element to be added
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	current = *head;
	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	new_node->next = head;
	if (current != NULL)
		current->prev = new;
	*head = new_node;

	return (new_node);
}
