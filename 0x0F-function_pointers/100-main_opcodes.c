#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point for function
 * @argc: argument counter
 * @agrv: argument vector
 * Return: array of pointers to args
 */
int main(int argc, char *argv[])
{
	int (*f)(int, char**);
	int hb, x;

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
	f = main;
	for (x = 0; x < atoi(argv[1]); x++)
	{
		hb = *(unsigned char *)(f + x);
		printf("%.2x", hb);
		if(x < atoi(argv[1]) - 1)
		{
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
