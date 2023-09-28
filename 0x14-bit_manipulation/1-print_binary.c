#include "main.h"

/**
 * print_binary - print the binary representation of the argument
 * @n: the argument
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n >> 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
