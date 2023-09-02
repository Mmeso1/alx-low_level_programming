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
	int i = 1, num;

	if (argc > 1)
	{
		while (i < argc)
		{
			num = atoi(argv[i]);

			if (num >= 0) 
			{
				sum += num;
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
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
