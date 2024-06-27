#include "main.h"
#include <stdio.h>

/**
 * print_array - Write 'function that prints n elements of an array of integers'
 * @a: pointer of the array
 * @n: number of elemments of the array
 */

void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n ; index++)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
