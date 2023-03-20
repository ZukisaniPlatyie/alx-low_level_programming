#include <stdio.h>

/**
 * main - print all hex values ff by \n
 * Return: 0 always
 */

int main(void)
{
	int n;
	char l;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
