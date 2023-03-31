#include "main.h"

/**
 * _strcat - strcat function
 * @dest: 1st parameter
 * @src: 2nd parameter
 * Return: a string
 */

cha *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
