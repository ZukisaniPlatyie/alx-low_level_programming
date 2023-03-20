#include <stdio.h>

/**
 * main - print possiblecombinations of 3 digit number
 * Return: 0 always
 */

int main(void)
{
	int a, b, c, i;

	i = 50;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (c = i; c < 58; c++)
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
			i++;
		}
	}
	putchar('\n');
	return (0);
}
