#include "main.h"
#include <stdlib.h>

/**
* free_grid - Write 'function that frees a 2 dimensional grid'
* previously created by your alloc_grid function
* @grid: memory block to be freed
* @height: height of the array
* Return: grid
*/

void free_grid(int **grid, int height)
{
	int index = 0;

	for (; index < height; index++)
		free(grid[index]);

	free(grid);
}
