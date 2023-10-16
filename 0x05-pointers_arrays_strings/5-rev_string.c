#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Reverses a given string
 * @s: Input string to be reversed
 * Return: String in reverse
 */

void rev_string(char *string)
{
	int l = strlen(s);
	int s = 0;
	int e = l - 1;

	while (s < e)
	{
		char temp = string[s];
		string[s] = string[e];
		s[e] = temp;
		s++;
		e--;
	}
}
