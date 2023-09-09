#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 to n bytes of n2
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2 to be concatenated
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1, i, j;
	char *result;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	if (n >= strlen(s2))
		n = strlen(s2);

	lens1 = strlen(s1);
	result = malloc(lens1 + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		result[i + j] = s2[j];
	}

	result[i + j] = '\0';
	return (result);
}
