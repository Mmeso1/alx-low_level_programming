#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		result = result * 10 + (s[i] - '0');
	}
	return result * sign;
}
