#include "main.h"

/**
 * print_last_digit - this function prints the last digit of a number n.
 *
 * @v: is the integer to extract the last digit from
 *
 * Return: returns the value of the last digit.
*/

int print_last_digit(int v)
{
	int w;

	if (v < 0)
	{
		v = -v;
	}
	w = v % 10;

	if (w < 0)
	{
		w = -w;
	}
	_putchar(w + '0');

	return (w);
}
