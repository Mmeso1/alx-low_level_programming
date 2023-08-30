#include "main.h"

/**
 * factorial - the name says it all
 * @n: the number accepted
 * Return: the factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	if (n > 0)
		return (n * factorial(n - 1));

	return (0);
}
