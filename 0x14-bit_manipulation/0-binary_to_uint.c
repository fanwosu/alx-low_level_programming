#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dml;
	unsigned int i;

	for (dml = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			dml = (dml << 1) | 1;
		else if (b[i] == '0')
			dml <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (dml);
}


