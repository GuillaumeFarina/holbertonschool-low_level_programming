#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes 'node at index of a dlistint_t list'
 * @head: Pointer Head of the list
 * @index: index that should be deleted starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int index_2;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	for (index_2 = 0; temp != NULL && index_2 < index; index_2++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
