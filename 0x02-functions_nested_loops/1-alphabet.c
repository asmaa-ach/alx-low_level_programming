#include "main.h"
/**
 *  print_alphabet - print all alphabet in lowercase
 * output: prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}



