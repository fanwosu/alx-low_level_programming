#include <stdio.h>
#include <inttypes.h>
/**
 * main - this is the function that prints the first 98 fibonacci numbers
 * Return: returns 98 numbers
*/

int main(void)
{
	uint64_t x, first = 1, second = 2, next;

	for (x = 0; x < 98; x++)
	{
		if (x == 0)
		{
			printf("%"PRIu64", ", first);
		}
		else
		{
			if (x != 97)
			{
				printf("%"PRIu64", ", second);
			}
			else
			{
				printf("%"PRIu64"\n", second);
				break;
			}
			next = first + second;
			first = second;
			second = next;
		}
	}
	return (0);
}
