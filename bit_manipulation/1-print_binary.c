#include "main.h"

/**
 * print_binary - Prints 'the binary representation of an unsigned long int'
 * @n: Number to be print in binary representation
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n >> 1)
	{
		print_binary(n >>  1);
	}
	_putchar((n & 1) + '0');
}
