#include "main.h"

/**
 * leet - Write 'function that encodes a string into 1337'
 * @s: the encoding string
 * Return: s
 */

char *leet(char *s)
{
	int i = 0;
	int a;
	char letters[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i] != '\0')
	{
		for (a = 0; a <= 7; a++)
		{
			if (s[i] == letters[a] || s[i] - 32 == letters[a])
				s[i] = a + '0';
		}
		i++;
	}
	return (s);
}
