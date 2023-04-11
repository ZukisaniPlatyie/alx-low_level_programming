#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c tostdout
 * @c: the character to print
 * Return: 1 on success, -1 onerror
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
