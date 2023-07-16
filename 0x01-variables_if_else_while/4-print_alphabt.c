#include<stdio.h>
/**
 * main - Entry point
 * output  alphabet in lowercase
 * Return:Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n != 101 & n != 113)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
