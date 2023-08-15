#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which to compute the absolute value
 *
 * Description: This function calculates the absolute value of the given
 * integer @n and returns the result as an unsigned integer.
 *
 * Return: The absolute value of @n, as an unsigned integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
