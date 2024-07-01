#include "main.h"

/**
 * *_strchr - Write 'function that locates a character in a string'
 * @s: string
 * @c: char
 * Return: s if pointer to the fist occurrence of c, 0 if char not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (c == '\0')
		{
			return (s);
		}
	}
	return (0);
}
