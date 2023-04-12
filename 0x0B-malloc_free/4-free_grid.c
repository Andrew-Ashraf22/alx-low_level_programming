#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *free_grid - free a 2d array
  *@grid: grid
  *@height: the height
  */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
