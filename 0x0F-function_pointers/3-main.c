#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: result of the operation
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	result = operation(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
