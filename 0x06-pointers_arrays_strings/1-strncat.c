#include "main.h"
/**
 * _strncat - concatenates string of at least n bytes
 * @dest: destingation string to be concatenated
 * @src: source string to be concatenated
 * @n: the number of bytes of string
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
