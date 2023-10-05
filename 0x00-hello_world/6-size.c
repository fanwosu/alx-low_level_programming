#include <stdio.h>
/**
 * main - is the entry point
 *
 * type: integer
 *
 * return: 0
*/
int main(void)
{
	int v;
	long int w;
	long long int x;
	float y;
	char z;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
