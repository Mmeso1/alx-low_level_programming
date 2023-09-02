#include <stdio.h>

/**
 * main - Program that multiplies two numbers
 *  @argc: argument count
 *  @argv: argument vector
 *  Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i, num1, num2;

	if (argv == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d", num1 * num2);

		return (0);
	}
	else
	{
		printf("Error\nn");
		return (1);
	}
}
