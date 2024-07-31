#include "lists.h"

/**
 * sum_dlistint - Calculates 'Sum of all the data (n) in a dlistint_t list'
 * @head: Pointer Head of the dlinked list
 * Return: Sum of all the data (n), if the list is empty return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
