#include <stdio.h>

/**
 * main - print 2 digit combination from 00 - 99
 * Return: 0 always
 */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 49; d < 58; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if ((a == 57) && (b == 56) && (c == 57) && (d == 57))
					{
					}
					else
					{
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
