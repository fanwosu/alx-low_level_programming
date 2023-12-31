#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverses a given string
 * @string: Input string to be reversed
 * Return: String in reverse
 */

void rev_string(char *string)
{
	int l = strlen(string);
	int s = 0;
	int e = l - 1;

	while (s < e)
	{
		char temp = string[s];

		string[s] = string[e];
		string[e] = temp;
		s++;
		e--;
	}
}
