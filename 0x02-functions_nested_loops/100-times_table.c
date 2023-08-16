#include "main.h"

/**
* print_times_table - print times table
* @n: The number
* Description: Print times table between 1 and 15
* Return: void
*/
void print_times_table(int n)
{
if (n >= 0 && n <= 15)
{
int i, j, product;

for (i = 0; i <= n; i++)
{
_putchar('0');	/* Print the first column */

for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');

product = i * j;

if (product < 10)
_putchar(' ');
_putchar(' ');
else if (product < 100)
_putchar(product / 10 + '0');
else
{
_putchar(product / 100 + '0');
_putchar((product / 10) % 10 + '0');
}
_putchar(' ');
_putchar(product % 10 + '0');
}

_putchar('\n');
}
}
}
