#include <stdio.h>

/**
 * main - Entry point
 * Description: Print first 50 Fibonacci numbers
 * Return: Zero (success)
 */
int main(void)
{
	unsigned long count, fib1, fib2, next;

	fib1 = 1;
	fib2 = 2;

	printf("%lu, %lu", fib1, fib2);

	for (count = 3; count <= 50; count++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);

		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
