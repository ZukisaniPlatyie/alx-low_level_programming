#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 * Return: 0 always
 */

int main(void)
{
	char psswrd[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		psswrd[index] = 33 + rand() % 94;
		sum += psswrd[index++];
	}
	psswrd[index] = '\0';
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		{
			diff_half1++;
		}
		for (index = 0; psswrd[index]; index++)
		{
			if (psswrd[index] >= (33 + diff_half1))
			{
				psswrd[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; psswrd[index]; index++)
		{
			if (psswrd[index] >= (33 + diff_half2))
			{
				psswrd[index] -= diff_half2;
				break;
			}
		}
	}
	printf("%s", psswrd);
	return (0);
}
