#include "main.h"

/**
 * *_memset - Write 'function that fills memory with a constant byte'
 * @s: return pointer to memory
 * @b: specify value
 * @n: memory zone
 * Return: s
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
