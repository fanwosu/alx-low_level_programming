#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @m: month in number format
 * @d: day of year
 * @y: year
 * Return: void
*/

void print_remaining_days(int m, int d, int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		if (m > 2)
		{
			d++;
		}
		printf("Day of the year: %d\n", d);
		printf("Remaining days: %d\n", 366 - d);
	}
	else
	{
		if (m == 2 && d == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", m, d - 31, y);
		}
		else
		{
			printf("Day of the year: %d\n", d);
			printf("Remaining days: %d\n", 365 - d);
		}
	}
}
