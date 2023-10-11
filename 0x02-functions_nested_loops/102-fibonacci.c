#include <stdio.h>
/**
 * main - this is the function that prints the first 50 fibonacci numbers
 * Return: returns 50 numbers
*/

int main(void)
{
	long x, first = 1, second = 2, next;

	for (x = 0; x < 50; x++)
	{
		if (x == 0)
		{
			printf("%ld, ", first);
		}
		else if (x == 1)
		{
			printf("%ld, ", second);
		}
		else if (second != 20365011074)
		{
			printf("%ld, ", second);
		}
		else
		{
			printf("%ld\n", second);
			break;
		}
		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
