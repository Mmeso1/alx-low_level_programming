#include <stdio.h>

/**
 * main - This is the main function
 * Description: To print integers using putchar
 * Return: 0 for success :)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');
	return (0);
}
