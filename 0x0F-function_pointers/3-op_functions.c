#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds 2 ints
 * @a: int 1
 * @b: int 2
 * Return: int sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subs 2 ints
 * @a: int 1
 * @b: int 2
 * Return: int sum
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies 2 ints
 * @a: int 1
 * @b: int 2
 * Return: int mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides 2 ints
 * @a: int numberator
 * @b: int denominator
 * Return: int
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit (100);
}
/**
 * op_mod - gets remainder after division
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	printf ("Error\n");
	exit (100);
}
