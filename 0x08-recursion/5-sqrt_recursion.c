#include "main.h"

int actual _sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion  function that returns square root of a number
 * @n: number to calculate square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual _sqrt_recursion - recurses to find the square root of a number
 * @n: number to calculate square root of
 * @i: iterater
 * Return: the square root of n
 */

int actual _sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
