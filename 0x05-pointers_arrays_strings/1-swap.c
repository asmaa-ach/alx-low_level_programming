#include "main.h"
/**
 * swap_int -  function that swaps the values of two integers
 * @a: input integer to swap
 * @b: input integer to swap
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
