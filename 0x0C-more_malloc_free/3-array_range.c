#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: pointer to arry created
 */
int *array_range(int min, int max)
{
	int *ptr, arr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (arr = 0; min <= max; arr++)
	{
		ptr[arr] = min;
		min++;
	}
	return (ptr);
}
