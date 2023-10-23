#include "main.h"
/**
 * print_diagsums - prints the sum of 2 diagonals of square matrix
 * @a: matrix to be summed
 * @size: size matrix a
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;
	int *p1 = a;
	int *p2 = a + size - 1;
	for (x = 0; x < size; x++)
	{
		s1 += *p1;
		s2 += *p2;
		p1 += size + 1;
		p2 += size - 1;	
	}
	printf("%d, %d\n", s1, s2);
}
