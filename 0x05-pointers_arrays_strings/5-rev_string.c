#include "main.h"
/**
  *rev_string - function that reverses a string
  *@s :string input
  */
void rev_string(char *s)
{
	int len = 0;
	int i;
	char dup;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2; i++)
	{
		dup = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = dup;
	}
}
