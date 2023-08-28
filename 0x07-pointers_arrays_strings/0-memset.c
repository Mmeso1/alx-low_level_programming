#include "main.h"

/**
 * _memset - fills the first n bytes with b of s
 * @s: the memory area being pointed to
 * @b: the source of the constant
 * @n: the size of bytes
 * Return: pointer to the input string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
