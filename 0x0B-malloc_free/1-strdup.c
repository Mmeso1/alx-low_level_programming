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

	for  (len = 0; str[len] != '\0'; i++)
		;
	duplicate = (char *)malloc(sizeof(char) * (len));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];
	return (duplicate);
}
