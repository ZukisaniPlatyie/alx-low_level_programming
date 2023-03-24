#include <stdio.h>
#include "math.h"

/**
 * main - prints the  largest prime factor of the number 612852475143
 * Return: 0 always
 */

int main(void)
{
	long x, mf;
	long n = 612852475143;
	double sq = sqrt(n);

	for (x = 1; x <= sq; x++)
	{
		if (n % x == 0)
		{
			mf = n / x;
		}
	}
	printf("%ld\n", mf);
	return (0);
}
