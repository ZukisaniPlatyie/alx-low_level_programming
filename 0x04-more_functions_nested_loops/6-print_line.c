#include "main.h"

/**
 * print_line - print straight line
 * @n: number of lines
 * Return: 0 always
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
