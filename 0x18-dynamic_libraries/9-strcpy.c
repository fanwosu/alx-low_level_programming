#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * *_strcpy - copies the string pointed to by src including the terminating
 * null byte \0, to the buffer pointed to by dest.
 * @dest: the buffer
 * @src: string being copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
