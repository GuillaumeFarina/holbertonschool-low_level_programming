#include "main.h"

/**
 * print_diagonal - Write 'function that draws a diagonal line on the terminal'
 * @n: is the number of times the character '\'
 */

void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
	}
		_putchar('\\');
		_putchar('\n');
	}
}
