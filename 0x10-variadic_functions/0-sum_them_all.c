#include <stdarg.h>
/**
 * sum_them_all - function that returns sum
 * @n: is the format
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	unsigned int x;

	int result = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(values, n);
	for (x = 0; x < n; x++)
	{
		result += va_arg(values, int);
	}
	va_end(values);
	return (result);
}
