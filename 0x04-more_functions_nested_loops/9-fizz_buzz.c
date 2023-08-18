#include <stdio.h>

/**
 * main - entry point
 * Return: fizz, buzz, fizzbuzz
 */

int main(void)
{
	int i = 100;

	while (i >= 1)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		i--;
	}

}
