#include "main.h"
#include <string.h>

/**
 * puts_half - Print the second half of the string
 * @str: arg
 */

void puts_half(char *str)
{
	size_t i;
	int midpoint;

	if (strlen(str) % 2 == 0)
		midpoint = strlen(str) / 2;
	else
		midpoint = (strlen(str) / 2) + 1;

	for (i = midpoint; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
