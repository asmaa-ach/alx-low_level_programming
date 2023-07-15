#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/*
 *main : Entry point 
 *The variable n will store a different value every time
 *The output of the program should check if n is positive ,negative or zero
 */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
	        printf("%d is positive\n", n);
        }
	else if (n == 0)
	{
	        printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
