#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		k = n * -1;
		_putchar('-');
	}

	if (k / 10 != 0)
	{
		print_number(k);
	}

	_putchar((unsigned int) n % 10 + '0');
}
