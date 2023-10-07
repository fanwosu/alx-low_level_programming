#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the entry point of function
 *
 *Return: Returns 0 on success
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (a = a; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 99 && b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
