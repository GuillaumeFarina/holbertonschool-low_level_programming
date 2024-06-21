#include <ctype.h>
#include "main.h"

/**
 * _islower - checks 'function who checks for lowercase character'
 * Return: 1 if lowercase, 0 if uppercase
 * @c parameter checking c char:
 * c - character to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
