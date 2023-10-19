#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase in a string
 * @string: string to work on
 * Return: the modified string
 */
char *string_toupper(char *string)
{
	int x = 0;

	while (string[x] != '\0')
	{
		if (string[x] >= 'a' && string[x] <= 'z')
		{
			string[x] = string[x] - 32;
		}
		x++;
	}
	return (string);
}	
