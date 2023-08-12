#include <stdio.h>

/**
 * main - This is the main function
 * Description: To print out letters in reverse order
 * Return: 0 for success :)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
