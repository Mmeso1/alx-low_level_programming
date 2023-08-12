#include <stdio.h>

/**
 * main - This is the main function
 * Description: To print numbers in hexadecimal
 * Return: 0 for success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + 'O');
	}

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
