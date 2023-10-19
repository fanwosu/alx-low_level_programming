#include "main.h"
/**
 * leet - a function that encodes a string in 1337
 * @string: string to encode
 * Return: returns the encoded string
 */
char *leet(char *string)
{
	int x, y;
	char *charac, *repl;

	charac = "aAeEoOtTlL";
	repl = "4433007711";
	for (x = 0; string[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (string[x] == charac[y])
			{
				string[x] = repl[y];
			}
		}
	}
	return (string);
}
