#include "main.h"
/**
 * *_strncpy - is a function that copies a string
 * @dest: destination
 * @src: source
 * @n: bytes to copy
 * Return: points to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z = 0;

	while (src[z] != '\0' && z < n)
	{
		dest[z]  = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}	
