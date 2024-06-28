#include "main.h"

/**
 * *_strncpy - Write 'function that copies a string'
 * @dest: d
 * @src: a
 * @n: b
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
