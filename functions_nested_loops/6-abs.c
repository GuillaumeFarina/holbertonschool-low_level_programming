#include <stdlib.h>
#include "main.h"

/**
 * _abs - wrhite 'computes the absolute value of an integer'
 * @r: the character check r char
 * Return: r if more or équal 0, -r otherwise
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (-r);
}
