#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - function that checks for digit
 * @string: input to check if digit
 * Return: returns 0 if digit and 1 if not digit
 */
int is_digit(char *string)
{
	while (*string)
	{
		if (*string < '0' || *string > '9')
		{
			return (0);
		}
		string++;
	}
	return (1);
}
/**
 * main - entry point of function
 * @argc: argumemt counter
 * @argv: argument vector
 *
 * Return: always 0;
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum;

	sum = 0;
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;
	printf("%d\n", sum);
	return (0);
}
