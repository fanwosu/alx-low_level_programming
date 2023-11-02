#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocated memory block using malloc
 * @ptr: pointer to the memory previously allocated
 * @old_size: previous size of allocated memory
 * @new_size: new size of allocated memory
 * Return: pointer to array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *string;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		string = malloc(new_size);
		free(ptr);
		return (string);
	}
	if (new_size > old_size)
	{
		string = malloc(new_size);
		free(ptr);
		return (string);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
