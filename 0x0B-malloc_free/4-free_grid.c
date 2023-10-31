#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2dimensional array grid
 * @grid: pointer to a pointer 2d array
 * @height: height of aray
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	x = 0;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
