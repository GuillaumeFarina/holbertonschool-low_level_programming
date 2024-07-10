#include "main.h"

/**
 * *string_nconcat - Write 'function that concatenates two strings'
 * @s1: first string
 * @s2: second string
 * @n: Variable containing s1 and s2
 * Return: NULL if function fails, otherwise for pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int index;
	unsigned int len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		a[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		a[len++] = s2[index];

	a[len] = '\0';

	return (a);
}
