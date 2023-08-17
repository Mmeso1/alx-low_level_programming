#include "main.h"

/**
 * print_line - print line literally
 * @n: argument
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
