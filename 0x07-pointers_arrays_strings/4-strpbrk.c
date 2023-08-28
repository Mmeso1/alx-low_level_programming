#include "main.h"

/**
 * _strpbrk - 
 * @s:
 * @accept:
 * Return:
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
	return (NULL);
}
