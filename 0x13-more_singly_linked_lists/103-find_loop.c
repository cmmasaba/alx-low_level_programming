#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint *temp1, *temp2;

	temp1 = temp2 = head;
	while (head && temp1 && temp1->next)
	{
		head = head->next;
		temp1 = temp1->next;
		if (head == temp1)
		{
			head = temp2;
			temp2 = temp1;
			while (1)
			{
				temp1 = temp2;
				while (temp1->next != head &&
						temp1->next != temp2)
					temp1 = temp1->next;
				if (temp1->next == head)
					break;
				head = head->next;
			}
			return (temp1->next);
		}
	}
	return (NULL);
}
