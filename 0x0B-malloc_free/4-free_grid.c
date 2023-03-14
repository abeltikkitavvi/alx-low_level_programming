#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - that frees a two dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to pointer
 * @height: height of the grid
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int f;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
