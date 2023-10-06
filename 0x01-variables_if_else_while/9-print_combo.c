#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - is the entry point of function
 *
 * Return: on success, this function returns 0
*/
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
		if (y != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
