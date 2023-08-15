#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic character
 * @c: The character to check (ASCII value)
 * Description: This function checks whether the given character @c is an
 * alphabetic character, whether lowercase or uppercase.
 * Return: 1 if @c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
