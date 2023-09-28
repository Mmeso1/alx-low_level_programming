#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned integer
 * @b: Pointer to the binary string
 * Return: the converted bit,
 * or 0 if there are non-binary characters or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}
	return (result);
}
