#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the list head node
 * can free a list with loops
 * sets the head to NULL
 *
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listptr *hp, *temp1, *temp2;
	listint_t *current;

	hp = NULL;
	while (*h != NULL)
	{
		temp1 = malloc(sizeof(listptr));
		if (temp1 == NULL)
			exit(98);
		temp->ptr = (void *)*h;
		temp1->next = hp;
		hp = temp1;
		temp2 = hp;

		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
			if (*h == temp2->ptr)
			{
				*h = NULL;
				free_listptr(&hp);
				return (n);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		n++;
	}
	*h = NULL;
	free_listptr(&hp);
	return (n);
}
