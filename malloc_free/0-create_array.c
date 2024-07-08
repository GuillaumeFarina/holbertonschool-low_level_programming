#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Write 'function that creates an array of chars'
 * and initializes it with a specific char
 * @size: size of memory to print
 * @c: specific char to initialize
 * Return: NULL if size it's 0, 1 if the pointer of array it's NULL for fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index = 0;
	char *array;

	array = malloc(sizeof(char) * size);

	if (array == 0 && size == 0)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
