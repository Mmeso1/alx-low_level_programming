#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: Array name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	long num;
	char *endptr;

	if (argc > 1)
	{
		while (i < argc)
		{
			num = strtol(argv[i], &endptr, 10);

			if (*endptr != '\0' || num < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
