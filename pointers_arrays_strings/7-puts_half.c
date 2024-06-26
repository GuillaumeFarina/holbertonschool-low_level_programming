#include "main.h"

/**
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int l = 0;

	while (str[l] != '\0')
	{
		l--;
	}
	while (i < l && str[i] != '\0')
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
