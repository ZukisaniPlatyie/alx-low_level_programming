#include "main.h"

/**
 * print_chessboard - entry point
 * @a: array
 * return: 0 always
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 9; i++)
	{
		for (n = 0; n < 9; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
	}
}
