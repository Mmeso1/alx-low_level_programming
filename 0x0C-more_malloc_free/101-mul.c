#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @str: the string to measure
 * Return: the length of str
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * print_product - prints the product of two numbers
 * @num1: the first number
 * @num2: the second number
 */
void print_product(char *num1, char *num2)
{
	unsigned int len1 = _strlen(num1);
	unsigned int len2 = _strlen(num2);
	unsigned int *result;
	unsigned int i, j, carry, product, sum;

	result = calloc(len1 + len2, sizeof(*result));

	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i < len1; i--)
	{
		carry = 0;
		for (j = len2 - 1; j < len2; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + product + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] += carry;
	}

	if (result[0] == 0)
		i = 1;
	else
		i = 0;

	for (; i < len1 + len2; i++)
		printf("%d", result[i]);

	printf("\n");
	free(result);
}

/**
 * main - entry point of the program
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(*argv[1]) || !_isdigit(*argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	print_product(argv[1], argv[2]);

	return (0);
}
