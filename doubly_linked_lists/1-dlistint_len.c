#include "lists.h"

/**
 * dlistint_len - Write 'returns the number of elements'
 * in a linked dlistint_t list
 * @h: Pointer Head of the dlinked list
 * Return: number of elements in a liinked dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
