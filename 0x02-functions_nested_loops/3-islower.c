#include "main.h"

/**
 * main - _islower checks if char is lowercase
 * check %c char
 * return 1 if char islowercase otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
