#include "main.h"

/**
 * print_chessboard - Write 'function that prints the chessboard'
 * @a: the chessboard need to be printed
 */

void print_chessboard(char (*a)[8])
{
	int length, width;

	for (length = 0; length < 8; length++)
	{
		for (width = 0; width < 8; width++)
			_putchar(a[length][width]);
		_putchar('\n');
	}
}
