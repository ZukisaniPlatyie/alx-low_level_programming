#include <stdio.h>

/**
 * main - print single numbers from 0 - 9, ff by \n.
 * Return: 0 always
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
