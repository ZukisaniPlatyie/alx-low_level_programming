#include <stdio.h>

/**
 * main - print lower case alphabet in reverse, ff by \n
 * Return: 0 always
 */

int main(void)
{
	char l;

	for (l = 'z'; l <= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n);
	return (0);
}
