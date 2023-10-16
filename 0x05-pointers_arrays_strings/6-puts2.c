#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that print every other character in a string
 * @string: the string to be printed
 * Return: Always 0
 */
void puts2(char *string)
{
	int x;
	int length = 0;

	while (string[length] != '\0')
	{
		length++;
	}

	for (x = 0; x < length; x += 2)
	{
		_putchar(string[x]);
	}

	_putchar('\n');
}
