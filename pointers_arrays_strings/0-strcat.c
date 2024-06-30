#include "main.h"

/**
 *_strcat -Write 'function that concatenates two strings'
 * @dest: pointer value
 * @src: pointer value
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *destend = dest;

	while (*destend != '\0')
	{
		destend++;
	}
	while (*src !=  '\0')
	{
		*destend = *src;
		destend++;
		src++;
	}
	*destend = '\0';
	return (dest);
}
