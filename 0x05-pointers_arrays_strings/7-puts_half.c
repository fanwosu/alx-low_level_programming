#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_puts_half - function that prints a string, followed by a new line, to stdout
 * @string: string to be printed
 * Return: half of string
 */
void puts_half(char *string)
{
	int half, len, stop;

	len = strlen(string);
	stop = len / 2;
	for (half = 0; half < stop; half++)
	{
		_putchar(string[half]);
	}
	_putchar('\n');
}
