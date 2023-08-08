#include "main.h"
#include <stdlib.h>
/**
 * *alloc_grid - returns a pointer to a 2D array of integers
 * @width: array width
 * @height: array height
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int a;
	int b;
	int **grid;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			while (a >= 0)
			{
				free(grid[a]);
				a--;
			}
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
