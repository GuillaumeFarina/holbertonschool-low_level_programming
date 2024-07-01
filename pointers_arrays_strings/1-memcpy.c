#include "main.h"

/**
 * *_memset - Write 'function that fills memory with a constant byte'
 * @dest: return pointer to memory
 * @src: specify value
 * @n: memory zone
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
