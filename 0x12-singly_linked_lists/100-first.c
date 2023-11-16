#include <stdio.h>
void print_message(void);
/**
 * print_message - prints message
 * Return: void
 */
void __attribute__ ((constructor)) turtle()
{
	char *s;

	s = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", s);
}
