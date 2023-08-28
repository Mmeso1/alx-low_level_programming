#include "main.h"

/**
 * _strpbrk - locates the first occurrence of a character from @accept in @s
 * @s: the string to search in
 * @accept: the set of characters to search for
 * Return: pointer to the byte in @s that matches one of the bytes in @accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, a;

	while (s[i] != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (accept[a] == s[i])
			{
				return (s + i);
			}
			a++;
		}
		i++;
	}
	return ('\0');
}
