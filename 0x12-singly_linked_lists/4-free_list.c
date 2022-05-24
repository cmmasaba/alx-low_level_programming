#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the list
 *
 */

void free_list(list_t *head)
{
	list_t *list = head;

	while (list != NULL)
	{
		list = list->next;
		free(list->str);
		free(list);
	}
}
