#include "main.h"
/**
 *_print_rev_recursion - a function that prints string in reverse
 *using recursion
 *@s: string to be printed in reverse
 *Return: void
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
