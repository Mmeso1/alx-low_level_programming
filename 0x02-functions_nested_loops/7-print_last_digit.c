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
