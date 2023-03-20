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
		for (b = (a + 1); b < 58; b++)
		{
			for (c = (b + 1); c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
