#include <stdio.h>
#include "main.h"

/**
* print_number - Print a number using _putchar
* @n: The number to be printed
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n >= 100)
_putchar(n / 100 + '0');
if (n >= 10)
_putchar((n / 10) % 10 + '0');
_putchar(n % 10 + '0');
}

/**
* print_to_98 - Print natural numbers from n to 98
* @n: The starting number
*/
void print_to_98(int n)
{
int i = n;

while (i != 98)
{
print_number(i);
_putchar(',');
_putchar(' ');
if (i < 98)
i++;
else
i--;
}

print_number(98);
_putchar('\n');
}
