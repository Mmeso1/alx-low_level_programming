#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: Substring of accepted chars.
 * Return: number of bytes in the init segment
 */

unsigned int _strspn(char *s, char *accept);
{
	unsigned int a, b, t = 0;

	while (accept[a])
	{
		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);
}

