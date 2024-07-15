#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Write 'function that searches for an integer'
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function for compare values
 * Return: 0 if element marches, -1 if no element match
 * or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
