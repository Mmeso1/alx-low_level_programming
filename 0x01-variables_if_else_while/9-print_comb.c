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
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
