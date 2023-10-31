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
	
	x = 0;
	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	while (x < size)
	{
		str[x] = c;
		x++;
	}
	return (str);
}
