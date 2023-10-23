#include "main.h"
/**
 * _memcpy - is a function that copies memory area from src to dest
 * @src: area copied from
 * @dest: area copied to
 * @n: number of bytes to copy
 * Return: returns a pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
