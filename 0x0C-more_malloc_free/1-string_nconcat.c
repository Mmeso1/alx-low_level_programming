#include "main.h"
#include <stdio.h>
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
	unsigned int lens1;
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

	strncpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
