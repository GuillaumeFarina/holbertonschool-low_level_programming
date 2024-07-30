#include "lists.h"

/**
 * list_len - Write 'Fonction who returns the number of elements'
 * in a linked list_t list
 * @h: Pointer Head of the list
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int index = 0;

	while (h != NULL)
	{
		h = h->next;
		index++;
	}
	return (index);
}
