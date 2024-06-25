#include "main.h"

/**
 * _strlen - Write 'function that returns the length of a string'
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
