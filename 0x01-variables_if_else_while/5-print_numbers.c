#include <stdio.h>

/**
 * main - This is the main function
 * Description: To display numbers 0 - 9
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print("%i", i);
	}
	print('\n');

	return (0);
}
