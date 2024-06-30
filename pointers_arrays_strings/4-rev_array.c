#include "main.h"

/**
 * reverse_array - Write 'function reverses content, an array of integers'
 * @a: pointer
 * @n: function
 */

void reverse_array(int *a, int n)
{
	int begin = 0;
	int end = n - 1;
	int temporary;

	while (begin < end)
	{
		temporary = a[begin];
		a[begin] = a[end];
		a[end] = temporary;
		begin++;
		end--;
	}
}
