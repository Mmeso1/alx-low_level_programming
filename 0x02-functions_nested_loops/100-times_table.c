#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: the table limit (0 <= n <= 15)
*/
void print_times_table(int n)
{
:wqif (n >= 0 && n <= 15)
{
int i, j, p;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');

if (p < 10) _putchar(' '), _putchar(' ');
else if (p < 100) _putchar(' ');

_putchar('0' + p / 100);
_putchar('0' + (p / 10) % 10);
}
_putchar('0' + p % 10);
}
_putchar('\n');
}
}
}
