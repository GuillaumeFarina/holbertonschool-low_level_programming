#include "main.h"

/**
 * factorial - Write 'returns the factorial of a given number'
 * @n: number
 * Return: -1 if n < 0 for error, 0 if is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
