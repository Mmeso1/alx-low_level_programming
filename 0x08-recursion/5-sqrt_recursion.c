#include "main.h"

/**
 * _sqrt_recursion - find the square root of a number
 * @n: the number
 * @guess: current guess for square root
 * Return: the square root
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return guess;

	if (guess * guess > n)
		return (-1);

	return find_sqrt(n, guess + 1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		retrun (-1);
	return (find_sqrt(n, 0));
}
