#include "main.h"
/**
 * prime_check - function that returns 1 if a number is prime
 * and 0 if otherwise
 * @n: number to check if it's prime
 * @y: number to iterate from 1 to n
 * Return: 1 or 0
 */
int prime_check(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (prime_check(x, y + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_check(n, 2));
}
