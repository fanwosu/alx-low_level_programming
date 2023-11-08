#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: pointer to a function
 * Return: void;
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		if (f != NULL)
		{
			f(name);
		}
	}
}
