#include "main.c"
/**
 * print_rev - a fucntion that prints the  a string in reverse order
 * @string: is the string to be printed
 * Return: Returns 0 on success
 */
void print_rev(*string)
{
	int strlength = strlen(string);
	int x;

	for (x = strlength - 1; x >= 0; x--)
	{
		_putchar(string[x]);
	}
	_putchar('\n');
