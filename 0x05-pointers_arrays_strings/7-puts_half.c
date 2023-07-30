#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
		;
	if (len % 2 == 1)
		len++;
	for (i = len / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}


