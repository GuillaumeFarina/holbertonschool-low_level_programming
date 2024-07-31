#include "lists.h"

/**
 * free_dlistint - Frees 'dlistint_t list'
 * @head: Pointer Head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

