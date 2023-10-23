#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search 
 * @needle: string being searched for
 * Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
	{
		return (haystack);
	}
	for (; *haystack; haystack++)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x +1] == '\0')
					return (haystack);
				x++;
			} while (haystack[x] == needle[x]);
		}
	}
	return ('\0');
}
