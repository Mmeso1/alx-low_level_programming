#include <stdio.h>

/**
 * main - entry point
 * Return: fizz, buzz, fizzbuzz
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s","FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s","Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s","Buzz");
		}
		else
		{
			printf("%d ", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}

	printf("\n");
	return (0);

}
