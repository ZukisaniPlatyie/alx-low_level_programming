#include <stdio.h>

/**
 * main - print single digit numbers of base 10 from 0 - 9, followed by a new line.
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
