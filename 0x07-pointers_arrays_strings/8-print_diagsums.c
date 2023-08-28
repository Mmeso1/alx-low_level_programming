#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonals
 * @a: the matrix
 * @size: the size
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;
	
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
