#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocated memory
 * @b: integer to be allocated a memory
 *
 * Return: returns 0 or 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit (98);
	}
	return (x);
}
