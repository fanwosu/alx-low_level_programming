#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point for function
 * @argc: argument counter
 * @argv: argument vector
 * Return: array of pointers to args
 */
int main(int argc, char *argv[])
{
	int x;

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	for (x = 0; x < atoi(argv[1]); x++)
	{
		printf("%02hhx", *((char *)main + x));
		if (x < (atoi(argv[1]) - 1))
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
