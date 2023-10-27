#include <stdio.h>
/**
 * main - function that prints it's own arc
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int x;
       
	x = 0;	
	while (x < argc)
	{
		x++;
		(*argv)++;
	}
	printf("%d\n", x - 1);
	return (0);
}
