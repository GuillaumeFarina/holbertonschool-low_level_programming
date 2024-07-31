#include "lists.h"

/**
 * add_dnodeint - Adds 'new node at the beginning of a dlistint_t list'
 * @head: double pointer Head of list
 * @n: Data
 * Return: address of new element, or NULL if it's failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNodes;

	newNodes = malloc(sizeof(newNodes));

	if (newNodes == NULL)
	{
		return (NULL);
	}
	newNodes->n = n;
	newNodes->next = *head;
	newNodes->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNodes;

	*head = newNodes;

	return (newNodes);
}
