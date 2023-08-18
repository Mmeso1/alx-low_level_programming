#include "main.h"

/**
 * print_square - print hashes in form of squares
 * @size: the length and width of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; i < n; i++)
		{
			for (; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
