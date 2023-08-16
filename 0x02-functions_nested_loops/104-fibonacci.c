#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int i;
	unsigned int k1, k2, temp;
	k1 = 0;
	k2 = 2;

	printf("%u", k2);
	for (i = 1; i < 98; i++)
	{
		 temp = k1;
		 k1 = k2;
		 k2 = k2 + temp;

		 while (k2 >= 1000000000)
		 {
			 k2 -= 1000000000;
			 k1++;
		 }

		 printf(", %09u%09u", k1, k2);
	}
	printf("\n");

	return (0);
}
