#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - Write 'function that returns a pointer
 * to a newly allocated space in memory'
 * @str: string to duplicate
 * Return: NULL if str=NULL, array if works
 */

char *_strdup(char *str)
{
	char *string;
	int index = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	for (; index <= len; index++)
	{
		string[index] = str[index];
	}
	string[index] = '\0';

	return (string);
}
