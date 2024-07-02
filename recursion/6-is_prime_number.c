#include "main.h"

/**
 * is_prime_number - Write 'function input integer is a prime number'
 * @n: number
 * Return: 1 if the input integer is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	int i = 5;

	if (n <= 1) 
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	for (; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
	}
	return (1);
}
