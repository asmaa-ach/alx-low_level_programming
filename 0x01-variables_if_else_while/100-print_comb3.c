#include<stdio.h>
/**
 * main - Entry point
 * output  alphabet in lowercase
 * Return:Always 0
 */
int main(void)
{
	int n;
	int m;
	int l = 0;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49 + l; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		l++;
	}
	putchar('\n');
	return (0);
}
