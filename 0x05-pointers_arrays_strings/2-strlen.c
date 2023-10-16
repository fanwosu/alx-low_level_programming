#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string to eturn it's length
 * Return: length
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
