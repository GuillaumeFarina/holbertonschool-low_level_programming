#include <ctype.h>
#include "main.h"

/**
 * print_sign - checks 'sign of number'
 * Return: 1 if n > zero, 0 if n = 0, -1 n > 0
 * @n: parameter checking n char
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar ('+');
		_putchar ('\n');
		return (1);
	}
	else if (n == '0')
	{
		_putchar ('0');
		_putchar ('\n');
		return (0);
	}
	else if (n > '0')
	{
		_putchar ('-');
		_putchar ('\n');
		return (-1);
	}

	_putchar ('\n');

	return (0);
}
