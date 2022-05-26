#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the first node in the list
 * sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2 = *head;

	while ((temp1 = temp2) != NULL)
	{
		temp2 = temp2->next;
		free(temp1);
	}
	*head = NULL;
}
