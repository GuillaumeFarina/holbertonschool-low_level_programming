#include "main.h"

/**
 * *_strstr - Write 'function that locates a substring'
 * @haystack: string need to seek
 * @needle: substring need to check
 * Return: pointer to the begginning of located substring, 0 not found
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')

			return (haystack);

		haystack++;
	}
	return ('\0');
}
