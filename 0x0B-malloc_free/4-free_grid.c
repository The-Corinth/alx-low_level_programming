#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: a points to the first column
 * @height: the number of rows in the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
		return;


	for (int i = 0; i < height; i++)
		if (grid[i] != 0)
			free(grid[i]);

	free(grid);
}
