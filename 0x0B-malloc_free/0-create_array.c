#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array and initilized it with char
 * @c: the address of the memory to be printed
 * @size: the size of the memory to print
 *
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		str[x] = c;
	}
	return (str);
}
