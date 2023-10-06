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
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (y > x)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (z > y)
					{
						putchar(x);
						putchar(y);
						putchar(z);
						if (x < '7')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
