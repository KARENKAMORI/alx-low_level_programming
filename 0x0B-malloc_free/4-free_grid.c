#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory of  2d array
 * @grid: 2-dimensional grid
 * @height: height of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
