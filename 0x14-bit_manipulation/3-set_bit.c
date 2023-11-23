#include "main.h"
/**
 * set_bit - get the bit at given index
 * @n: ---
 * @index: ----
 * Return: int
*/
int set_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n ^= (1 << index);
	return (1);
}
