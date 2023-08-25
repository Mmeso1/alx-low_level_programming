#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	unsigned int n2;

	if (n < 0)
	{
		_putchar('-');
		n2 = -(n);
	}
	else
	{
		n2 = n;
	}

	if (n2 / 10 != 0)
	{
		print_number(n2 / 10);
	}
	_putchar(n2 % 10 + '0');
}
