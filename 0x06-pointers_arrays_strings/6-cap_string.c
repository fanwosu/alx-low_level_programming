#include "main.h"
/**
 * *cap_string - capitalizes every word in a string
 * @string: string to be capitalized
 * Return: the capitalized string
 */
char *cap_string(char *string)
{
	int x, y;
	
	char spec[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	for (x = 0; string[x] != '\0'; x++)
	{
		if (x == 0 && string[x] >= 'a' && string[x] <= 'z')
		{
			string[x] -= 32;
		}
		for (y = 0; y < 13; y++)
		{
			if (string[x] == spec[y])
			{
				if (string[x + 1] >= 'a' && string[x + 1] <= 'z')
				{
					string[x + 1] -= 32;
				}
			}
		}
	}
	return (string);
}
