#include "main.h"

/**
 * print_numbers - prints 2 numbers from 0 to 9
 * Return: numbers from 0 to 9
 */

void print_numbers(void)
{
	char  x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
