#include "main.h"
#include <stdio.h>
/**
 *_puts_half - function that prints a string, followed by a new line, to stdout
 * @string: string to be printed
 */
void _puts_half(char *string)
{
	int length, half_length;
	int counter = 0;

	length = strlen(string);
	while (*string != '\0')
	{
		if(counter < (length / 2))
		{
			_putchar(*string++);
		}
		else
		{
			break;
		}
		$counter++;
	}
	_putchar('\n');
}
