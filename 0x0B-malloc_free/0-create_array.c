#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of buffer
 * @c: char for initialization
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size);

	if (array != NULL)
	{
		for (; i < size - 1; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
