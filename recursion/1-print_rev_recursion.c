#include "main.h"

/**
 * print_rev_recursion - Write 'function that prints a string, in reverse'
 *@s: character to check
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
