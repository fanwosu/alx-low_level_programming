#include "main.h"
/**
 * reverse_array - this function reverse the elements of array
 * @array: array to be reversed
 * @number: number of elements in an array
 * Return: nothing
 */
void reverse_array(int *array, int number)
{
	int x, y, t;

	y = number - 1;
	for (x = 0; x < number / 2; x++)
	{
		t = array[x];
		array[x] = array[y];
		array[y--] = t;
	}
}
