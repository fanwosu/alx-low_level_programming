#include "main.h"
/**
 * clear_bit - sets bit to 0 at given index
 * @n: pointer to unsigned long int
 * @index: index to set to 0
 *
 * Return: 1 if succeed -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s, m;

	s = sizeof(*n) * 8 - 1;

	if (index > s)
		return (-1);

	m = 1 << index;

	*n = *n & ~m;

	return (1);
}
