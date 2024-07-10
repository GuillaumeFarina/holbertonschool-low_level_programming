#include "main.h"

/**
* *_calloc - Write 'allocate memory and initialize it to zero'
* @nmemb: number of elements
* @size: size of the memory
* Return: NULL for pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a != NULL)
	{
		for (index = 0; index < (nmemb * size); index++)
			a[index] = 0;
		return (a);
	}
	else
		return (NULL);
}
