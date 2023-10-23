#include "main.h"
/**
 * _strchr - returns a pointer to the first occurence of the first
 * c in a string s or null if not found
 * @s: target string
 * @c: targeded character
 * Return: retuns a poiter fo the first occurnce
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
