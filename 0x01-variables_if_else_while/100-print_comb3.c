#include <stdio.h>

/**
 * main - print all possible combinations of two digits
 * Return: 0 always
 */

int main(void)
{
	int n;
	int x;
	int i = 49;

	for (n = 48; n < 58; n++)
	{
		for (x = i; x < 58; x++)
		{
			putchar(n);
			putchar(x);

			if (i != 57)
			{
				putchar(',');
				putchar(' ');
			}
			if (x == 57)
			{
				i++;
			}
		}
	}
	putchar('\n');
	return (0);
}

