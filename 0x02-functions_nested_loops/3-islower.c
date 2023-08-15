#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Checks if a char is lowercase
 * @c: The character to check (ASCII)
 * Description: Checks if lower
 * Return: 1 if @c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
