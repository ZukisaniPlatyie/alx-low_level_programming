#include "main.h"

/**
 * is_prime_number -  function to return prime number
 * @n: number to check if prime number or not
 * Return: 1 if n prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}
