#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array to be searched for an integer
 * @size is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare value
 *
 * Return: index of the first element for which the cmp function does not return o.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
