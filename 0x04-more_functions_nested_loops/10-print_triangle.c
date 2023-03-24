#include "main.h"

/**
 * print_triangle - print triangle ff by \n
 * @size: prints diagonals
 * Return: void
 */

void print_triangle(int size)
{
	int row, hash, spc;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= size; row++)
		{
			for (spc = size - row; spc > 1; spc--)
			{
				_putchar(' ');
			}
			for (hash = 0; hash <= row; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
