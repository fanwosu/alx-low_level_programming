#include "main.h"
/**
 * strlenth_recursion - is a function that get the length of a string
 * @string: the target string
 * Return: returns the length of the string
 */
int strlenth_recursion(char *string)
{
	if (*string != '\0')
	{
		string++;
		return (1 + strlenth_recursion(string));
	}
	return (0);
}
/**
 * check_helper - helper function for is_palindrome
 * @s: string
 * @length: length of string
 * @n: recursion counter
 * Return: 1 for true and 0 for false
 */
int check_helper(char *s, int length, int n)
{
	if (n >= length)
	{
		return (1);
	}
	if (s[length] == s[n])
	{
		return (check_helper(s, length - 1, n + 1));
	}
	return (0);
}
/**
 * is_palindrome - check if a string is a palindrome
 * @str: string to check
 * Return: returns 1 if palindrome and 0 if not.
 */
int is_palindrome(char *str)
{
	int l = strlenth_recursion(str);
	int k = 0;

	return (check_helper(str, l - 1, k));
}
