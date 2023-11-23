#include "main.h"
/**
 * set_bit - get the bit at given index
 * @n: ---
 * @index: ----
 * Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size, m;

	size = sizeof(*n) * 8 - 1;
	if (index >= size)
	{
		return (-1);
	}
	m = 1 << index;
	*n = m | *n;
	return (1);
}
