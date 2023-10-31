#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2d dimensional array of integers
 * @width: integer size width
 * @height: integer size height
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	x = 0;
	y = 0;
	if (width + height < 2 || width < 1 || height < 1)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	while (x < height)
	{
		arr[x] = malloc(sizeof(**arr) * width);
		if (arr[x] == NULL)
		{
			for (x--; x >= 0; x--)
			{
				free(arr[x]);
			}
			free(arr);
			return (NULL);
		}
		while (y < width)
		{
			arr[x][y] = 0;
			y++;
		}
		x++;
	}
	return (arr);
}
