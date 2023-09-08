#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - returns a pointer to the allocated memory
 * @b: the argument
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	else
		return ptr;
}
