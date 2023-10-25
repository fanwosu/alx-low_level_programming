#include "main.h"
/**
 * factorial - a function that returns the factorial of a number
 * @n: is the number whose factorial is to be returned
 * Return: void
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
