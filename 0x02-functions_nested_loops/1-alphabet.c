#include "main.h"
/**
 * main - the entry point of this function
 *
 * Return: returns 0 on success
*/
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return(0);
}
