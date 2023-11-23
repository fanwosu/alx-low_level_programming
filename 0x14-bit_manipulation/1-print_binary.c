#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints decimal as binary
 * @n: long integer
 * Return: returns void
 */
void print_binary(unsigned long int n)
{
	signed long int size;
	char c;
	int i = 0;

	size = sizeof(n) * 8 - 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if (n == 1)
	{
		printf("1");
		return;
	}
	while (size >= 0)
	{
		c = (n >> size) & 1;

		if (i == 1)
			putchar(c + '0');
		else
		{
			if (c == 1)
			{
				putchar(c + '0');
				i = 1;
			}
		}

		size -= 1;
	}
}
