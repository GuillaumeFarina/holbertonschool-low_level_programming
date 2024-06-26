#include "main.h"

/**
 * rev_string - Write 'function that reverses a string'
 * @s: character to check
 */

void rev_string(char *s)
{
	int i = 0;
	int len = s[10];
	char temporary;

	while (s[i] != '\0')
        {
                i++;
        }
	for (; i < len / 2; i++)
	{
		s[i] = s[len - i - 1];
		s[i] = temporary;
		s[len - i - 1] = s[i];
	}
}
