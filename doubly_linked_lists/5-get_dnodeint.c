#include "lists.h"

/**
 * get_dnodeint_at_index - Returns 'the nth node of a dlistint_t linked list'
 * @head: Pointer Head of the list
 * @index: Node index starting from 0
 * Return: NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);

}
