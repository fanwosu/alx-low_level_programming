#include "main.h"
/**
 * sqrty - function is used to check square root match
 * between 2 numbers
 * @x: is the target square root
 * @y: used to iterate from 1 to x;
 * Return: returns 1 on success
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
/**
 * _sqrt_recursion - is a function that returns natural square root of a number
 *it also return -1 if number does not have natural square root.
 *@n: is the number whose square root is to be returned
 *Return: returns a square root.
*/
int _sqrt_recursion(int n)
{
	return (sqrty(n, 1));
}
