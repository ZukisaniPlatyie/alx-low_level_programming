#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: is the 1st integer to be swaped
 * @b: is the 2nd integer to be swaped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
