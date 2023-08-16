#include <stdio.h>
/**
 * times_table -  print the 9 times table
 * Description: This function prints the times table from 0 to 9
 * Return: void
 */
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int product = i * j;

			if (j < 0 || product < 10)
				_putchar(' ');
			else
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');

			if(j < 9)
				_putchar(',');
			else
				_putchar('\n');
		}

	}
}
