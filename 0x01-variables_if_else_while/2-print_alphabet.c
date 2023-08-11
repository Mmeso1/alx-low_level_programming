#include <stdio.h>

/**
 * main - This is the main function
 * Description: To print out the alphabets
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
