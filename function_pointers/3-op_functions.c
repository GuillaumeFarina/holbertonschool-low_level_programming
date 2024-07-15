#include "3-calc.h"

/**
 * op_add - Write 'function additional two variable'
 * @a: first variable
 * @b: second variable
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Write 'function subtraction two variable'
 * @a: first variable
 * @b: second variable
 * Return: subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Write 'function multiply two variable'
 * @a: first variable
 * @b: second variable
 * Return: multiply of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Write 'function divide two variable'
 * @a: first variable
 * @b: second variable
 * Return: divide of a and b or 100 if error
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Write 'function modulo two variable'
 * @a: first variable
 * @b: second variable
 * Return: modulo of a and b or 100 if error
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
