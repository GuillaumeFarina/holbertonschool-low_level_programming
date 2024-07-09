#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *str_concat - Write 'function that concatenates two strings'
 * @s1: first string
 * @s2: second string
 * index_2: track in the chain
 * Return: NULL if fail, succes if pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *result_str;
	int index, index_2 = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;
	for (index = 0; s2[index]; index++)
		len++;

	result_str = malloc(sizeof(char) * (len + 1));

	if (result_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		result_str[index_2++] = s1[index];

	for (index = 0; s2[index]; index++)
		result_str[index_2++] = s2[index];

	result_str[index_2] = '\0';

	return (result_str);
}
