#include "main.h"

/**
 * print_times_table - print times table
 * Description: Print times table between 1 and 15
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;
	
	if (n >= 1 || n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				product = i * j;

				if (j == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (product < 10)
						_putchar(' ');
					else if (product > 10 && product < 100)
					{
						_putchar(product / 10 + '0');
						_putchar(product % 10 + '0');
					}
					else if (product > 100)
					{
						_putchar(product / 100 + '0');
						_putchar(product / 10 + '0');
						_putchar(product % 100 + '0');
					}
					_putchar(product % 10 + '0');
				}
			}
			_putchar('0');
		}
	}
}
