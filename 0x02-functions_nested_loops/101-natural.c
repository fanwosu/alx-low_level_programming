#include <stdio.h>

/**
 * main - this function calculates sum of multiple of
 * 3 and 5 below 1024
 *Return: return a sum of numbers
*/

int main(void)
{
	int x, sum;

	sum = 0;
	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
		}
	}

	printf("%d\n", sum);
	return (0);
}
