#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: 0 always
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[n] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			return (s + i);
		}
	}
	return (NULL);
}
