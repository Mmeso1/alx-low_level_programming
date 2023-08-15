#include <stdio.h>
#include "main.h"

/**
 * main - This is the main function
 * Description: To print alphabets in lowercase
 * Return: Zero
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 122; i++)
	{
		putchar(i);
		putchar('\n');
	}
}

int main(void)
{
	print_alphabet();
	return(0);
}
