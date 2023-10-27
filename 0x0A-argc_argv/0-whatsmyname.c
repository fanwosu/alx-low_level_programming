#include <stdio.h>
/**
 * main - a function that prints it's name followed by new line
 * @argc: counter for argv
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("cannot print program name.\n");
	}
	return (0);
}
