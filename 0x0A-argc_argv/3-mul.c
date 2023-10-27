#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiplies 2 numbers
 * @argc: argument count
 * @argv: arguments to be multiplied
 * Return: result of muliplication followed by new line
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", result);
	}
	return (0);
}
