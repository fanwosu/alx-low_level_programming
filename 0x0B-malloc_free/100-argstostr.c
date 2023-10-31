#include "main.h"
#include <stdlib.h>
/**
 * argstostr - is a function that concatenats all arguments of a program
 * @av: pointer to array of size ac.
 * @ac: argument count
 * Return: Null based on condition of ac and av
 */
char *argstostr(int ac, char **av)
{
	char *in;
	int count = 0, x = 0, y = 0, z = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			count++;
			y++;
		}
		x++;
	}
	count = count + ac + 1;
	in = malloc(count * sizeof(char));
	if (in == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			in[z] = av[x][y];
			z++;
		}
		in[z] = '\n';
		z++;
	}
	return (in);
}
