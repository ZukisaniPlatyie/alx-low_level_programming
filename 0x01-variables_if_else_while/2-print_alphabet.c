#include <stdio.h>

/**
 * main- print alpha in lower case
 * Return: 0 Always
 */

int main(void)
{
	char l_case;

	for (l_case = 'a'; l_case <= 'z'; l_case++)
	{
		putchar(l_case);
	}

	putchar('\n');

	return (0);
}
