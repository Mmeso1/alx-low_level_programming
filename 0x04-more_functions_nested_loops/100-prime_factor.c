#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: 0 for success
 */

int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long largestFactor = 0;

	while (num > 1)
	{
		if (num % factor == 0)
		{
			if (factor > largestFactor)
			{
				largestFactor = factor;
			}
			num /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largestFactor);
	return (0);
}
