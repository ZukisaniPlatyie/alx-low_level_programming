#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
}

/**
 * actual_prime - calculates if a number is a prime number
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
