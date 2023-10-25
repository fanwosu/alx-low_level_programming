#include "main.h"
/**
 * _sqrt_recursion - is a function that returns natural square root of a number
 * it also return -1 if number does not have natural square root.
 * @n: is the number whose square root is to be returned
 * Return: returns a square root.
 */
int sqrty(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (sqrty(x, y + 1));
}
int _sqrt_recursion(int n)
{
	return (sqrty(n, 1));
}
