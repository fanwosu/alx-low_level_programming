#include "main.h"
/**
 * _strpbrk - is a function that searches string for set of byte
 * @s: string to be searched
 * @accept: search byte string
 * Return: Returns a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
