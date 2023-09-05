#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to be duplicated
 * Return: pointer to the duplicate
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;

	while (str[len])
		len++;

	duplicate = (char *)malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
