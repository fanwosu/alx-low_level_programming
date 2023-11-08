#include "function_pointers.h"
/**
 * array_iterator - function that interates the arrays
 * @array: array to be iterated
 * @size: is the size of the array
 * @action: pointer to the function to be used
 *
 * Return: void;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array != NULL && action != NULL && size >0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
