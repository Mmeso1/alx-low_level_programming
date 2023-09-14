#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add operation
 * @a: var a
 * @b: var b
 * Return: number result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract operation
 * @a: var a
 * @b: var b
 * Return: number result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply operation
 * @a:
 * @b:
 * Return:
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide operation
 * @a:
 * @b:
 * Return:
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - modulus operation
 * @a:
 * @b:
 * Return:
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
}
