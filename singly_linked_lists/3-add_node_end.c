#include "lists.h"

/**
 * add_node_end - Write 'adds a new node at the end of a list_t list'
 * @head: Pointer Head of the list
 * @str: String
 * Return: newNode of a new element, or NULL if it fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last = *head;
	int lenght = 0;

	newNode = malloc(sizeof(newNode));

	if (newNode == NULL)
	{
		return (NULL);
	}
	while (str[lenght])
		lenght++;

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = lenght;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = newNode;

	return (newNode);
}
