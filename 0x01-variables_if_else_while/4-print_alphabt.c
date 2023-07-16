#include<stdio.h>
/**
  *main:entry point
  *Description:Print all the letters in lowercase except q and e
  *Return:always 0
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
	return (0);
}
