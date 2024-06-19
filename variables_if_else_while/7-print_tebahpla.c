#include <stdio.h>

/**
 * main - print 'the lowercase alphabet in reverse'
 * Return: 0
 */

int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
		putchar (n--);

	putchar ('\n');

	return (0);
}
