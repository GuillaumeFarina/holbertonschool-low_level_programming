#include "main.h"

/**
 * print_array - Write 'function that prints n elements of an array of integers'
 * @a:
 * @n:
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
