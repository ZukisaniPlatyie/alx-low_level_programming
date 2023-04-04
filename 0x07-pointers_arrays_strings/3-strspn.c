#include "main.h"

/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: 0 always
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c, value;

	value = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				value++;
				c = 1;
			}
		}
	}
	return (0);
}
