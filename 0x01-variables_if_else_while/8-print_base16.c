#include<stdio.h>
/**
  *main:entry point
  *Description: prints all the numbers of base 16 in lowercase
  *Return:always 0
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 65; n <= 70; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

