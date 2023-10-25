#include "main.h"
/**
 * _pow_recursion - returns vlaue of x raised to power y
 * @x: interger to be raised to a power
 * @y: integer to raise 
 * Return: raised value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return ( x * _pow_recursion(x, y - 1));
}
