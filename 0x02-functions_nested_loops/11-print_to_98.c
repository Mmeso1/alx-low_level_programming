#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 * Description: This function prints all natural numbers from the given
 * starting number @n up to 98, separated by a comma and a space.
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98 || n == 98)
	{
		for (; i <= 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');

			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}

	}
	else 
	{
		for (; i >= 98; i--)
		{
		
			if (i > 100)
			{
				_putchar(i / 100 + '0');
				_putchar(i % 100 + '0');
				
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
	_putchar('\n');
}
