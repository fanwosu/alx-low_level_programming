#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Result: result of addition
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		int sum, x, y;

		sum = 0;
		x = 1;
		while (x < argc)
		{
			char *arg = argv[x];
			y = atoi(arg);
			if (y <= 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += y;
			x++;
		}
		printf("%d\n", sum);
	}
	return (1);
}
