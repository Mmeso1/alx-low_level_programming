#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Description: This function checks the sign of the given number @n and
 * prints a corresponding sign character (+, 0, or -) based on its value.
 *
 * Return: 1 and prints + if @n is greater than zero
 *         0 and prints 0 if @n is zero
 *         -1 and prints - if @n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
