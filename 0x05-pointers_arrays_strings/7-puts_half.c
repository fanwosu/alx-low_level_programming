#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - function that prints a string, followed by a new line, to stdout
 * @string: string to be printed
 * Return: half of string
 */
void puts_half(char *string)
{
	int half, len, start;

	len = strlen(string);
	start = len / 2;
	for (half = start; half < len; half++)
	{
		_putchar(string[half]);
	}
	_putchar('\n');
}
