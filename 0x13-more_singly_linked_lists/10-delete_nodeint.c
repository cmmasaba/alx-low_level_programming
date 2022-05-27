#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node, index starts at 0
 *
 * Return: 1 if successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2 = *head;
	unsigned int i = 0;

	if (index != 0)
	{
		for (; temp2 != NULL && i < index - 1; i++)
			temp2 = temp2->next;
	}
	if (temp2 == NULL || (temp2->next == NULL && index != 0))
		return (-1);
	temp1 = temp2->next;
	if (index != 0)
	{
		temp2->next = temp1->next;
		free(temp1);
	}
	else
	{
		free(temp2);
		*head = temp1;
	}
	return (1);
}
