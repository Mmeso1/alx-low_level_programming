#include "3-calc.h"

/**
 * main - the entry point
 * @argc:
 * @argv:
 * Return:
 */

int main (argc, *argv [])
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
		Return(99);
	}

	result = (atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
