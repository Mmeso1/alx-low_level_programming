#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - .....
 * @format: ......
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *separator = "";
	char *s;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				putchar(va_arg(args, int));
				break;

			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				s = (s == NULL) ? "(nil)" : s;
				printf("%s%s", separator, s);
				break;

			default:
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
