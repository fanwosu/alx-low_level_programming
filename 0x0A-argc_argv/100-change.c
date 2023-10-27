#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins for change
 * @argc: argument count
 * @argv: argument vectot
 * Return: 1 if the number of arguments is 1 or 0 if otherwise
*/
int main(int argc, char *argv[])
{
	int x, y, cent;

	int change[5] = {25, 10, 5, 2, 1};
	cent = 0;
	y = 0;
        if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
	        printf("0\n");
	        return (0);
	}
        else
	{
	        while (y < 5)
		{
			if (x >= change[y])
			{
				x -= change[y];
				cent += 1;
				if (x >= change[y])
				{
					y--;
				}
				else if (x == 0)
				{
					break;
				}
			}
			y++;
		}
		printf("%d\n", cent);
		return (0);
	}
}
