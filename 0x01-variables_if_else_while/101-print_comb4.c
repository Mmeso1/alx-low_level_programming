#include <stdio.h>

/**
 * main - This is the main function
 * Descritpion: For printing all possible combos with 3 different digits
 * Return: 0 for success
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			for (k = j + 1; k < 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || k != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
