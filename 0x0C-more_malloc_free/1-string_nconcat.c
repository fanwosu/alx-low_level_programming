#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates 2 strings
 * with n bytes
 * @s1: destination for concatenation
 * @s2: source string
 * @n: int typpe for string
 * Return: pointer to new memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int c1, c2, l1, l2, sign;
	char *ptr;

	sign = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (sign >= l2)
	{
		sign = l2;
		ptr = malloc(sizeof(char) * (l2 + l1 + 1));
	}
	else
		ptr = malloc(sizeof(char) * (l1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (c1 = 0; c1 < l1; c1++)
		ptr[c1] = s1[c1];
	for (c2 = 0; c2 < sign; c2++)
		ptr[c1++] = s2[c2];
	ptr[c1++] = '\0';
	return (ptr);
}
