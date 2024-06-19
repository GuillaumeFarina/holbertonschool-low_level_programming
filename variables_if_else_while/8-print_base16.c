#include <stdio.h>

/**
 * main - print 'all the numbers of base 16 in lowercase'
 * Return: 0
 */

int main(void)
{
	char n, l;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
