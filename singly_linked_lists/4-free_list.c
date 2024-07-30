#include "lists.h"

/**
 * free_list - Write 'frees a list_t list'
 * @head: Pointer to Head of list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
