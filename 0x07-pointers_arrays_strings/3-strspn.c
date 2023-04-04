#include "main.h"

/**
 * _strspn - entry point
 * @s: input parameter
 * @accept: input parameter
 * Return: 0 always
 */

unsigned int _strspn(char *s, char *accept)
{
	ubsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
	}
	return (0);
}
