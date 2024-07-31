#include "lists.h"

/**
 * add_dnodeint_end - Adds 'new node at the end of a dlistint_t list'
 * @head: double pointer Head of list
 * @n: Data
 * Return: address of new element, NULL if it's failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNodes;
	dlistint_t *last;

	newNodes = malloc(sizeof(dlistint_t));

	if (newNodes == NULL)
	{
		return (NULL);
	}

	newNodes->n = n;
	newNodes->next = NULL;

	if (*head == NULL)
	{
		newNodes->prev = NULL;
		*head = newNodes;
		return (newNodes);
	}
	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newNodes;
	newNodes->prev = last;

	return (newNodes);
}
