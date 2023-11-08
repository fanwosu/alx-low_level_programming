#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point of function
 * @argv: argument vector
 * @argc: argument count
 * Return: int
 */
int main(int argc, char *argv[])
{
	char op;
	int (*op_func)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = *(argv[2]);
	if ((op == '/' || op == '%') && !atoi(argv[3]))
	{
		printf("Error\n");
		return (100);
	}
	op_func = get_op_func(&op);
	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	result = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
