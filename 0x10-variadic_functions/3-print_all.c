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
	char *separator = "", s;
	int i = 0;
	char c;
	float f;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator, c);
				break;

			case 'i':
				i = va_arg(args, int);
				printf("%s%d", separator, i);
				break;

			case 'f':
				f = va_arg(args, double);
				printf("%s%f", separator, f);
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
