#include <stdio.h>

/**
 * main - this function finds and prints sum of even fibonacci numbers
 * Return: Always return 0
*/

int main(void)
{
	int x;
	unsigned long int first, second, next, sum;
	first = 1;
	second = 2;
	sum = 0;
	for (x = 1; x <= 33; ++x)
	{
		if (first < 4000000 && (first % 2) == 0)
		{
			sum = sum + first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%lu\n", sum);
	return (0);
}
