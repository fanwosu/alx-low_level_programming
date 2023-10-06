#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main - function entry point 
 *
 * type: returns an in
 *
 * functionality: assigns a random number to n each time it's called
 *
 * Return: on successful, it returns a 0
*/
int main(void)
{
		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if(n<0){
			printf("%d is negative\n", n);
		}else if(n==0){
			printf("%d is zero\n", n);
		}else{
			printf("%d is positive\n", n);
		}
		return (0);
}
