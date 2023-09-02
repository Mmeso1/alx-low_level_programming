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

	if (argc > 1)
	{
		while (i < argc)
		{
			if (atoi(argv[i]) >= 48 || atoi(argv[i]) >= 57)
			{
				sum += atoi(argv[i]);
				i++;
			}
			else
			{
				printf("Error\n");
				return (0);
			}
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
