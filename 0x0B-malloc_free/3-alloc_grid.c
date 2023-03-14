#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory
 *
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: If memory allocation fails, return NULL.
 *         Otherwise, return a pointer to the allocated 2D array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			free(grid[j]);
			free(grid);
			return (NULL);
		}
	for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}
	return (grid);
}
