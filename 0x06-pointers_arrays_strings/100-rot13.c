#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The input string.
 * Return: A pointer to the modified string.
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
			}
			else
			{
				s[i] -= 13;
			}
		}
		i++;
	}
	return (s);
}
