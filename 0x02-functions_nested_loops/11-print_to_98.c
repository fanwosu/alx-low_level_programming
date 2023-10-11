#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 90
 *
 * @n: is the reference number
*/

void print_to_98(int n)
{
	int x, y;

	if (n < 99)
	{
		for (x = n; x < 99; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else if (x == 98)
			{
				printf("%d\n", x);
			}
		}
	}
	else if (n > 99)
	{
		for (y = n; y >= 98; y--)
		{
			if (y != 98)
			{
				printf("%d, ", y);
			}
			else if (y == 98)
			{
				printf("%d\n", y);
			}
		}
	}
}
