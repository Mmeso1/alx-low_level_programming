#include "main.h"
#include "../0x02-functions_nested_loops/main.h"

/**
 * print_numbers - print numbers
 * Description: between 0 and 1
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_puchar('\n');
}
