#include "main.h"

/**
 * _memcpy - entry point
 * @dest: input parameter
 * @src: input parameter
 * @n: input
 * Return: 0 always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
