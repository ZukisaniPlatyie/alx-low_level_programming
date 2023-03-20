#include <stdio.h>

/**
 * main - print all possible combinations of two digits
 * Return: 0 always
 */

int main(void)
{
	int n;
	int x;

	for (n = 48; n < 58; n++)
	{
		putchar(n);

		for (x = 49; x < 58; x++)
		{
			putchar(x);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

