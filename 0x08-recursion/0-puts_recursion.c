#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints chars recursively
 * @s: string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(_puts_recursion(s));
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
