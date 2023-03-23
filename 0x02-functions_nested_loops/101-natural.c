#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b;

	b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
