#include "main.h"

/**
 * puts_half - Write 'function that prints half of a string'
 * @str: pointer
 */

void puts_half(char *str)
{
	int l;
	int length_of_the_string = 10;

	if (length_of_the_string % 2 == 0)
		l = length_of_the_string / 2;

	while ((length_of_the_string - 1 / 2) && str[l] != '\0')
	{
		l++;
		_putchar(str[l]);
	}
	_putchar('\n');
}
