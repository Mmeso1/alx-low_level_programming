#include "main.h"
#include <string.h>

/**
 * rev_string - just convert the string to its reverse
 * @s: argument
 */

void rev_string(char *s)
{
	int i;
	char temp;
	int length = strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
	}
}
