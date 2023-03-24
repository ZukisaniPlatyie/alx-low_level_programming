#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 * print ecluding 2 and 4
 * Return: numbers from 0 to 9
 */

void print_most_numbers(void)
{
	char n = '0';

	for (; n <= '0'; n++)
	{
		if (n == '2' || n == '4')
		{
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
