#include <stdio.h>

/**
 * main - putchar "alphabet in lowerase"
 * Return: 0
 */
int main(void)
{
	char numbers = 'a';

	for (; numbers <= 'z'; numbers++)
{
		if (numbers != 'q' && numbers != 'e')
			putchar (numbers);
}
		putchar ('\n');

	return (0);
}
