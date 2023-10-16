#include "main.h"
/**
 * print_array - is a function that prints n elements of an array
 * @arr: array name
 * @no: is the number of elements OF the array to be printed
 * *Return: a and n inputs
 */
void print_array(int *arr, int no)
{
	int x;

	for (x = 0; x < (no - 1); x++)
	{
		printf("%d, ", arr[x];
	}
	if ( x == (no -1))
	{
		printf("%d", a[no - 1]);
	}
	printf("\n");
}
