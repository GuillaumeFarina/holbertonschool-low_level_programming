#include "main.h"

/**
 * *malloc_checked - Write 'function that allocates memory using malloc'
 * @b: size of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
