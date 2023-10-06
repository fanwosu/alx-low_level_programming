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
	int z;

	for (y = '0'; y <= '9'; y++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			if (z > y)
			{	
				putchar(y);
				putchar(z);
				if (y < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
