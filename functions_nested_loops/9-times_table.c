#include "main.h"

/**
 * times_table - prints '9 times table'
 */

void times_table(void)
{
	int num, multiple;

	for (multiple = 0; multiple <= 9; multiple++)
	{
		for (num = 0; num <= 9; num++)
		{
			if (multiple * num < 10)
			{
				_putchar((multiple * num) + '0');
			}
			else
		{
			_putchar(((multiple * num) / 10) + '0');
			_putchar(((multiple * num) % 10) + '0');
		}
			if (num < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
