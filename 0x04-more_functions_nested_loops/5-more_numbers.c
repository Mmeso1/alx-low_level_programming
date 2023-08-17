#include "main.h"

/**
 * more_numbers - print 0-14 10x
 * Return: void
 */

void more_numbers(void)
{
	int i, j, count;

	count = 10;

	while (count)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				j = i / 10;
				_putchar(j + '0');
			}

			j = i % 10;
			_putchar(j + '0');
		}
		_putchar('\n');
		count--;
	}
}i
