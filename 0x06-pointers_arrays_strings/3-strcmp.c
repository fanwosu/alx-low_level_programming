#include "main.h"
/**
 * _strcmp - compares two strings
 * @string1: is the first string to compare
 * @string2: is the second tring to be compared
 * Return: returns 0 if string1 is less than or equal to string2
 * or returns more than 0 if string1 is greater than string2
 */
int _strcmp(char *string1, char *string2)
{
	while (*string1 == *string2)
	{
		if (*string1 == '\0')
		{
			return (0);
		}
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}
