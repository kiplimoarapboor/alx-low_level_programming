#include <stdlib.h>

/**
 * free_grid- frees grid created before
 *
 * @grid: pointer to the 2-d array
 * @height: the grig height/ rows
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
