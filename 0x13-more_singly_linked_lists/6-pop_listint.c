#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: the head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp1, *temp2 = *head;
	int i = 0;

	if (temp2 == NULL)
		return (0);
	temp1 = temp2->next;
	i = temp2->n;
	free(temp2);
	*head = temp1;
	return (i);
}
