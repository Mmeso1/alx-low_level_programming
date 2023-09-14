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
	if (n > 0)
	{
		va_list args;
		unsigned int i;

		va_start(args, n);

		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(args, int));

			if (separator != NULL)
				printf("%s", separator);

		}
		printf("%d\n", va_arg(args, int));

		va_end(args);
	}
}
