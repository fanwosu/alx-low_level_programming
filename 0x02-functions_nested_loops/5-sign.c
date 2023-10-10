#include "main.h"

/**
 * print_sign - this function prints the sign of a number
 *
 * @a: the int to be checked
 *
 * Return: returns 1 and prints + if a  is greater than zero, 
 * prints 0 if 0 and -1 if a is less than zero
*/
int print_sign(int a)
{
	if (a == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (a < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
