<<<<<<< HEAD
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
=======
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
>>>>>>> 295d5dd5b770bf51955fa99842cc164e8e42857d
 */
void free_grid(int **grid, int height)
{
	int i;

<<<<<<< HEAD
	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

=======
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
>>>>>>> 295d5dd5b770bf51955fa99842cc164e8e42857d
	free(grid);
}
