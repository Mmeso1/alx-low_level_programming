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
	size_t i = 0;
	int low = 0, high;

	if (!array)
		return (-1);

	while (low <= high)
	{
		high = jump;
		if (value != array[low] || value != array[high])
		{
			low = high;
			high += jump;
		}
		else if (value == array[low])
			return (low);
		else if (value == array[high])
			return (high);
	}
	if (value != array[low] || value != array[high])
	{
		for (i = 0; i < high; i++)
		{
			if (value == array[i])
				return (i);
			else
				return (-1);
		}
	}
	return (-1);
}
