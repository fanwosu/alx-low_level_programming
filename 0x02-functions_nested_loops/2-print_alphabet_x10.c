#include "main.h"
/**
 *print_alphabet_x10 - the entry point of this function
 *
 *Return: returns 0 on success
*/
void print_alphabet_x10(void)
{
	char i = 'a';
	int x = 0;
	while (x < 10)
	{ 
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		x++;
	}
	_putchar('\n');
}
