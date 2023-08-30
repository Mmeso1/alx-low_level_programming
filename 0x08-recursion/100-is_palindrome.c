#include "main.h"
#include "string.h"

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: the string being checked
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = strlen(s);

	while (i < length / 2)
	{
		if (s[i] != s[strlen - 1 - i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
