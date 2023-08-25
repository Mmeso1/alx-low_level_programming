#include "main.h"

/**
 * leet - convert strings to leet
 * @s: string being converted
 * Return: char pointer
 */

char *leet(char *s)
{
	char *original = "aeotlAEOTL";
	char *leet = "47031";

	for (int i = 0; s[i]; i++)
	{
		for (int j = 0; original[j]; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = leet[j];
			}
		}

	}
	return (s);
}
