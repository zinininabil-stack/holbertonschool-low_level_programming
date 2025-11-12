#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: pointer to the 2D grid to be freed
 * @height: the height (number of rows) of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid
 * created by the alloc_grid function. It iterates through each row,
 * frees it, and then frees the array of row pointers itself.
 *
 * Return: Nothing (void)
 */
void free_grid(int **grid, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}

	return (grid);

}
