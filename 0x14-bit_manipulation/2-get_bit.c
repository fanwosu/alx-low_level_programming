#include "main.h"
/**
 * get_bit - get the bit at given index
 * @n: ---
 * @index: ----
 * Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted;
	int result;
	
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	shifted = n >> index;
	result = shifted & 1;

	return (result);
}
