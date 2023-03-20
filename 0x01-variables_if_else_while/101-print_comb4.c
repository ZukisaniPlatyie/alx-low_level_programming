#include <stdio.h>

/**
 * main - print possiblecombinations of 3 digit number
 * Return: 0 always
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = 50; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (c != 57)
				{
					putchar(',');
					putchar(' ');
				}
				if (c == 57)
				{
					c++;
				}
			}
			if (b == 57)
			{
				b++;
			}
		}
	}
	putchar('\n');
	return (0);
}
