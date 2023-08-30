#include "main.h"

/**
 * is_prime_number - check if a number is prime recursively
 * @n: the number to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return is_prime_recursive(n, 2);
}


/**
 * is_prime_recursive - helper function to check primality recursively
 * @n: the number to check
 * @divisor: the current divisor to check
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_recursive(int n, int divisor)
{
	if (divisor >= n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return is_prime_recursive(n, divisor + 1);
}
