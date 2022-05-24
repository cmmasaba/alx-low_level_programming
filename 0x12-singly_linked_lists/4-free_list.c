#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the list
 *
 */

void free_list(list_t *head)
{
	list_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list->str);
		free(list);
	}
}
