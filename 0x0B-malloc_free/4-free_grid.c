#include "main.h"

/**
 * free_grid - Frees up malloced memory
 * @grid: Address to two-dimensional array (grid) memory to be freed
 * @height: Height of two-dimensional array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
