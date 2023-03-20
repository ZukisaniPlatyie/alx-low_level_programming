#include <stdio.h>

/**
 * main - print numbers from 0 -10 ff by \n
 * Return: 0 always
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}
	putchar('\n');
	return (0);
}
