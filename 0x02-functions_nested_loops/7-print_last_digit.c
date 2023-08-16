#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: the number whose last digit will be printed
 * Description: This function takes an integer and
 * returns/prints the last digit
 * Return: integer
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -(last_digit);
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
