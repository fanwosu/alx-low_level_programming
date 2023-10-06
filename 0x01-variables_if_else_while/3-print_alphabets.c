#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point of function
 *
 * Return: returs 0 on succes
*/
int main(void)
{
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');
	return (0);
}
