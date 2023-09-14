#include "function_pointers.h"

/**
 * int_index - searches for an integer and returns the index
 * @array: the array
 * @size: the array size
 * @cmp: function pointer
 * Return: the index of the match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (; i < size; i++)
		{
			if (cmp(array[i] != 0))
			{
				return (i);
			}
		}
	}
	return (-1);
}
