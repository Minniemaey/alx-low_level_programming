#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2D grid prev. created by alloc_grid function
 * @grid: array
 * @height: array height
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
