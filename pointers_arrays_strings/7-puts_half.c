#include "main.h"

/**
 * puts_half - Write 'function that prints half of a string'
 * @str: pointer
 *

void puts_half(char *str)
{
	int l;
	int length_of_the_string = 10;

	if (length_of_the_string % 2 == 0)
		l = length_of_the_string / 2;

	if (length_of_the_string != '\0')
	{
		length_of_the_string++;
	}

	while ((length_of_the_string - 1 / 2) && str[l] != '\0')
	{
		l++;
		_putchar(str[l]);
	}
	_putchar('\n');
}

*/

/**
 */
void puts_half(char *str) 
{
	int length = 0;
	int start;
	int i;

	while (str[length] != '\0') 
		{
        	length++;
    		}
	if (length % 2 == 0) 
	{
		start = length / 2;
	}
	else
		{
		start = (length - 1) / 2 + 1;
		}
	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
