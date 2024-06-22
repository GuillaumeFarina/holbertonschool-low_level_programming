#include "main.h"

/**
 * print_last_digit - print 'last digit'
 * @r: the character check r char
 * Return: r the value of the last digit
 */

int print_last_digit(int r)
{
	int a;

	a = r % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
