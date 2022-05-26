#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all thr (n) in the list, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *list_ptr = head;
	int sum = 0;

	if (list_ptr == NULL)
		return (0);
	while (list_ptr != NULL)
	{
		sum += list_ptr->n;
		list_ptr = list_ptr->next;
	}
	return (sum);
}
