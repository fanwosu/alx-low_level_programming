#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: targed
 * @accept: reference container
 * Return: returns the number of bytes in the segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int x;
	unsigned int b = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
			{
				b++;
				break;
			}
			else if (accept[x + 1] == '\0')
			{
				return (b);
			}
		}
		s++;
	}
	return (b);
}
