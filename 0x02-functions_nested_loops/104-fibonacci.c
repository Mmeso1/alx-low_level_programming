#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	unsigned long long a = 1, b = 2, c;
	int count = 2;

	_putchar('0' + a);
	_putchar(',');
	_putchar('0' + b);

	while (count < n)
	{
		c = a + b;
		
		_putchar(',');
		_putchar(' ');

		unsigned long temp = c;
		unsigned long divisor = 1;

		while (temp >= 10)
		{
			divisor *= 10;
			temp /= 10;
		}

		while (divisor > 0)
		{
			_putchar('0' + c / divisor);
			c %= divisor;
			divisor /= 10;
		}

		a = b;
		b =c;
		count++;
	}
	_putchar('\n');
}

/**
 * main - entry pint
 * Return: void
 */
int main(void)
{
	print_fibonacci(98);
	return (0);
}
