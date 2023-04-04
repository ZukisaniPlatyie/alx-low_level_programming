#include "main.h"

/**
 * _memset - entry point
 * @s: 1st parameter
 * @b: constant  byte
 * @n: bytes
 * Return: 0 always
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
