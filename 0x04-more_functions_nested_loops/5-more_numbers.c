#include "main.h"

/**
 * more_numbers - prints from 0 - 14 ten timex
 *
 * Return: 0
*/

void more_numbers(void)
{
	int x = 1;

	while (x <= 10)
	{
		int i = 0;
		
		while (i <= 14)
		{
			_putchar(i);
			i++;
		}

		_putchar('\n');
		x++;
	}
}
