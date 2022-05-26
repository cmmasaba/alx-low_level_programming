#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index of list where new node is added
 * @n: value of the member int n
 *
 * Return: address of new node, Null if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1, *temp2 = *head;
	unsigned int i = 0;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp2 != NULL; i++)
			temp2 = temp2->next;
	}
	if (temp2 == NULL && idx != 0)
		return (NULL);

	temp1 = malloc(sizeof(listint_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	if (idx == 0)
	{
		temp1->next = *head;
		*head = temp1;
	}
	else
	{
		temp1->next = temp2->next;
		temp2->next = temp1;
	}
	return (temp1);
}
