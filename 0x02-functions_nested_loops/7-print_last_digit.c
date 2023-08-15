#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number whose last digit will be printed
 *
 * Description: This function prints the last digit of the given number @n
 * and returns the value of that last digit.
 *
 * Return: The value of the last digit of @n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -(long)n;
	}

	last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
