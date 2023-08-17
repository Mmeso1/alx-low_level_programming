#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check if it is a digit
 * @c: The character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
	printf("\n");
}
