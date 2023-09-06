#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: the argument count
 * @av: the argument vector
 * Return: a char pointer
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		for (; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length;
	}

	result = malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';

	return (result);
}
