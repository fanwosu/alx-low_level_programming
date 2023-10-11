#include <stdio.h>
#include <inttypes.h>
/**
 * main - this is the function that prints the first 98 fibonacci numbers
 * Return: returns 98 numbers
*/

int main(void)
{
	unsigned long int x, first = 1, second = 2, next;

	for (x = 0; x < 98; x++)
	{
		if (x == 0)
		{
			printf("%lu, ", first);
		}
		else
		{
			if (x != 97)
			{
				printf("%lu, ", second);
			}
			else
			{
				printf("%lu\n", second);
				break;
			}
			next = first + second;
			first = second;
			second = next;
		}
	}
	return (0);
}
