#include "main.h"
/**
 * _strcat - is a function that prints 2 strings.
 * @dest: one of the input parameter strings.
 * @src: the second input paramenter string.
 * Return: returns 0 on success.
 */
char _strcat(char *dest, char *src)
{
	char *orig = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		scr++;
	}
	*dest = '\0';
	return (orig);
}	
