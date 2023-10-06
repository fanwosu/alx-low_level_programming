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

	for(low = 'a'; low < 'z'; low++)
	{
		putchar(low);
		putchar('\n');
	}

	return (0);
}
