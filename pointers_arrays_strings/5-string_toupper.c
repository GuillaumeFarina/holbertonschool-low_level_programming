#include "main.h"

/**
 * *string_toupper - Write 'function that changes all lowercase letters'
 * of a string to uppercase
 * @a: pointer
 * Return: value
 */

char *string_toupper(char *a)
{
	char *ptr = a;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (a);
}
