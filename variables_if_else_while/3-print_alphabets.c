#include <stdio.h>

/**
 * main - putchar "alphabet in lowerase and uppercase"
 * Return: 0
 */
int main(void)
{
	char nl = 'a';

	for (; nl <= 'z'; nl++)
		putchar (nl);
	{
	char nu = 'A';

	for (; nu <= 'Z'; nu++)
		putchar (nu);
	}
	putchar ('\n');

	return (0);
}
