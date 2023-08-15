#include <stdio.h>
#include <string.h>

/**
 * main - This is the main function
 * Description: Print _putchar on a /n
 * Return: 0
 */
int main(void)
{
	int i;
	char [] string = "_putchar\n";

	for (i = 0; i < strlen(string); i++)
	{
		putchar(string[i]);
	}
	return (0);
}
