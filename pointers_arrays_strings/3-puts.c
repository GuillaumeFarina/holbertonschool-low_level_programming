#include "main.h"

/**
 *_puts - Write 'function that prints a string, to stdout'
 *@str:
 *
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar ('\n');
}
