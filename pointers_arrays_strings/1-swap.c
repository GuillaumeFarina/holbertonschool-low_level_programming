#include "main.h"

/**
 * swap_int - Write 'function that swaps the values of two integers'
 * @a: value of a
 * @b: value of b
 */

void swap_int(int *a, int *b)
{
	int temporary = *a;
	*a = *b;
	*b = temporary;
}
