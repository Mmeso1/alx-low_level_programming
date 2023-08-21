#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character in a string
 * @str: arg
 */

void puts2(char *str)
{
	size_t i;

	for(i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
