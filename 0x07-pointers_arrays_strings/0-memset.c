#include "main.h"

/**
 * _memset - fills the first n bytes with b of s
 * @*s: the memeory area being pointed to
 * @b: the source of the constant
 * @n: the size of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
