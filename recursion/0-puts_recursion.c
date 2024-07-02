#include "main.h"

/**
 * _puts_recursion - Write 'function that prints a string'
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar("%c", *s);
	_putchar('\n');
}
