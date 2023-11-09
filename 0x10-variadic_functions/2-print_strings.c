#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: seperates
 * @n: number of string passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int counter;
	char *ptr, *s;
	va_list words;

	va_start(words, n);
	for (counter = 0; counter < n; counter++)
	{
		if (separator == NULL)
		{
			s = "";
		}
		else
		{
			s = (char *)separator;
		}
		ptr = va_arg(words, char*);
		if (counter == 0)
		{
			printf("%s", ptr);
		}
		if (ptr == NULL)
		{
			printf("(nil)%s", s);
		}
		if (counter > 0)
		printf("%s%s", s, ptr);
	}
	printf("\n");
}
