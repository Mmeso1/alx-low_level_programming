#include "main.h"
#include <stdio.h>

/**
 * print_array - Print numbers in array consecutively
 * @a: array
 * @n: number of items in array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 0)
			printf(", ");
		printf("%i", a[i]);
	}
}
