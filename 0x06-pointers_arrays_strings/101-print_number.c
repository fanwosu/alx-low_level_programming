#include "main.h"
/**
 * print_number - a function that prints integer
 * @n: the integers to be printed.
 * Return: void;
 */
void print_number(int number)
{
	unsigned int x1;

	if (number < 0)
	{
		x1 = -number;
		_putchar('-');
	}
	else
	{
		x1 = number;
	}
	if (x1 / 10)
	{
		print_number(x1 / 10);
	}
	_putchar((x1 % 10) + '0');
}
