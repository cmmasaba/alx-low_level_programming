#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	temp1 = NULL;
	temp2 = NULL;

	while (*head != NULL)
	{
		temp1 = (*head)->next;
		(*head)->next = temp2;
		temp2 = *head;
		*head = temp1;
	}
	*head = temp2;
	return (*head);
}
