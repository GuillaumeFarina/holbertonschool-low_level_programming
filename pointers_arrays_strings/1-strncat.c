#include "main.h"

/**
 *_strncat -Write 'function that concatenates two strings'
 * @dest: pointer value
 * @src: pointer value
 * @n: z
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *destend = dest;
	int a = 0;

	while (*destend != '\0')
	{
		destend++;
	}
	while (*src != '\0' && a < n)
	{
		a++;
		*destend = *src;
		destend++;
		src++;
	}
	*destend = '\0';
	return (dest);
}
