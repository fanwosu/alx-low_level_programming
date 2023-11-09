#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: seperates number
 * @n: format
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *s;
	va_list numbers;

	va_start(numbers, n);
	for (counter = 0; counter < n; counter++)
	{
		if (separator == NULL || *separator == 0)
			s = "";
		else
			s = (char *)separator;
		if (counter == 0)
			printf("%d", va_arg(numbers, int));
		else
			printf("%s%d", s,va_arg(numbers, int));
	}
	printf("\n");
}
