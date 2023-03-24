#include "main.h"

/**
 * _isupper - checks if a letter is upper
 * @x: the number to be checked
 * Return: 1 for uppper letter or 0 for any else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
