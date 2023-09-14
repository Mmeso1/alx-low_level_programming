#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings that are the args
 * @separator: they separate the strings
 * @n: number of args
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	if (n > 0)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(args, const char *);

			if (str == NULL)
				printf("%s", "(nil)");
			printf("%s", str);

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
