#include "main.h"

/**
 * _sqrt_helper - Check 'from start to find natural square root'
 * @n: number
 * @start: the beginning of number
 * Return: -1 if n don't have natural square root
 */

int _sqrt_helper(int n, int start)
{
	if (start * start == n)
	{
		return (start);
	}
	else if (start * start > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, start + 1));
	}
}

/**
 * _sqrt_recursion - Write 'returns the natural square root of a number'
 * @n: number
 * Return: -1 if n don't have natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}
