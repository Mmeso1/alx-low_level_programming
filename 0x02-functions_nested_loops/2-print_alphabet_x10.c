#include <stdio.h>

/**
 * print_alphabet_x10 - Function name
 * Description: Print lowercase 10x
 * Return: Zero
 */
void print_alphabet_x10(void)
{
	int i = 97;
	int count = 10;

	while (count > 10)
	{
		for (; i <= 122; i++)
		{
			putchar(i);
		}
		putchar('\n');
		count--;
		i = 97;
	}
}
