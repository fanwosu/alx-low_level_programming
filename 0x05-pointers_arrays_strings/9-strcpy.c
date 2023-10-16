#include "main.h"
/**
 * _strcpy - this function copies string by src including
 * the null byte (\0) to the buffer pointed to by dest
 * @dest: pointed to the buffer in which we copy the string
 * @src: string to be copies
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, x;

	while (src[l] != '\0')
	{
		l++;
	}
	for (x = 0; x < l; i+=)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return(dest);
}
