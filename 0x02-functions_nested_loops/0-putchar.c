#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - This is the main function
 * Description: Print _putchar on a /n
 * Return: 0
 */
int main(void)
{
	int i;
	char [] string;
	string = "_putchar\n";

	for (i = 0; i < strlen(string); i++)
	{
		_putchar(string[i]);
	}
	return (0);
}
