#include "main.h"

/**
 * print_triangle - print triangle ff by \n
 * @size: prints diagonals
 * Return: void
 */

void print_triangle(int size)
{
	int r, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 0; r <= size; r++)
		{
			for (h = size - r; h > 1; h--)
			{
				_putchar(' ');
			}
			for (s = 0; s <= r; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
