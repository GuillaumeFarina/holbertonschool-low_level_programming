#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - Write 'function that concatenates two strings'
 * @s1: first string
 * @s2: second string
 * Return: NULL if fail, succes if pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *result_str;
	int index = 0;
	int len = 0;

	if (s1 == NULL && s2 == NULL)
		s1 = "";
		s2 = "";

	while (*s1 != '\0')
	{
		s1end++;
	}

	str_concat = malloc(sizeof(char) * len;

	while (*s2 !=  '\0')
	{
		*s1end = *s2;
		s1end++;
		s2++;
	}
	s2 = malloc(sizeof(char) * (len + 1));

	for (; index <= len; index ++)
	{
		s1end[index] = s1[index];
	}

	s1end[index] = '\0';
	*s1end = '\0';
	return (s1end);
}
