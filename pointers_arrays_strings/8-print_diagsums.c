#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write 'function that prints the sum of the two diagonals'
 * of a square matrix of integers
 * @a: the pointer
 * @size: size of int
 */

void print_diagsums(int *a, int size)
{
	int i;
	int b = 0;
	int c = 0;

	for (i = 0; i < size; i++)
	{
		b += a[i * size + i];
		c += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", b, c);
}
