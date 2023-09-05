#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of buffer
 * @c: char for initialization
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return NULL;

	array = (char *)malloc((size + 1) * sizeof(char));

	if (array != NULL)
	{
		for (; i < size - 1; i++)
		{
			array[i] = c;
		}
		array[size - 1] = '\0';
	}
	return array;
}
