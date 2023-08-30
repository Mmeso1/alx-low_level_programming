#include "main.h"
#include "string.h"

/**
 * is_palindrome_recursive - checks if a substring is a palindrome or not
 * @s: accepts the string to be checked
 * @start: the starting index of the string
 * @end: the final index of the string
 * Return: 0 or 1
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: the string being checked
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
