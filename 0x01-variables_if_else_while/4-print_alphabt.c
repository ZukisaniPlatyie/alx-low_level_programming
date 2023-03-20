#include <stdio.h>

/**
 * main - print alphabet in lower case ff by \n except q and e
 * Return: 0 Always
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'e' && l != 'q')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
