#include <stdio.h>
/**
 * get_endianness - retunrs the endian of the processor
 * Return: 1 for little and 0 for big
 */
int get_endianness(void)
{
	unsigned int x;

	return ((int) (((char *)&x)[0]));
}
