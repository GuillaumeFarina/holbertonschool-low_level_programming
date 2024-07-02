#include "main.h"

/**
 * is_prime_helper - Check 'The number divisor'
 * @n: number
 * @d: divisor
 * Return: 1 if is a prime number, 0 otherwise
 */

int is_prime_helper(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, d + 1));
}

/**
 * is_prime_number - Write 'function input integer is a prime number'
 * @n: number
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
