#include "lists.h"

/**
 * add_node - Write 'Function that adds a new node at the beginning'
 * of a list_t list
 * @head: Double Pointer Head of the list
 * @str: String to be duplicated and added to the NewNode
 * Return: Address of the new element, or NULL if it's failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str_2;
	int index = 0;
	list_t *newNode;

	if (str == NULL)
		return (NULL);

	str_2 = strdup(str);
	if (str_2 == NULL)
		return (NULL);

	while (str[index])
		index++;

	newNode = malloc(sizeof(list_t));

	newNode->str = str_2;
	newNode->len = index;
	newNode->next = *head;

	if (newNode == NULL)
	{
		free(str_2);
		return (NULL);
	}

	*head = newNode;

	return (newNode);
}
