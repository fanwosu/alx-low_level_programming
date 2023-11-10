#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * char_specifier - prints character
 * @arguments: va_list to get character from
 * Return: void
 */
void char_specifier(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * int_specifier - prints integer
 * @arguments: va_list to get integer from
 * Return: void
 */
void int_specifier(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
/**
 * float_specifier - prints floats
 * argmuents: va_list to print from
 * Return: void
 */
void float_specifier(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
/**
 * string_specifier - prints strings
 * @arguments: va_list to print from
 * Return: void
 */
void string_specifier(va_list arguments)
{
	char *str = va_arg(arguments, char*);
	while (str == NULL)
	{
		printf("%s", str);
	}
	printf("(nil)");
}
/**
 * print_all - a function that prints anything
 * @format: list of all arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{'c', char_specifier},
		{'d', int_specifier},
		{'f', float_specifier},
		{'s', string_specifier},
		{'\0', NULL}
	};
	va_list arguments;
	char *sep1 = "", *sep2 = ", ";
	int count1 = 0, count2 = 0;

	va_start(arguments, format);
	while (format != NULL && format[count1] != '\0')
	{
		count2 = 0;
		while (types[count2].z != '\0')
		{
			if (format[count1] == types[count2].z)
			{
				printf("%s", sep1);
				types[count2].f(arguments);
				sep1 = sep2;
			}
			count2++;
		}
		count1++;
	}
	printf("\n");
	va_end(arguments);
}
