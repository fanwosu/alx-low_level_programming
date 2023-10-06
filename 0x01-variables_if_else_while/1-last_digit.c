#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * main - the entry point
 *
 * Returns: on success returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastdigit;
	lastdigit = n % 10;

	if (lastdigit == 0)
	{
		printf("Last digit of %d is %d: and is 0\n", n,lastdigit);
	}
	else if (lastdigit < 6)
	{
		printf("Last digit of %d is %d: and it is less than 6 and not 0\n", n,lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d: and i is grater than 5\n", n,lastdigit);
	}
}
