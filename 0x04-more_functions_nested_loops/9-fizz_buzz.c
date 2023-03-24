#include <stdio.h>
#include "main.h"

/**
 * main - print number from 1 - 100 with multiples of 3 f fizz
 * Return: 0 always
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", x);
		}
		if (x < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
