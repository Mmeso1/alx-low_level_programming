#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	int a = 1, b = 2, c;
	int count = 2;

	printf("%d, %d, ", a, b);

	while (count < n)
	{
		c = a + b;
		printf("%d", c);

		if (count < n - 1)
		{
			printf(", ");
		}
		a = b;
		b = c;
		count ++;
	}
	printf("\n");
}

