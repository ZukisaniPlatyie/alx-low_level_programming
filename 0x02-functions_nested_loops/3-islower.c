#include "main.h"

/**
 * _islower - checks if char is lowercase
 * c:  charactor to be checked
 * Return: 1 if c  islowercase otherwise return 0
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
