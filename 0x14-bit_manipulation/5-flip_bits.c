#include "main.h"
/**
 * flit_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size, f, i;

	size = sizeof(n) * 8 - 1;

	f = 0;
	i = 0;

	while (i <= size)
	{
		if ((n & 1) != (m & 1))
			f++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (f);
}
