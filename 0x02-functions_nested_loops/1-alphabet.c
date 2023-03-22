#include "main.h"

/**
 * main - print_alphabet in lowercase
 *
 * Return: 1 always
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar("\n");
}
