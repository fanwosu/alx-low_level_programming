#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- entry point for function
 *
 * Return: value is 0 on success
*/
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
