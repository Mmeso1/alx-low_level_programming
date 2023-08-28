#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 * Return: char value
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != 0 && haystack[i + j] == needle[j])
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
