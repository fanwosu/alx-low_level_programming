#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: result of addition
 */
int main(int argc, char *argv[])
{
	int sum, x, y;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[y][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
