#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *
