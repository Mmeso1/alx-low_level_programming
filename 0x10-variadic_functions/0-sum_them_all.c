#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum the different argument
 * passed into the function
 * @n: the args
 */

int sum_them_all(const unsigned int n, ...)
{
	vargs args;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
