#include "main.h"

/**
 * puts2 - Write 'prints every other character of a string
 * starting with the first character'
 * @str: pointer of the string
 */

void puts2(char *str)
{
	int i = 0;
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	while (i < l && str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
