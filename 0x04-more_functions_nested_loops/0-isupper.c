#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Checks character case
 * @c: argument
 * Return: 0 if lower and vice versa
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	printf("\n");
}
