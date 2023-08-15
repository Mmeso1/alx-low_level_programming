#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit
 * @n: the number to get the last digit from
 * Description: This function takes an integer and
 * returns/prints the last digit
 * Return: integer
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
