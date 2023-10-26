#include "main.h"
/**
 * wildcmp - compares 2 strings and returns 1 if the 2 strings are identical
 * or 0 if otherwise
 * @string1: string 1
 * @string2: string 2
 * Return: returns 1 or 0
 */
int wildcmp(char *string1, char *string2)
{
	if (*string1 == '\0' && *string2 == '\0')
	{
		return (1);
	}
	if (*string1 == *string2)
	{
		return (wildcmp(string1 + 1, string2 + 1));
	}
	if (*string2 == '*')
	{
		if (*string2 == '*' && *(string2 + 1) != '\0' && *string1 == '\0')
		{
			return (0);
		}
		if (wildcmp(string1, string2 + 1) || wildcmp(string1 + 1, string2))
		{
			return (1);
		}
	}
	return (0);
}
