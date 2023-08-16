#include <stdio.h>
#include "main.h"
/**
 * times_table -  print the 9 times table
 * Description: This function prints the times table from 0 to 9
 * Return: void
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (j != 0)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }

			if (product < 10)
				_putchar(' ');
			else
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
