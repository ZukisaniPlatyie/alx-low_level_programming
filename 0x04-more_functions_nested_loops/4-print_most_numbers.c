#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 * print ecluding 2 and 4
 * Return: numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int x = 48;

	for (; x <= 57; x++)
	{
		if (x == 50 || x == 52)
		{
		}
		else
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
