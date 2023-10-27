#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: argument counter
 * @argv: arguments received
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return 0;
}
