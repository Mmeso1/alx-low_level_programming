#include "main.h"

/**
 * wildcmp - compare strings to check how identical they are
 * @s1: string 1
 * @s2: string 2
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
