#include "lists.h"

/**
 * free_listptr - frees a linked list
 * @head: pointer to the head of the list
 *
 */
void free_listptr(listptr **head)
{
	listptr *temp, *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head node of the list
 * prints through a list with a loop and only go through list once
 *
 * Return: number of nodes in the list, 98 if the function fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listptr *h, *temp1, *temp2;

	h = NULL;
	while (head != NULL)
	{
		temp1 = malloc(sizeof(listptr));
		if (temp1 == NULL)
			exit(98);
		temp1->ptr = (void *)head;
		temp1->next = h;
		h = temp1;
		temp2 = h;

		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
			if (head == temp2->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listptr(&h);
				return (n);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}
	free_listptr(&h);
	return (n);
}
