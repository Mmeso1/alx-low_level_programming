#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print the numbers args
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL && n > 0)
	{
		va_list args;
		unsigned int i;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			printf("%d%s", va_arg(args, int), separator);

		}
		printf("\n");
	}
}
