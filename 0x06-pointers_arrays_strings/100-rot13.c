#include "main.h"
/**
 * rot13 - is a function that encodes a string in rot13
 * @string: the string to be encoded in rot13
 * Return: the resulting encoded string
 */
char *rot13(char *string)
{
	int x, y;

	char aarray[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char barray[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; string[x] != '\0'; x++)
	{
		for (y = 0; aarray[y] != '\0'; y++)
		{
			if (string[x] == aarray[y])
			{
				string[x] = barray[y];
				break;
			}
		}
	}
	return (string);
}
