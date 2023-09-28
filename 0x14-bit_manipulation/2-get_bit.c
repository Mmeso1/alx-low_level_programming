#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to be operated on
 * @index: the index of the number to be returned
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}
