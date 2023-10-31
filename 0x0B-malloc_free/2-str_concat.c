#include "main.h"
#include <stdlib.h>
/**
 * str_concat - is a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *in;
	int x, y, w, z;

	x = 0;
	y = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		;
		x++;
	}
	while (s2[y] != '\0')
	{
		;
		y++;
	}
	in = malloc((sizeof(*s1) * x) + (sizeof(*s2) * y) + 1);
	if (in == NULL)
	{
		return (NULL);
	}
	for (w = 0, z = 0; w < (x + y + 1); w++)
	{
		if (w < x)
		{
			in[w] = s1[w];
		}
		else
		{
			in[w] = s2[z++];
		}
	}
	return (in);
}
