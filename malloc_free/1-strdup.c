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
	char *array;
	int index = 0, len = 0;

	array = malloc(sizeof(char) * (index + 1));

	if (str == NULL && array == NULL)
		return (NULL);

	for (; str[len]; len++)
	{
		array[len] = str[len];
	}
	return (array);
}
