#include "main.h"

/**
* array_range - Create 'an array of integers'
* @min: low number
* @max: high number
* Return: NULL if min>max or malloc fails
*/

int *array_range(int min, int max)
{
	int *a;
	int index;
	int j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a != NULL)
	{
		for (index = min; index <= max; index++)
		{
			a[j] = index;
			j++;
		}
		return (a);
	}
	else
		return (NULL);
}
