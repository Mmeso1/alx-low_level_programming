#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (a[i][j] == 44)
				_putchar(32);
			else
				_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
