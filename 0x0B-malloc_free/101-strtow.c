#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str:: the string to be split
 * Return: pointer to the char array
 */

char **strtow(char *str)
{
	int num_words = 0;
	char **strarr = NULL;
	char *token = strtok(str, " ");

	if (str == NULL || *str == '\0')
		return (NULL);

	while (token)
	{
		num_words++;
		strarr = realloc(strarr, sizeof(char *) * num_words);
		if (strarr == NULL)
		{
			return (NULL);
		}
		strarr[num_words - 1] = strdup(token);
		token = strtok(NULL, " ");
	}

	if (num_words == 0)
	{
		free(strarr);
		return (NULL);
	}
	strarr[num_words] = NULL;
	return (strarr);
}
