#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the entry point of the function
 *
 * Return: on success, returns 0
*/
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}
