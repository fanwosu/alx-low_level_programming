#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_puts_half - function that prints a string, followed by a new line, to stdout
 * @string: string to be printed
 * Return: half of string
 */
void _puts_half(char *string)
{
	int x, half, length;
	int length = 0;

	for (x = 0; string[0] != '\0'; a++)
	{
		length++;
	}
	half = length / 2;
	if (length % 2 == 1)
	{
		half = ((length + 1) / 2);
	}
	for (x = half; string[x] != '\0'; x++)
	{
		_putchar(string[x]);
	}
	_putchar('\n');
}
