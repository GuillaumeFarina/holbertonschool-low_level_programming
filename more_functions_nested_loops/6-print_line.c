#include "main.h"

/**
 * print_line - Write 'function that draws a straight line in the terminal'
 *@n: the character to check
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
