#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * output:  prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int letter;
	int i = 0;

	while (i <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	i++;
	}
}
