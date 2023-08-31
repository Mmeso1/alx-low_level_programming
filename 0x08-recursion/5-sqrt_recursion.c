#include "main.h"

/**
 * find_sqrt - find square root
 * @n: the other no.
 * @guess: current guess for square root
 * Return: the square root
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the other no.
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
