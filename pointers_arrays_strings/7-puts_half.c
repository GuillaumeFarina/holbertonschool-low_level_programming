#include "main.h"

/**
 *
 */

void puts_half(char *str)
{
	int l = 4;
	int length_of_the_string = 10;

	while ((length_of_the_string - 1 / 2) && str[l] != '\0')
	{
		l++;
		_putchar(str[l]);
	}
	_putchar('\n');
}
