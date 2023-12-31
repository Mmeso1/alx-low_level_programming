#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator -Executes a function given as a
 * parameter on each element of an array
 * @array: the array
 * @size: the array size
 * @action: the function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		for (; i < size; i++)
		{
			action(array[i]);
		}
	}
}
