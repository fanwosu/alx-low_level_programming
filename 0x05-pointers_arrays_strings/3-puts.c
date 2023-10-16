#include "main.h"
#include <stdio.h>
/**
 *_puts - function that prints a string, followed by a new line, to stdout
 * @string: string to be printed
 */
void _puts(char *string)
{
	while (*string != '\0')
	{
		_putchar(*string++);
	}
	_putchar('\n');
}
