#include "main.h"

/**
 * _pow_recursion - power recursively, yeeeahhhhhh....
 * @x: the number to be powered
 * @y: the power
 * Return: 0 or 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
