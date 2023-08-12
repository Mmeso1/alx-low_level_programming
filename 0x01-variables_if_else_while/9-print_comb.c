#include <stdio.h>

/**
 * main - main function
 * Description: Display all possible combination of single digit
 * Return: 0 for success (^‿ ~)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			putchar("%i, ", i + '0');
		}
		putchar("%i\n", i + '0');
	}
}
