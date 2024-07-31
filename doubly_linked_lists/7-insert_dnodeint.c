#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts 'new node at a given position'
 * @h: Pointer Head of the list
 * @idx: Index starting from 0
 * @n: Integer
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current_node = *h;
	unsigned int index = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (index = 0; index < idx - 1; index++)
	{
		if (current_node == NULL)
		{
			free(newNode);
			return (NULL);
		}
		current_node = current_node->next;
	}

	if (current_node == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current_node->next;
	newNode->prev = current_node;

	if (current_node->next != NULL)
		current_node->next->prev = newNode;
	current_node->next = newNode;

	return (newNode);
}
