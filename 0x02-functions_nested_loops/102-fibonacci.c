#include <stdio.h>
/**
 * main - this is the function that prints the first 50 fibonacci numbers
 * Return: returns 50 numbers
*/

int main(void)
{
	int x;
	unsigned long long fibonacci[50];

	for (x = 0; x < 50; x++)
	{
		if (x == 0)
		{
			fibonacci[x] = 1;
		}
		else if (x == 1)
		{
			fibonacci[x] = 2;
		}
		else
		{
			fibonacci[x] = fibonacci[x - 1] + fibonacci[x - 2];
		}
		printf("%d, ", fibonacci[x]);
	}
	putchar('\n');
	return (0);
}
