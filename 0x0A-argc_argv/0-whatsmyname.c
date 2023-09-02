#include <stdio.h>

/**
 * main -print the name of the file running
 * @argc: arg count
 * @argv: arg vetor
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
