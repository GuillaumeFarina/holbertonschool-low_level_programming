#include "main.h"

/**
 * puts2 - Write 'prints every other character of a string
 * starting with the first character'
 * @str: pointer of the string
 */

void puts2(char *str)
{
	int i;
	int l;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; (i < l && str[i] != '\0'); i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
