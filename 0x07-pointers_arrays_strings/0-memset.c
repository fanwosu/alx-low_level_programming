#include "main.h"
/**
 * *_memset - is a function that fills memory with a constant byte
 * @s: target
 * @b: constant byte
 * @n: number of byte
 * Return: returns new value of target
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
