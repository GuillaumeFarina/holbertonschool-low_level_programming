#include "main.h"

/**
 * _strlen_recursion - Write 'function that returns the length of a string'
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len = 13;

	if (*s != '\0')
	{
		len++;
	}
	return (len);
}
