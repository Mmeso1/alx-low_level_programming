#include "main.h"

/**
 * _atoi - Convert a string to an integer
 * @s: The string to be converted
 * Return: an int
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int r1 = result > INT_MAX / 10;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			int digit = *s - '0';
			if (sign == 1 && (r1 || r1 && digit > 7))
				return INT_MAX;
			if (sign == 1 && (r1 || r1 && digit > 8))
				return INT_MIN;

			result = result * 10 + digit;
		}
		else if (result != 0)
			break;
		s++;
	}
	return result * sign;
}
