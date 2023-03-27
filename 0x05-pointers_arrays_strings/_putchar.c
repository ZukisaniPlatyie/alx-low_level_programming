#include "main.h"
#include <unistd.h>

/**
 * _putchar writesthe character c to stdout
 *
 * Return: 1 always
 * On error -1 isreturned and erro is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
