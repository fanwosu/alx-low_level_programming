#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * count_word - helper function
 * @string: string to count
 *
 * Return: number of words
 */
int count_word(char *string)
{
	int x, f = 0, y = 0;

	for (x = 0; string[x] != '\0'; x++)
	{
		if (string[x] == ' ')
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			y++;
		}
	}
	return (y);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of string if success or null
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int x, k = 0, l = 0, w, c = 0, s, e;

	while (*(str + l))
		l++;
	w = count_word(str);
	if (w == 0)
		return (NULL);
	mat = (char **)malloc(sizeof(char *) * (w + 1));
	if (mat == NULL)
		return (NULL);
	for (x = 0; x <= l; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (c)
			{
				e = x;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (s < e)
				{
					*tmp++ = str[s++];
				}
				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = x;
	}
	mat[k] = NULL;
	return (mat);
}
