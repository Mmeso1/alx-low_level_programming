#include "main.h"

/**
 * _strlen_recursion - find length of string recursively
 * @s: string to be accepted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		sum += 1;
		_strlen_recursion(s + 1);
	}
	return (sum);
}
