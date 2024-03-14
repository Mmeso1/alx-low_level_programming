#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int i = 0;
	int low = 0, high = jump;

	if (!array || size == 0)
		return (-1);

	while (high < (int)size && array[high] < value)
	{
		printf("Value checked array[%d] = %d\n", low, array[low]);
		low = high;
		high += jump;
	}

	printf("Value checked array[%d] = %d\n", low, array[low]);
	printf("Value found between indexes [%d] and [%d]\n", low, high);

	for (i = low; i <= fmin(high, size - 1); i++)
	{
		printf("Value checked array[%d] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return i;
		}
	}
	return (-1);
}
