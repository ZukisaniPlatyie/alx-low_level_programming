#include "main.h"
#include <string.h>

/**
 * _strcat - strcat function
 * @dest: 1st parameter
 * @src: 2nd parameter
 * Return: a string
 */

cha *_strcat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[i++])
	{
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len] = src[i];
	}
	return (dest);
}
