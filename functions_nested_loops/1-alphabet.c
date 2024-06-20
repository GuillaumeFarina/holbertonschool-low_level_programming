#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print 'alphabet, in lowercase'
 * Return: 0
 */

void print_alphabet(void)
{
	char numbers = 'a';

	for (; numbers <= 'z'; numbers++)

		_putchar (numbers);

	_putchar ('\n');
}
