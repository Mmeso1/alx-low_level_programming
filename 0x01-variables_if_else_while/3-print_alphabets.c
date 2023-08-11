#include <stdio.h>

/**
 * main - This is the main function
 * Description: To print out the alphabets in both upper and lower case
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
