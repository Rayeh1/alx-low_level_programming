#include <stdlib.h>
#include "main.h"

/**
 * free_grid - allocates a grid
 * @grid: takes in width of grid
 * @grid: 2D array grid
 * Return: 20
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

