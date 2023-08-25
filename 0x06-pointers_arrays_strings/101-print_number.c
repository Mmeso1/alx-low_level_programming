#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */

void print_number(int n)
{
	unsigned int n2;

	if (n < 0)
	{
		n2 = -(n);
		_putchar('-');
	}
	else
	{
		n2 = n;
	}

	if (n2 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n2 % 10) + '0');
}
