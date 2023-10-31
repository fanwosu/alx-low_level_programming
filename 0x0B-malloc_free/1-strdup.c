#include "main.h"
#include <stdlib.h>
/**
 * _strdup - is a function that duplicates a string using malloc
 * @str: is the string to be duplicated
 *
 * Return: returns a pointer to a newlly duplicated string
 */
char *_strdup(char *str)
{
	char *in;
	int x, y;

	y = 0;
	x = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
	{
		;
		x++;
	}
	in = malloc((sizeof(*in) * x) + x);
	if (in == NULL)
	{
		return (NULL);
	}
	while (y < x)
	{
		in[y] = str[y];
		y++;
	}
	in[y] = '\0';
	return (in);
}
