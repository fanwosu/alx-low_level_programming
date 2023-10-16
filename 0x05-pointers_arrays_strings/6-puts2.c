#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that print every other character in a string
 * @string: the string to be printed
 * Return: Always 0
 */
void puts2(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i += 2;
	}

	printf("\n");
}
