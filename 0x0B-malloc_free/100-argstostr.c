#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - is a function that concatenats all arguments of a program
 * @av: pointer to array of size ac.
 * @ac: argument count
 * Return: Null based on condition of ac and av
 */
char *argstostr(int ac, char **av)
{
	char *in, *rep;
	int x, y, sum;

	x = 0;
	y = 0;
	sum = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (x < ac)
	{
		while (av[x][y] != '\0')
		{
			sum++;
			y++;
		}
		sum++;
		x++;
	}
	sum++;
	in = malloc((sum * sizeof(char)) + 1);
	if (in == NULL)
	{
		return (NULL);
	}
	rep = in;
	x = 0;
	while (x < ac)
	{
		while (av[x][y] != '\0')
		{
			*in = av[x][y];
			in++;
			y++;
		}
		*in = '\n';
		in++;
		x++;
	}
	return (rep);
}
