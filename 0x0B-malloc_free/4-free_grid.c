#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid of integers
 * @grid: the grid to be freed
 * @height: height of the grid
 *
 * Return: Nothing
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