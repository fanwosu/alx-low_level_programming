#include "main.h"
/**
 * _strcat - is a function that prints 2 contenated strings.
 * @dest: one of the input parameter strings.
 * @src: the second input paramenter string.
 * Return: returns a pointer to the resulting array..
 */
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
