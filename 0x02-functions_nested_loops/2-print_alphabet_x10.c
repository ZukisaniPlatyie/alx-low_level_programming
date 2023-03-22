#include "main.h"

/**
 * main - print 10times the alphabet in lowercase ff by \n
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i =0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			-putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
